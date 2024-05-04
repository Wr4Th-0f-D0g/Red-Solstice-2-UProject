#pragma once
#include "CoreMinimal.h"
#include "SolsticeVehicleData.h"
#include "SolsticeDeployedVehicle.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FSolsticeDeployedVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerState> OwningPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeVehicleData VehicleData;
    
    TWINSTICK_API FSolsticeDeployedVehicle();
};

