#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DcxVehicleAnimInstance.generated.h"

class UDcxVehicleWheelsComponent;

UCLASS(Blueprintable, NonTransient)
class DCXVEHICLE_API UDcxVehicleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDcxVehicleWheelsComponent* VehicleWheels;
    
public:
    UDcxVehicleAnimInstance();

};

