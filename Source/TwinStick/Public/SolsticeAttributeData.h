#pragma once
#include "CoreMinimal.h"
#include "SolsticeAttributeData.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FSolsticeAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSolsticeAttributeData();
};

