#pragma once
#include "CoreMinimal.h"
#include "TankReplicatedVehicleState.generated.h"

USTRUCT(BlueprintType)
struct FTankReplicatedVehicleState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrustLeftInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrustRightInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakeLeftInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakeRightInput;
    
    TWINSTICK_API FTankReplicatedVehicleState();
};

