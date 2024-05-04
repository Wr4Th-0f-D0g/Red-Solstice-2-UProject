#pragma once
#include "CoreMinimal.h"
#include "SolsticeDrivableVehicle.h"
#include "SolsticeDrivableVehicleNW.generated.h"

class USolsticeVehicleMovementComponentNW;

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticeDrivableVehicleNW : public ASolsticeDrivableVehicle {
    GENERATED_BODY()
public:
    ASolsticeDrivableVehicleNW(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USolsticeVehicleMovementComponentNW* GetVehicleDriveNW() const;
    
};

