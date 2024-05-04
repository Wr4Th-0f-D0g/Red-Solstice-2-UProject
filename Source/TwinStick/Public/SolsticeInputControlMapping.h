#pragma once
#include "CoreMinimal.h"
#include "SolsticeInputControlMapping.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeInputControlMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControlName;
    
    TWINSTICK_API FSolsticeInputControlMapping();
};

