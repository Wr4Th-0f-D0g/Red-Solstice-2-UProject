#pragma once
#include "CoreMinimal.h"
#include "SimulatedDamage.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FSimulatedDamage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> Instigator;
    
    TWINSTICK_API FSimulatedDamage();
};

