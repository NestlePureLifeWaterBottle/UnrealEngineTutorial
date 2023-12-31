// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LightSwitch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TUTORIAL2_LightSwitch_generated_h
#error "LightSwitch.generated.h already included, missing '#pragma once' in LightSwitch.h"
#endif
#define TUTORIAL2_LightSwitch_generated_h

#define FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_SPARSE_DATA
#define FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_RPC_WRAPPERS \
	virtual void OnOverlapEnd_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex); \
	virtual void OnOverlapBegin_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
 \
	DECLARE_FUNCTION(execToggleLight); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleLight); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_ACCESSORS
#define FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_CALLBACK_WRAPPERS
#define FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSwitch(); \
	friend struct Z_Construct_UClass_ALightSwitch_Statics; \
public: \
	DECLARE_CLASS(ALightSwitch, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tutorial2"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitch)


#define FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALightSwitch(); \
	friend struct Z_Construct_UClass_ALightSwitch_Statics; \
public: \
	DECLARE_CLASS(ALightSwitch, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tutorial2"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitch)


#define FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightSwitch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitch(ALightSwitch&&); \
	NO_API ALightSwitch(const ALightSwitch&); \
public: \
	NO_API virtual ~ALightSwitch();


#define FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitch(ALightSwitch&&); \
	NO_API ALightSwitch(const ALightSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSwitch) \
	NO_API virtual ~ALightSwitch();


#define FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_9_PROLOG
#define FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_SPARSE_DATA \
	FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_RPC_WRAPPERS \
	FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_ACCESSORS \
	FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_CALLBACK_WRAPPERS \
	FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_INCLASS \
	FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_SPARSE_DATA \
	FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_ACCESSORS \
	FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_CALLBACK_WRAPPERS \
	FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_INCLASS_NO_PURE_DECLS \
	FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TUTORIAL2_API UClass* StaticClass<class ALightSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_UnrealEngineTutorial_Tutorial2_Source_Tutorial2_Public_LightSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
