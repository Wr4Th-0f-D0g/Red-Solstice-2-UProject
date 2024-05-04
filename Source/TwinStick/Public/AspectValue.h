#pragma once
#include "CoreMinimal.h"
#include "AspectValue.generated.h"

USTRUCT(BlueprintType)
struct FAspectValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AspectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    TWINSTICK_API FAspectValue();
};

