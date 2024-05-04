#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "PrefabInfo.h"
#include "PrefabDataAsset.generated.h"

class UPrefabricatorAsset;

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API UPrefabDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrefabInfo> Prefabs;
    
    UPrefabDataAsset();

    UFUNCTION(BlueprintCallable)
    TArray<FPrefabInfo> GetValidPrefabs();
    
    UFUNCTION(BlueprintCallable)
    void ClearAll();
    
    UFUNCTION(BlueprintCallable)
    void AddPrefabAsset(UPrefabricatorAsset* Asset, FGameplayTag Shape, FGameplayTag AssetTag);
    
};

