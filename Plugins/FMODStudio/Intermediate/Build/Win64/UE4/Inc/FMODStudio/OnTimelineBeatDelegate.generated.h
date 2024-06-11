// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FMODSTUDIO_OnTimelineBeatDelegate_generated_h
#error "OnTimelineBeatDelegate.generated.h already included, missing '#pragma once' in OnTimelineBeatDelegate.h"
#endif
#define FMODSTUDIO_OnTimelineBeatDelegate_generated_h

#define TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_OnTimelineBeatDelegate_h_5_DELEGATE \
struct _Script_FMODStudio_eventOnTimelineBeat_Parms \
{ \
	int32 Bar; \
	int32 Beat; \
	int32 position; \
	float Tempo; \
	int32 TimeSignatureUpper; \
	int32 TimeSignatureLower; \
}; \
static inline void FOnTimelineBeat_DelegateWrapper(const FMulticastScriptDelegate& OnTimelineBeat, int32 Bar, int32 Beat, int32 position, float Tempo, int32 TimeSignatureUpper, int32 TimeSignatureLower) \
{ \
	_Script_FMODStudio_eventOnTimelineBeat_Parms Parms; \
	Parms.Bar=Bar; \
	Parms.Beat=Beat; \
	Parms.position=position; \
	Parms.Tempo=Tempo; \
	Parms.TimeSignatureUpper=TimeSignatureUpper; \
	Parms.TimeSignatureLower=TimeSignatureLower; \
	OnTimelineBeat.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_FMODStudio_Source_FMODStudio_Public_OnTimelineBeatDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
