#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "DcxVehicleAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct DCXVEHICLE_API FDcxVehicleAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FDcxVehicleAnimInstanceProxy();
};

