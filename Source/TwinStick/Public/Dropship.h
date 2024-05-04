#pragma once
#include "CoreMinimal.h"
#include "EVehicleStatus.h"
#include "SolsticeVehicle.h"
#include "Dropship.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ADropship : public ASolsticeVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleStatus VehicleStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Passengers;
    
    ADropship(const FObjectInitializer& ObjectInitializer);

};

