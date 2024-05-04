#pragma once
#include "CoreMinimal.h"
#include "EAttribute.h"
#include "EModifierType.h"
#include "SolsticeAttributeModifier.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FSolsticeAttributeModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttribute AffectedAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EModifierType, float> Modifiers;
    
    FSolsticeAttributeModifier();
};

