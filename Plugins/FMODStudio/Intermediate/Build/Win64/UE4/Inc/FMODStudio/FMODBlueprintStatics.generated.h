// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFMODBus;
struct FFMODEventInstance;
struct FTransform;
class UFMODAsset;
class UFMODEvent;
class UObject;
class UFMODBank;
class USceneComponent;
struct FVector;
class UFMODAudioComponent;
class UFMODVCA;
#ifdef FMODSTUDIO_FMODBlueprintStatics_generated_h
#error "FMODBlueprintStatics.generated.h already included, missing '#pragma once' in FMODBlueprintStatics.h"
#endif
#define FMODSTUDIO_FMODBlueprintStatics_generated_h

#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_SPARSE_DATA
#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBusSetMute); \
	DECLARE_FUNCTION(execBusSetPaused); \
	DECLARE_FUNCTION(execBusSetVolume); \
	DECLARE_FUNCTION(execBusStopAllEvents); \
	DECLARE_FUNCTION(execEventInstanceGetParameter); \
	DECLARE_FUNCTION(execEventInstanceGetParameterValue); \
	DECLARE_FUNCTION(execEventInstanceIsValid); \
	DECLARE_FUNCTION(execEventInstanceKeyOff); \
	DECLARE_FUNCTION(execEventInstancePlay); \
	DECLARE_FUNCTION(execEventInstanceRelease); \
	DECLARE_FUNCTION(execEventInstanceSetParameter); \
	DECLARE_FUNCTION(execEventInstanceSetPaused); \
	DECLARE_FUNCTION(execEventInstanceSetPitch); \
	DECLARE_FUNCTION(execEventInstanceSetProperty); \
	DECLARE_FUNCTION(execEventInstanceSetTransform); \
	DECLARE_FUNCTION(execEventInstanceSetVolume); \
	DECLARE_FUNCTION(execEventInstanceStop); \
	DECLARE_FUNCTION(execFindAssetByName); \
	DECLARE_FUNCTION(execFindEventByName); \
	DECLARE_FUNCTION(execFindEventInstances); \
	DECLARE_FUNCTION(execGetGlobalParameterByName); \
	DECLARE_FUNCTION(execGetGlobalParameterValueByName); \
	DECLARE_FUNCTION(execGetOutputDrivers); \
	DECLARE_FUNCTION(execIsBankLoaded); \
	DECLARE_FUNCTION(execLoadBank); \
	DECLARE_FUNCTION(execLoadBankSampleData); \
	DECLARE_FUNCTION(execLoadEventSampleData); \
	DECLARE_FUNCTION(execMixerResume); \
	DECLARE_FUNCTION(execMixerSuspend); \
	DECLARE_FUNCTION(execPlayEvent2D); \
	DECLARE_FUNCTION(execPlayEventAtLocation); \
	DECLARE_FUNCTION(execPlayEventAttached); \
	DECLARE_FUNCTION(execPlayEventAttachedWeapon); \
	DECLARE_FUNCTION(execSetGlobalParameterByName); \
	DECLARE_FUNCTION(execSetLocale); \
	DECLARE_FUNCTION(execSetOutputDriverByIndex); \
	DECLARE_FUNCTION(execSetOutputDriverByName); \
	DECLARE_FUNCTION(execUnloadBank); \
	DECLARE_FUNCTION(execUnloadBankSampleData); \
	DECLARE_FUNCTION(execUnloadEventSampleData); \
	DECLARE_FUNCTION(execVCASetVolume);


