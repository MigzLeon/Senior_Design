// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_OpenCV/UE4_OpenCVGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4_OpenCVGameModeBase() {}
// Cross Module References
	UE4_OPENCV_API UClass* Z_Construct_UClass_AUE4_OpenCVGameModeBase_NoRegister();
	UE4_OPENCV_API UClass* Z_Construct_UClass_AUE4_OpenCVGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE4_OpenCV();
// End Cross Module References
	void AUE4_OpenCVGameModeBase::StaticRegisterNativesAUE4_OpenCVGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUE4_OpenCVGameModeBase_NoRegister()
	{
		return AUE4_OpenCVGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE4_OpenCVGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4_OpenCVGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_OpenCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4_OpenCVGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4_OpenCVGameModeBase.h" },
		{ "ModuleRelativePath", "UE4_OpenCVGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4_OpenCVGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4_OpenCVGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4_OpenCVGameModeBase_Statics::ClassParams = {
		&AUE4_OpenCVGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE4_OpenCVGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE4_OpenCVGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4_OpenCVGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4_OpenCVGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4_OpenCVGameModeBase, 1809973621);
	template<> UE4_OPENCV_API UClass* StaticClass<AUE4_OpenCVGameModeBase>()
	{
		return AUE4_OpenCVGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4_OpenCVGameModeBase(Z_Construct_UClass_AUE4_OpenCVGameModeBase, &AUE4_OpenCVGameModeBase::StaticClass, TEXT("/Script/UE4_OpenCV"), TEXT("AUE4_OpenCVGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4_OpenCVGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
