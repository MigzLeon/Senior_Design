// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_OpenCV/OpenCV_Reader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenCV_Reader() {}
// Cross Module References
	UE4_OPENCV_API UClass* Z_Construct_UClass_AOpenCV_Reader_NoRegister();
	UE4_OPENCV_API UClass* Z_Construct_UClass_AOpenCV_Reader();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UE4_OpenCV();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AOpenCV_Reader::execCallDetectEyes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallDetectEyes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOpenCV_Reader::execReadFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadFrame();
		P_NATIVE_END;
	}
	static FName NAME_AOpenCV_Reader_OnNextVideoFrame = FName(TEXT("OnNextVideoFrame"));
	void AOpenCV_Reader::OnNextVideoFrame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOpenCV_Reader_OnNextVideoFrame),NULL);
	}
	void AOpenCV_Reader::StaticRegisterNativesAOpenCV_Reader()
	{
		UClass* Class = AOpenCV_Reader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallDetectEyes", &AOpenCV_Reader::execCallDetectEyes },
			{ "ReadFrame", &AOpenCV_Reader::execReadFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOpenCV_Reader_CallDetectEyes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCV_Reader_CallDetectEyes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = Camera)\n//\x09void detectEyes(cv::Mat& frameT, cv::CascadeClassifier& faceCascadeT, cv::CascadeClassifier& eyeCascadeT);\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = Camera)\n       void detectEyes(cv::Mat& frameT, cv::CascadeClassifier& faceCascadeT, cv::CascadeClassifier& eyeCascadeT);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenCV_Reader_CallDetectEyes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenCV_Reader, nullptr, "CallDetectEyes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenCV_Reader_CallDetectEyes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCV_Reader_CallDetectEyes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenCV_Reader_CallDetectEyes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenCV_Reader_CallDetectEyes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenCV_Reader_OnNextVideoFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCV_Reader_OnNextVideoFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Blueprint Event called every time the video frame is updated\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "Blueprint Event called every time the video frame is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenCV_Reader_OnNextVideoFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenCV_Reader, nullptr, "OnNextVideoFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenCV_Reader_OnNextVideoFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCV_Reader_OnNextVideoFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenCV_Reader_OnNextVideoFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenCV_Reader_OnNextVideoFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenCV_Reader_ReadFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenCV_Reader_ReadFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "// reads the current video frame\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "reads the current video frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenCV_Reader_ReadFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenCV_Reader, nullptr, "ReadFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenCV_Reader_ReadFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOpenCV_Reader_ReadFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenCV_Reader_ReadFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenCV_Reader_ReadFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOpenCV_Reader_NoRegister()
	{
		return AOpenCV_Reader::StaticClass();
	}
	struct Z_Construct_UClass_AOpenCV_Reader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yposition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_yposition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xposition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_xposition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_Texture2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera_Texture2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MatPost_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera_MatPost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MatRaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera_MatRaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera_RenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MediaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera_MediaTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MediaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera_MediaPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VideoSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isStreamOpen_MetaData[];
#endif
		static void NewProp_isStreamOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isStreamOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiply_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefreshRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoTrackID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VideoTrackID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CameraID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Screen_Post_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Screen_Post;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Screen_Raw_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Screen_Raw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rootComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOpenCV_Reader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_OpenCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOpenCV_Reader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOpenCV_Reader_CallDetectEyes, "CallDetectEyes" }, // 416333245
		{ &Z_Construct_UFunction_AOpenCV_Reader_OnNextVideoFrame, "OnNextVideoFrame" }, // 969631732
		{ &Z_Construct_UFunction_AOpenCV_Reader_ReadFrame, "ReadFrame" }, // 3864838962
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenCV_Reader.h" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_yposition_MetaData[] = {
		{ "Category", "OpenCV_Reader" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_yposition = { "yposition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, yposition), METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_yposition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_yposition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_xposition_MetaData[] = {
		{ "Category", "OpenCV_Reader" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_xposition = { "xposition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, xposition), METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_xposition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_xposition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_ColorData_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// Color Data\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "Color Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_ColorData = { "ColorData", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, ColorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_ColorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_ColorData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_ColorData_Inner = { "ColorData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_Texture2D_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Texture\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "Camera Texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_Texture2D = { "Camera_Texture2D", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, Camera_Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_Texture2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_Texture2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MatPost_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Material Instance\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "Camera Material Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MatPost = { "Camera_MatPost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, Camera_MatPost), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MatPost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MatPost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MatRaw_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Material Instance\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "Camera Material Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MatRaw = { "Camera_MatRaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, Camera_MatRaw), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MatRaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MatRaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_RenderTarget_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Render Target\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "Camera Render Target" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_RenderTarget = { "Camera_RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, Camera_RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MediaTexture_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Camera Media Texture\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "Camera Media Texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MediaTexture = { "Camera_MediaTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, Camera_MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MediaTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MediaPlayer_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MediaPlayer = { "Camera_MediaPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, Camera_MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_VideoSize_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The videos width and height (width, height)\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "The videos width and height (width, height)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_VideoSize = { "VideoSize", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, VideoSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_VideoSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_VideoSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_isStreamOpen_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// is the camera stream on\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "is the camera stream on" },
	};
#endif
	void Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_isStreamOpen_SetBit(void* Obj)
	{
		((AOpenCV_Reader*)Obj)->isStreamOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_isStreamOpen = { "isStreamOpen", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AOpenCV_Reader), &Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_isStreamOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_isStreamOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_isStreamOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Multiply_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Multiply = { "Multiply", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, Multiply), METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Multiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Multiply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, Brightness), METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Brightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_RefreshTimer_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The refresh timer\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "The refresh timer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_RefreshTimer = { "RefreshTimer", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, RefreshTimer), METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_RefreshTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_RefreshTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_RefreshRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0" },
		{ "Comment", "// The rate at which the color data array and video texture is updated (in frames per second)\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "The rate at which the color data array and video texture is updated (in frames per second)" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_RefreshRate = { "RefreshRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, RefreshRate), METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_RefreshRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_RefreshRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_VideoTrackID_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0" },
		{ "Comment", "// The device ID opened by the Video Stream\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "The device ID opened by the Video Stream" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_VideoTrackID = { "VideoTrackID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, VideoTrackID), METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_VideoTrackID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_VideoTrackID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_CameraID_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0" },
		{ "Comment", "// The device ID opened by the Video Stream\n" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
		{ "ToolTip", "The device ID opened by the Video Stream" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_CameraID = { "CameraID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, CameraID), METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_CameraID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_CameraID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Screen_Post_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Screen_Post = { "Screen_Post", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, Screen_Post), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Screen_Post_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Screen_Post_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Screen_Raw_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Screen_Raw = { "Screen_Raw", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, Screen_Raw), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Screen_Raw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Screen_Raw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_rootComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OpenCV_Reader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_rootComp = { "rootComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOpenCV_Reader, rootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_rootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_rootComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOpenCV_Reader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_yposition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_xposition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_ColorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_ColorData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_Texture2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MatPost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MatRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_RenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MediaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Camera_MediaPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_VideoSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_isStreamOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Multiply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Brightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_RefreshTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_RefreshRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_VideoTrackID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_CameraID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Screen_Post,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_Screen_Raw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenCV_Reader_Statics::NewProp_rootComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOpenCV_Reader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOpenCV_Reader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOpenCV_Reader_Statics::ClassParams = {
		&AOpenCV_Reader::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOpenCV_Reader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOpenCV_Reader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOpenCV_Reader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOpenCV_Reader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOpenCV_Reader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOpenCV_Reader, 867637666);
	template<> UE4_OPENCV_API UClass* StaticClass<AOpenCV_Reader>()
	{
		return AOpenCV_Reader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOpenCV_Reader(Z_Construct_UClass_AOpenCV_Reader, &AOpenCV_Reader::StaticClass, TEXT("/Script/UE4_OpenCV"), TEXT("AOpenCV_Reader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenCV_Reader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
