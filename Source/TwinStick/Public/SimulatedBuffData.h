#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBuffDuration.h"
#include "SolsticeAttributeModifier.h"
#include "SimulatedBuffData.generated.h"

USTRUCT(BlueprintType)
struct FSimulatedBuffData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAttributeModifier> FixedModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAttributeModifier> StackableModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuffDuration DurationGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    TWINSTICK_API FSimulatedBuffData();
};

