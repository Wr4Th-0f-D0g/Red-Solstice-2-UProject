#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PrefabAssetTags.generated.h"

class UPrefabricatorAsset;
class UPrefabricatorAssetCollection;

USTRUCT(BlueprintType)
struct FPrefabAssetTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AssetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DLCTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrefabricatorAssetCollection* PrefabCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPrefabricatorAsset> PrefabAsset;
    
    TWINSTICK_API FPrefabAssetTags();
};

