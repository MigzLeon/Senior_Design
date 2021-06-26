// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4_OpenCV/Public/DefaultSceneRoot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultSceneRoot() {}
// Cross Module References
	UE4_OPENCV_API UClass* Z_Construct_UClass_UDefaultSceneRoot_NoRegister();
	UE4_OPENCV_API UClass* Z_Construct_UClass_UDefaultSceneRoot();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_UE4_OpenCV();
// End Cross Module References
	void UDefaultSceneRoot::StaticRegisterNativesUDefaultSceneRoot()
	{
	}
	UClass* Z_Construct_UClass_UDefaultSceneRoot_NoRegister()
	{
		return UDefaultSceneRoot::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultSceneRoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultSceneRoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4_OpenCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultSceneRoot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DefaultSceneRoot.h" },
		{ "ModuleRelativePath", "Public/DefaultSceneRoot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultSceneRoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultSceneRoot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDefaultSceneRoot_Statics::ClassParams = {
		&UDefaultSceneRoot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultSceneRoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultSceneRoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultSceneRoot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDefaultSceneRoot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDefaultSceneRoot, 2744465625);
	template<> UE4_OPENCV_API UClass* StaticClass<UDefaultSceneRoot>()
	{
		return UDefaultSceneRoot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDefaultSceneRoot(Z_Construct_UClass_UDefaultSceneRoot, &UDefaultSceneRoot::StaticClass, TEXT("/Script/UE4_OpenCV"), TEXT("UDefaultSceneRoot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultSceneRoot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
