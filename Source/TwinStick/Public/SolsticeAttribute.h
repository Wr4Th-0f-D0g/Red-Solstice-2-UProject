#pragma once
#include "CoreMinimal.h"
#include "SolsticeStatModifier.h"
#include "SolsticeAttribute.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FSolsticeAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StackingPenaltyApplies;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeStatModifier> Modifiers;
    
public:
    FSolsticeAttribute();
};

