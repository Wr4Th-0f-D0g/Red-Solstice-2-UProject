#pragma once
#include "CoreMinimal.h"
#include "DcxAnalogControlArray.generated.h"

USTRUCT(BlueprintType)
struct DCXVEHICLE_API FDcxAnalogControlArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> Items;
    
public:
    FDcxAnalogControlArray();
};

