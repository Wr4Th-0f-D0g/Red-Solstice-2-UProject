#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PrefabInfo.generated.h"

class UPrefabricatorAsset;

USTRUCT(BlueprintType)
struct PREFABRICATORRUNTIME_API FPrefabInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPrefabricatorAsset> PrefabAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PrefabShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PrefabName;
    
    FPrefabInfo();
};

