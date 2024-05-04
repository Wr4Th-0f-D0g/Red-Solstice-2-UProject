#pragma once
#include "CoreMinimal.h"
#include "DcxVehicle.h"
#include "DcxVehicle4W.generated.h"

class UDcxVehicleDriveComponent4W;

UCLASS(Abstract, Blueprintable)
class DCXVEHICLE_API ADcxVehicle4W : public ADcxVehicle {
    GENERATED_BODY()
public:
    ADcxVehicle4W(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDcxVehicleDriveComponent4W* GetVehicleDrive4W() const;
    
};

