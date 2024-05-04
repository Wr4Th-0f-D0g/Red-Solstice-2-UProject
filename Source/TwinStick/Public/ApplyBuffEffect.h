#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ApplyBuffEffect.generated.h"

class USolsticeBuffBase;

USTRUCT(BlueprintType)
struct FApplyBuffEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> BuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    TWINSTICK_API FApplyBuffEffect();
};

