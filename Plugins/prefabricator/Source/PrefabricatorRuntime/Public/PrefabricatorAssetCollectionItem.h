#pragma once
#include "CoreMinimal.h"
#include "PrefabricatorAssetCollectionItem.generated.h"

class UPrefabricatorAsset;

USTRUCT(BlueprintType)
struct PREFABRICATORRUNTIME_API FPrefabricatorAssetCollectionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPrefabricatorAsset> PrefabAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmptyLot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabledPrefab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustExist;
    
    FPrefabricatorAssetCollectionItem();
};

