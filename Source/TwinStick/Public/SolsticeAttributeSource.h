#pragma once
#include "CoreMinimal.h"
#include "SolsticeAttributeSource.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeAttributeSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ModuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttributeValueIncrease;
    
    TWINSTICK_API FSolsticeAttributeSource();
};

