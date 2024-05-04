#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask_WaitGameplayTag.h"
#include "WaitGameplayTagDelegateDelegate.h"
#include "GameplayTask_WaitGameplayTagAdded.generated.h"

class ASolsticeCharacterBase;
class UGameplayTask_WaitGameplayTagAdded;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UGameplayTask_WaitGameplayTagAdded : public UGameplayTask_WaitGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameplayTagDelegate Added;
    
    UGameplayTask_WaitGameplayTagAdded(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGameplayTask_WaitGameplayTagAdded* WaitGameplayTagAdd(UObject* WorldContextObject, FName TaskInstanceName, FGameplayTag Tag, bool bOnlyTriggerOnce, ASolsticeCharacterBase* OptionalTarget);
    
};

