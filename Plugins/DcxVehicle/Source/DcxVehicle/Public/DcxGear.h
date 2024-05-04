#pragma once
#include "CoreMinimal.h"
#include "DcxGear.generated.h"

USTRUCT(BlueprintType)
struct DCXVEHICLE_API FDcxGear {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GearNum;
    
public:
    FDcxGear();
};

