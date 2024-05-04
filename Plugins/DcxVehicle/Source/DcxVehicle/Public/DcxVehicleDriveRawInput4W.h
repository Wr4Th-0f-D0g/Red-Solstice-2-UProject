#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleDriveRawInput.h"
#include "DcxVehicleDriveRawInput4W.generated.h"

UCLASS(Blueprintable)
class DCXVEHICLE_API UDcxVehicleDriveRawInput4W : public UDcxVehicleDriveRawInput {
    GENERATED_BODY()
public:
    UDcxVehicleDriveRawInput4W();

    UFUNCTION(BlueprintCallable)
    void SetSteer(const float Steer);
    
    UFUNCTION(BlueprintCallable)
    void SetHandbrake(const float Handbrake);
    
    UFUNCTION(BlueprintCallable)
    void SetBrake(const float Brake);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHandbrake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrake() const;
    
};

