// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMapSystem_MapElementBase;
#ifdef SOLSTICEMINIMAP_OnLargeMapElementHoveredDelegate_generated_h
#error "OnLargeMapElementHoveredDelegate.generated.h already included, missing '#pragma once' in OnLargeMapElementHoveredDelegate.h"
#endif
#define SOLSTICEMINIMAP_OnLargeMapElementHoveredDelegate_generated_h

#define TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_OnLargeMapElementHoveredDelegate_h_7_DELEGATE \
struct _Script_SolsticeMinimap_eventOnLargeMapElementHovered_Parms \
{ \
	UMapSystem_MapElementBase* HoveredElement; \
}; \
static inline void FOnLargeMapElementHovered_DelegateWrapper(const FMulticastScriptDelegate& OnLargeMapElementHovered, UMapSystem_MapElementBase* HoveredElement) \
{ \
	_Script_SolsticeMinimap_eventOnLargeMapElementHovered_Parms Parms; \
	Parms.HoveredElement=HoveredElement; \
	OnLargeMapElementHovered.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_SolsticeMinimap_Source_SolsticeMinimap_Public_OnLargeMapElementHoveredDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
