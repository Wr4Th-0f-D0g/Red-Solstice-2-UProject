#pragma once
#include "CoreMinimal.h"
#include "SecondaryMissionParameters.generated.h"

USTRUCT(BlueprintType)
struct FSecondaryMissionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrisisMissionSpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CrisisMissionPerDeploymentMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimultaneousSecondaryMissionsMax;
    
    TWINSTICK_API FSecondaryMissionParameters();
};

