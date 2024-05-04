// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FMODSTUDIO_OnTimelineMarkerDelegate_generated_h
#error "OnTimelineMarkerDelegate.generated.h already included, missing '#pragma once' in OnTimelineMarkerDelegate.h"
#endif
#define FMODSTUDIO_OnTimelineMarkerDelegate_generated_h

#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_OnTimelineMarkerDelegate_h_5_DELEGATE \
struct _Script_FMODStudio_eventOnTimelineMarker_Parms \
{ \
	FString Name; \
	int32 position; \
}; \
static inline void FOnTimelineMarker_DelegateWrapper(const FMulticastScriptDelegate& OnTimelineMarker, const FString& Name, int32 position) \
{ \
	_Script_FMODStudio_eventOnTimelineMarker_Parms Parms; \
	Parms.Name=Name; \
	Parms.position=position; \
	OnTimelineMarker.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_OnTimelineMarkerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
