#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTask_WaitGameplayTag.h"
#include "WaitGameplayTagDelegateDelegate.h"
#include "GameplayTask_WaitGameplayTagRemoved.generated.h"

class ASolsticeCharacterBase;
class UGameplayTask_WaitGameplayTagRemoved;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UGameplayTask_WaitGameplayTagRemoved : public UGameplayTask_WaitGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameplayTagDelegate Removed;
    
    UGameplayTask_WaitGameplayTagRemoved(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGameplayTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(UObject* WorldContextObject, FGameplayTag InTag, bool bOnlyTriggerOnce, ASolsticeCharacterBase* OptionalTarget);
    
};

