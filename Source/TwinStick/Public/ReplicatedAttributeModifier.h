#pragma once
#include "CoreMinimal.h"
#include "EAttribute.h"
#include "EModifierType.h"
#include "ReplicatedAttributeModifier.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FReplicatedAttributeModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttribute AffectedAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EModifierType> ModifierTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ModifierValues;
    
    FReplicatedAttributeModifier();
};

