#pragma once
#include "CoreMinimal.h"
#include "MissionPrefab.generated.h"

class UPrefabricatorAsset;

USTRUCT(BlueprintType)
struct FMissionPrefab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UPrefabricatorAsset>> MatchingPrefabs;
    
    TWINSTICK_API FMissionPrefab();
};

