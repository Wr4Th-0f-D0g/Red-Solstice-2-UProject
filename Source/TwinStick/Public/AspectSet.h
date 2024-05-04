#pragma once
#include "CoreMinimal.h"
#include "Aspect.h"
#include "AspectSet.generated.h"

USTRUCT(BlueprintType)
struct FAspectSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAspect> Aspects;
    
    TWINSTICK_API FAspectSet();
};

