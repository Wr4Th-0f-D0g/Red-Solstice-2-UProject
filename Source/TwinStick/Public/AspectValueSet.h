#pragma once
#include "CoreMinimal.h"
#include "AspectValue.h"
#include "AspectValueSet.generated.h"

USTRUCT(BlueprintType)
struct FAspectValueSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAspectValue> AspectValues;
    
    TWINSTICK_API FAspectValueSet();
};

