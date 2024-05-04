// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrefabricatorAsset;
#ifdef PREFABRICATORRUNTIME_FailedToSpawnPrefabDelegate_generated_h
#error "FailedToSpawnPrefabDelegate.generated.h already included, missing '#pragma once' in FailedToSpawnPrefabDelegate.h"
#endif
#define PREFABRICATORRUNTIME_FailedToSpawnPrefabDelegate_generated_h

#define TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_FailedToSpawnPrefabDelegate_h_7_DELEGATE \
struct _Script_PrefabricatorRuntime_eventFailedToSpawnPrefab_Parms \
{ \
	TSoftObjectPtr<UPrefabricatorAsset> PrefabAsset; \
}; \
static inline void FFailedToSpawnPrefab_DelegateWrapper(const FMulticastScriptDelegate& FailedToSpawnPrefab, const TSoftObjectPtr<UPrefabricatorAsset>& PrefabAsset) \
{ \
	_Script_PrefabricatorRuntime_eventFailedToSpawnPrefab_Parms Parms; \
	Parms.PrefabAsset=PrefabAsset; \
	FailedToSpawnPrefab.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickRemake_Plugins_prefabricator_Source_PrefabricatorRuntime_Public_FailedToSpawnPrefabDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
