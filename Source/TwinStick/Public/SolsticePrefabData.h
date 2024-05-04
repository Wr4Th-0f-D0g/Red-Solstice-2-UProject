#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "LevelPrefabData.h"
#include "PrefabAssetTags.h"
#include "SolsticePrefabData.generated.h"

class UDataTable;
class UPrefabricatorAssetCollection;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticePrefabData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrefabAssetTags> PrefabricatorAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelPrefabData> LevelPrefabData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPrefabricatorAssetCollection*> RandomizedLotCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> PrefabSpawnCaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisabledPrefabTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RandomizedProceduralMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionLocationsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ForcedUniquePrefabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludedDLCTags;
    
    USolsticePrefabData();

    UFUNCTION(BlueprintCallable)
    void PopulateDLCTags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRandomizedLevel(const FString& LevelName);
    
};

