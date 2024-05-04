#pragma once
#include "CoreMinimal.h"
#include "EKerAttack.h"
#include "KerAttack.generated.h"

USTRUCT(BlueprintType)
struct FKerAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKerAttack> Attacks;
    
    TWINSTICK_API FKerAttack();
};

