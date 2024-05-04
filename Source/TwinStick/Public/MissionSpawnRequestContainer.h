#pragma once
#include "CoreMinimal.h"
#include "MissionSpawnRequest.h"
#include "MissionSpawnRequestContainer.generated.h"

USTRUCT(BlueprintType)
struct FMissionSpawnRequestContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMissionSpawnRequest> SpawnRequests;
    
    TWINSTICK_API FMissionSpawnRequestContainer();
};

