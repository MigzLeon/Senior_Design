// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE4_OPENCV_OpenCV_Reader_generated_h
#error "OpenCV_Reader.generated.h already included, missing '#pragma once' in OpenCV_Reader.h"
#endif
#define UE4_OPENCV_OpenCV_Reader_generated_h

#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_SPARSE_DATA
#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallDetectEyes); \
	DECLARE_FUNCTION(execReadFrame);


#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallDetectEyes); \
	DECLARE_FUNCTION(execReadFrame);


#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_EVENT_PARMS
#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_CALLBACK_WRAPPERS
#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOpenCV_Reader(); \
	friend struct Z_Construct_UClass_AOpenCV_Reader_Statics; \
public: \
	DECLARE_CLASS(AOpenCV_Reader, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4_OpenCV"), NO_API) \
	DECLARE_SERIALIZER(AOpenCV_Reader)


#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAOpenCV_Reader(); \
	friend struct Z_Construct_UClass_AOpenCV_Reader_Statics; \
public: \
	DECLARE_CLASS(AOpenCV_Reader, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE4_OpenCV"), NO_API) \
	DECLARE_SERIALIZER(AOpenCV_Reader)


#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOpenCV_Reader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOpenCV_Reader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenCV_Reader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenCV_Reader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenCV_Reader(AOpenCV_Reader&&); \
	NO_API AOpenCV_Reader(const AOpenCV_Reader&); \
public:


#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenCV_Reader(AOpenCV_Reader&&); \
	NO_API AOpenCV_Reader(const AOpenCV_Reader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenCV_Reader); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenCV_Reader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOpenCV_Reader)


#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_PRIVATE_PROPERTY_OFFSET
#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_15_PROLOG \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_EVENT_PARMS


#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_PRIVATE_PROPERTY_OFFSET \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_SPARSE_DATA \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_RPC_WRAPPERS \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_CALLBACK_WRAPPERS \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_INCLASS \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_PRIVATE_PROPERTY_OFFSET \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_SPARSE_DATA \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_CALLBACK_WRAPPERS \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_INCLASS_NO_PURE_DECLS \
	Template_Source_UE4_OpenCV_OpenCV_Reader_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE4_OPENCV_API UClass* StaticClass<class AOpenCV_Reader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Template_Source_UE4_OpenCV_OpenCV_Reader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
