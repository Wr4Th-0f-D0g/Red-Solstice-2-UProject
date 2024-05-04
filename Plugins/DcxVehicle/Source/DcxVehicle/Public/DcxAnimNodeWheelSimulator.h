#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "DcxAnimNodeWheelSimulator.generated.h"

USTRUCT(BlueprintType)
struct DCXVEHICLE_API FDcxAnimNodeWheelSimulator : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    FDcxAnimNodeWheelSimulator();
};

