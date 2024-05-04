#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleWheelsRawInput.h"
#include "DcxVehicleNoDriveRawInput.generated.h"

UCLASS(Blueprintable)
class DCXVEHICLE_API UDcxVehicleNoDriveRawInput : public UDcxVehicleWheelsRawInput {
    GENERATED_BODY()
public:
    UDcxVehicleNoDriveRawInput();

    UFUNCTION(BlueprintCallable)
    void SetSteer(const float NewSteer);
    
    UFUNCTION(BlueprintCallable)
    void SetBrake(const float NewBrake);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrake() const;
    
};

