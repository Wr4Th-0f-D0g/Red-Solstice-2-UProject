#pragma once
#include "CoreMinimal.h"
#include "SimulatedBuff_ID.generated.h"

USTRUCT(BlueprintType)
struct FSimulatedBuff_ID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stacks;
    
    TWINSTICK_API FSimulatedBuff_ID();
};

