#pragma once
#include "CoreMinimal.h"
#include "SimulatedDamage.h"
#include "SimulatedDamageContainer.generated.h"

USTRUCT(BlueprintType)
struct FSimulatedDamageContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSimulatedDamage> Items;
    
    TWINSTICK_API FSimulatedDamageContainer();
};

