#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleWheelsRawInput.h"
#include "DcxVehicleDriveRawInput.generated.h"

UCLASS(Abstract, Blueprintable)
class DCXVEHICLE_API UDcxVehicleDriveRawInput : public UDcxVehicleWheelsRawInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ClutchIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGearUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGearDown;
    
public:
    UDcxVehicleDriveRawInput();

    UFUNCTION(BlueprintCallable)
    void SetGearUp(const bool bGearUpPressed);
    
    UFUNCTION(BlueprintCallable)
    void SetGearDown(const bool bGearDownPressed);
    
    UFUNCTION(BlueprintCallable)
    void SetClutch(const float Clutch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGearUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGearDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClutch() const;
    
};

