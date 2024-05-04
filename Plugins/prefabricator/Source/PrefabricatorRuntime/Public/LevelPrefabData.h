#pragma once
#include "CoreMinimal.h"
#include "LevelPrefabData.generated.h"

class UPrefabricatorAsset;
class UPrefabricatorAssetCollection;

USTRUCT(BlueprintType)
struct FLevelPrefabData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPrefabricatorAssetCollection*> LevelPrefabCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UPrefabricatorAsset>> LevelPrefabAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPrefabricatorAssetCollection*> StaticPrefabCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UPrefabricatorAsset>> StaticPrefabs;
    
    PREFABRICATORRUNTIME_API FLevelPrefabData();
};

