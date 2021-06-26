#include "OpenCV_Reader.h"

int x_reader = 0, y_reader = 0;
cv::Vec3f getEyeball(cv::Mat& eye, std::vector<cv::Vec3f>& circles)
{
	std::vector<int> sums(circles.size(), 0);
	for (int y = 0; y < eye.rows; y++)
	{
		uchar* ptr = eye.ptr<uchar>(y);
		for (int x = 0; x < eye.cols; x++)
		{
			int value = static_cast<int>(*ptr);
			for (int i = 0; i < circles.size(); i++)
			{
				cv::Point center((int)std::round(circles[i][0]), (int)std::round(circles[i][1]));
				int radius = (int)std::round(circles[i][2]);
				if (std::pow(x - center.x, 2) + std::pow(y - center.y, 2) < std::pow(radius, 2))
				{
					sums[i] += value;
				}
			}
			++ptr;
		}
	}
	int smallestSum = 9999999;
	int smallestSumIndex = -1;
	for (int i = 0; i < circles.size(); i++)
	{
		if (sums[i] < smallestSum)
		{
			smallestSum = sums[i];
			smallestSumIndex = i;
		}
	}
	return circles[smallestSumIndex];
}

cv::Rect getLeftmostEye(std::vector<cv::Rect>& eyes)
{
	int leftmost = 99999999;
	int leftmostIndex = -1;
	for (int i = 0; i < eyes.size(); i++)
	{
		if (eyes[i].tl().x < leftmost)
		{
			leftmost = eyes[i].tl().x;
			leftmostIndex = i;
		}
	}
	return eyes[leftmostIndex];
}


cv::Point stabilize(std::vector<cv::Point>& points, int windowSize)
{
	float sumX = 0;
	float sumY = 0;
	int count = 0;
	for (int i = std::max(0, (int)(points.size() - windowSize)); i < points.size(); i++)
	{
		sumX += points[i].x;
		sumY += points[i].y;
		++count;
	}
	if (count > 0)
	{
		sumX /= count;
		sumY /= count;
	}
	return cv::Point(sumX, sumY);
}

void AOpenCV_Reader::detectEyes(cv::Mat& frame, cv::CascadeClassifier& faceCascade, cv::CascadeClassifier& eyeCascade)
{

	cv::cvtColor(frame, grayscale, cv::COLOR_BGR2GRAY); // convert image to grayscale
	cv::equalizeHist(grayscale, grayscale); // enhance image contrast 

	faceCascade.detectMultiScale(grayscale, faces, 1.1, 2, 2 | cv::CASCADE_SCALE_IMAGE, cv::Size(150, 150));
	if (!(faces.size() == 0)) {
		rectangle(grayscale, faces[0].tl(), faces[0].br(), cv::Scalar(255, 0, 0), 2);
		cv::Mat face = grayscale(faces[0]); // crop the face

		cvEyeCascade.detectMultiScale(face, eyes, 1.1, 2, 0 | cv::CASCADE_SCALE_IMAGE, cv::Size(30, 30)); // same thing as above    
		//if (eyes.size() != 2) return; // both eyes were not detected
		if (!(eyes.size() == 0)) {
			for (cv::Rect& eye : eyes)
			{
				rectangle(grayscale, faces[0].tl() + eye.tl(), faces[0].tl() + eye.br(), cv::Scalar(0, 255, 0), 2);
			}

			cv::Rect eyeRect = getLeftmostEye(eyes);
			cv::Mat eye = face(eyeRect); // crop the leftmost eye
			cv::equalizeHist(eye, eye);
			cv::HoughCircles(eye, circles, cv::HOUGH_GRADIENT, 1, eye.cols / 8, 250, 15, eye.rows / 8, eye.rows / 3);


			if (circles.size() > 0)
			{
				cv::Vec3f eyeball = getEyeball(eye, circles);
				cv::Point center(eyeball[0], eyeball[1]);
				centers.push_back(center);
				center = stabilize(centers, 5);
				if (centers.size() > 1)
				{
					cv::Point diff;
					diff.x = (center.x - lastPoint.x) * 20;
					diff.y = (center.y - lastPoint.y) * -30;
					mousePoint += diff;
				}
				lastPoint = center;
				int radius = (int)eyeball[2];
				cv::circle(grayscale, faces[0].tl() + eyeRect.tl() + center, radius, cv::Scalar(0, 0, 255), 2);
				cv::circle(eye, center, radius, cv::Scalar(255, 255, 255), 2);
			}
		}
		
	}

}

