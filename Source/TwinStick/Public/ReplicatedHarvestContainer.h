#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ReplicatedHarvestItem.h"
#include "ReplicatedHarvestContainer.generated.h"

class AHarvestManagerAbilityActor;

USTRUCT(BlueprintType)
struct FReplicatedHarvestContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedHarvestItem> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHarvestManagerAbilityActor> Manager;
    
    TWINSTICK_API FReplicatedHarvestContainer();
};

