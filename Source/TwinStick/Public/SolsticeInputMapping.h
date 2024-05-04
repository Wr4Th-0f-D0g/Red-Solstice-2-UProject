#pragma once
#include "CoreMinimal.h"
#include "SolsticeInputMapping.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeInputMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocalizationRow;
    
    TWINSTICK_API FSolsticeInputMapping();
};

