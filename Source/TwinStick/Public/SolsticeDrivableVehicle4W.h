#pragma once
#include "CoreMinimal.h"
#include "SolsticeDrivableVehicle.h"
#include "SolsticeDrivableVehicle4W.generated.h"

class USolsticeVehicleMovementComponent4W;

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticeDrivableVehicle4W : public ASolsticeDrivableVehicle {
    GENERATED_BODY()
public:
    ASolsticeDrivableVehicle4W(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USolsticeVehicleMovementComponent4W* GetVehicleDrive4W() const;
    
};

