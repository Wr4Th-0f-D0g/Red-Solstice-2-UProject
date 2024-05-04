#pragma once
#include "CoreMinimal.h"
#include "EAttribute.h"
#include "SolsticeAttributeValue.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FSolsticeAttributeValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSolsticeAttributeValue();
};

