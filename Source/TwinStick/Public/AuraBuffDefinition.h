#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AuraBuffDefinition.generated.h"

class AActor;
class USolsticeBuffBase;

USTRUCT(BlueprintType)
struct FAuraBuffDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> AppliedBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AllowedTargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> IgnoredTargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stacks;
    
    TWINSTICK_API FAuraBuffDefinition();
};

