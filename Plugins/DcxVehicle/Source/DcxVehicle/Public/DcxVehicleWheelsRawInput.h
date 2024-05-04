#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DcxVehicleWheelsRawInput.generated.h"

UCLASS(Abstract, Blueprintable)
class DCXVEHICLE_API UDcxVehicleWheelsRawInput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ThrottleIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> RawAnalogControls;
    
public:
    UDcxVehicleWheelsRawInput();

    UFUNCTION(BlueprintCallable)
    void SetThrottle(const float Throttle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrottle() const;
    
};

