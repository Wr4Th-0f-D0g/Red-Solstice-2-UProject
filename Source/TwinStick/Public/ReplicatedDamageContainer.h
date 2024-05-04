#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ReplicatedDamage.h"
#include "ReplicatedDamageContainer.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedDamageContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedDamage> Items;
    
    TWINSTICK_API FReplicatedDamageContainer();
};

