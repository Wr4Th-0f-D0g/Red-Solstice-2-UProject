#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActorAndTagContainerWrapper.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorAndTagContainerWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToApplyToActor;
    
    TWINSTICK_API FActorAndTagContainerWrapper();
};

