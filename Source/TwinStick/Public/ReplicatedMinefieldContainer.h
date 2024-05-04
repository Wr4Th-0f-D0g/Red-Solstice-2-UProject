#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ReplicatedMineFieldItem.h"
#include "ReplicatedMinefieldContainer.generated.h"

class AMinefieldAbilityActor;

USTRUCT(BlueprintType)
struct FReplicatedMinefieldContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedMineFieldItem> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMinefieldAbilityActor> Manager;
    
    TWINSTICK_API FReplicatedMinefieldContainer();
};

