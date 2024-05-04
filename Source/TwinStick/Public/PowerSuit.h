#pragma once
#include "CoreMinimal.h"
#include "EAttribute.h"
#include "PowerSuitVisualDefinition.h"
#include "SuitSectionData.h"
#include "PowerSuit.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FPowerSuit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSuitSectionData> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttribute, float> AttributeOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPowerSuitVisualDefinition VisualDefinition;
    
    FPowerSuit();
};

