#pragma once
#include "CoreMinimal.h"
#include "EAttribute.h"
#include "SolsticeSavedAttribute.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeSavedAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float BaseValue;
    
    TWINSTICK_API FSolsticeSavedAttribute();
};

