#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ReplicatedResearch.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedResearch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ResearchTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Paused;
    
    TWINSTICK_API FReplicatedResearch();
};