#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBusSetMute); \
	DECLARE_FUNCTION(execBusSetPaused); \
	DECLARE_FUNCTION(execBusSetVolume); \
	DECLARE_FUNCTION(execBusStopAllEvents); \
	DECLARE_FUNCTION(execEventInstanceGetParameter); \
	DECLARE_FUNCTION(execEventInstanceGetParameterValue); \
	DECLARE_FUNCTION(execEventInstanceIsValid); \
	DECLARE_FUNCTION(execEventInstanceKeyOff); \
	DECLARE_FUNCTION(execEventInstancePlay); \
	DECLARE_FUNCTION(execEventInstanceRelease); \
	DECLARE_FUNCTION(execEventInstanceSetParameter); \
	DECLARE_FUNCTION(execEventInstanceSetPaused); \
	DECLARE_FUNCTION(execEventInstanceSetPitch); \
	DECLARE_FUNCTION(execEventInstanceSetProperty); \
	DECLARE_FUNCTION(execEventInstanceSetTransform); \
	DECLARE_FUNCTION(execEventInstanceSetVolume); \
	DECLARE_FUNCTION(execEventInstanceStop); \
	DECLARE_FUNCTION(execFindAssetByName); \
	DECLARE_FUNCTION(execFindEventByName); \
	DECLARE_FUNCTION(execFindEventInstances); \
	DECLARE_FUNCTION(execGetGlobalParameterByName); \
	DECLARE_FUNCTION(execGetGlobalParameterValueByName); \
	DECLARE_FUNCTION(execGetOutputDrivers); \
	DECLARE_FUNCTION(execIsBankLoaded); \
	DECLARE_FUNCTION(execLoadBank); \
	DECLARE_FUNCTION(execLoadBankSampleData); \
	DECLARE_FUNCTION(execLoadEventSampleData); \
	DECLARE_FUNCTION(execMixerResume); \
	DECLARE_FUNCTION(execMixerSuspend); \
	DECLARE_FUNCTION(execPlayEvent2D); \
	DECLARE_FUNCTION(execPlayEventAtLocation); \
	DECLARE_FUNCTION(execPlayEventAttached); \
	DECLARE_FUNCTION(execPlayEventAttachedWeapon); \
	DECLARE_FUNCTION(execSetGlobalParameterByName); \
	DECLARE_FUNCTION(execSetLocale); \
	DECLARE_FUNCTION(execSetOutputDriverByIndex); \
	DECLARE_FUNCTION(execSetOutputDriverByName); \
	DECLARE_FUNCTION(execUnloadBank); \
	DECLARE_FUNCTION(execUnloadBankSampleData); \
	DECLARE_FUNCTION(execUnloadEventSampleData); \
	DECLARE_FUNCTION(execVCASetVolume);


#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFMODBlueprintStatics(); \
	friend struct Z_Construct_UClass_UFMODBlueprintStatics_Statics; \
public: \
	DECLARE_CLASS(UFMODBlueprintStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FMODStudio"), NO_API) \
	DECLARE_SERIALIZER(UFMODBlueprintStatics)


#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFMODBlueprintStatics(); \
	friend struct Z_Construct_UClass_UFMODBlueprintStatics_Statics; \
public: \
	DECLARE_CLASS(UFMODBlueprintStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FMODStudio"), NO_API) \
	DECLARE_SERIALIZER(UFMODBlueprintStatics)


#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODBlueprintStatics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODBlueprintStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODBlueprintStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODBlueprintStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODBlueprintStatics(UFMODBlueprintStatics&&); \
	NO_API UFMODBlueprintStatics(const UFMODBlueprintStatics&); \
public:


#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODBlueprintStatics(UFMODBlueprintStatics&&); \
	NO_API UFMODBlueprintStatics(const UFMODBlueprintStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODBlueprintStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODBlueprintStatics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFMODBlueprintStatics)


#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_PRIVATE_PROPERTY_OFFSET
#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_21_PROLOG
#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_SPARSE_DATA \
	TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_RPC_WRAPPERS \
	TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_INCLASS \
	TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_PRIVATE_PROPERTY_OFFSET \
	TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_SPARSE_DATA \
	TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_INCLASS_NO_PURE_DECLS \
	TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FMODSTUDIO_API UClass* StaticClass<class UFMODBlueprintStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_FMODBlueprintStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