// Sets default values
AOpenCV_Reader::AOpenCV_Reader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	PrimaryActorTick.bCanEverTick = true;
	// ensure the root component exists
	if (!RootComponent)
		RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
	FAttachmentTransformRules rules = FAttachmentTransformRules(EAttachmentRule::KeepRelative, false);
	Screen_Raw = CreateDefaultSubobject<UStaticMeshComponent>("Screen Raw");
	Screen_Raw->AttachToComponent(RootComponent, rules);
	Screen_Post = CreateDefaultSubobject<UStaticMeshComponent>("Screen Post");
	Screen_Post->AttachToComponent(RootComponent, rules);
	Brightness = 0;
	Multiply = 1;
	// Initialize OpenCV and webcam properties
	CameraID = 1;
	VideoTrackID = 0;
	isStreamOpen = false;
	VideoSize = FVector2D(1920, 1080);
	RefreshRate = 30.0f;
	

}
void changeMouse(cv::Mat& frame, cv::Point& location)
{
	if (location.x > frame.cols) location.x = frame.cols;
	if (location.x < 0) location.x = 0;
	if (location.y > frame.rows) location.y = frame.rows;
	if (location.y < 0) location.y = 0;
	
	//FProperty* y_position = static_cast<int>(location.y);
	//UE_LOG(LogTemp, Warning, TEXT("mousemove %d %d"), static_cast<int>(location.x), static_cast<int>(location.y));
	x_reader = static_cast<int>(location.x);
	y_reader = static_cast<int>(location.y);

	//system(("xdotool mousemove " + std::to_string(location.x) + " " + std::to_string(location.y)).c_str());
}
// Called when the game starts or when spawned
void AOpenCV_Reader::BeginPlay() {
	Super::BeginPlay();
	//UE_LOG(LogTemp, Warning, TEXT("Some warning message"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("shit"));
	isStreamOpen = true;
	// Prepare the color data array
	ColorData.AddDefaulted(VideoSize.X * VideoSize.Y);
	// setup openCV
	cvSize = cv::Size(VideoSize.X, VideoSize.Y);
	cvMat = cv::Mat(cvSize, CV_8UC4, ColorData.GetData());

	LoadOpenCV();
	// create dynamic texture
	Camera_Texture2D = UTexture2D::CreateTransient(VideoSize.X, VideoSize.Y, PF_B8G8R8A8);
#if WITH_EDITORONLY_DATA
	Camera_Texture2D->MipGenSettings = TMGS_NoMipmaps;
#endif
	Camera_Texture2D->SRGB = Camera_RenderTarget->SRGB;
}

void AOpenCV_Reader::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	RefreshTimer += DeltaTime;
	if (isStreamOpen && RefreshTimer >= 1.0f / RefreshRate) {
		RefreshTimer -= 1.0f / RefreshRate;
		ReadFrame();
		OnNextVideoFrame();
	}
}

void AOpenCV_Reader::ReadFrame() {
	
	
	cv::Point cvTestPoint1 = cv::Point(50, 50);
	cv::Point cvTestPoint2 = cv::Point(200, 200);

	//faces.clear();
	//TArray<cv::Rect> faces;
	
	if (!Camera_Texture2D || !Camera_RenderTarget) return;
	// Read the pixels from the RenderTarget and store them in a FColor array
	FRenderTarget* RenderTarget = Camera_RenderTarget->GameThread_GetRenderTargetResource();
	RenderTarget->ReadPixels(ColorData);
	// Get the color data
	cvMat = cv::Mat(cvSize, CV_8UC4, ColorData.GetData());
	cvMat.convertTo(cvMat, -1, Multiply, Brightness);
	detectEyes(cvMat, cvFaceCascade, cvEyeCascade);
	changeMouse(cvMat, mousePoint);
	xposition = x_reader;
	yposition = y_reader;
	// show the openCV window
	if (!cvMat.empty())
		cv::imshow("Display", grayscale);
	// Lock the texture so we can read / write to it
	void* TextureData = Camera_Texture2D->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	const int32 TextureDataSize = ColorData.Num() * 4;
	// set the texture data
	FMemory::Memcpy(TextureData, ColorData.GetData(), TextureDataSize);
	// Unlock the texture
	Camera_Texture2D->PlatformData->Mips[0].BulkData.Unlock();
	// Apply Texture changes to GPU memory
	Camera_Texture2D->UpdateResource();
	
}

void AOpenCV_Reader::CallDetectEyes() {
	detectEyes(cvMat, cvFaceCascade, cvEyeCascade);
	
}

void AOpenCV_Reader::LoadOpenCV() {
	// setup openCV
	FString ProjectPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir());

	Path_Cascade_Face = ProjectPath + Path_Cascade_Face;
	Path_Cascade_Eyes = ProjectPath + Path_Cascade_Eyes;

	cvFaceCascade = cv::CascadeClassifier(TCHAR_TO_UTF8(*Path_Cascade_Face));
	cvEyeCascade = cv::CascadeClassifier(TCHAR_TO_UTF8(*Path_Cascade_Eyes));

	// load cascades
	if (!cvFaceCascade.load(TCHAR_TO_UTF8(*Path_Cascade_Face)))
	{
		UE_LOG(LogTemp, Error, TEXT("Error loading face cascade\n"));
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Path_Cascade_Face);
	};
	if (!cvEyeCascade.load(TCHAR_TO_UTF8(*Path_Cascade_Eyes)))
	{
		UE_LOG(LogTemp, Error, TEXT("Error loading eyes cascade\n"));
		UE_LOG(LogTemp, Warning, TEXT("%s"), *Path_Cascade_Eyes);
	};
}