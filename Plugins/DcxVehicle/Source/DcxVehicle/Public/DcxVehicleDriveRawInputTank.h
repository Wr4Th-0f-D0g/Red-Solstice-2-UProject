#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleDriveRawInput.h"
#include "DcxVehicleDriveRawInputTank.generated.h"

UCLASS(Blueprintable)
class DCXVEHICLE_API UDcxVehicleDriveRawInputTank : public UDcxVehicleDriveRawInput {
    GENERATED_BODY()
public:
    UDcxVehicleDriveRawInputTank();

    UFUNCTION(BlueprintCallable)
    void SetRightThrust(float Thrust);
    
    UFUNCTION(BlueprintCallable)
    void SetRightBrake(float Brake);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftThrust(float Thrust);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftBrake(float Brake);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightThrust() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightBrake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftThrust() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftBrake() const;
    
};

