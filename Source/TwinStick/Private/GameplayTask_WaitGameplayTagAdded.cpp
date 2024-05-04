#include "GameplayTask_WaitGameplayTagAdded.h"

UGameplayTask_WaitGameplayTagAdded::UGameplayTask_WaitGameplayTagAdded(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OptionalExternalTarget = NULL;
}

UGameplayTask_WaitGameplayTagAdded* UGameplayTask_WaitGameplayTagAdded::WaitGameplayTagAdd(UObject* WorldContextObject, FName TaskInstanceName, FGameplayTag Tag, bool bOnlyTriggerOnce, ASolsticeCharacterBase* OptionalTarget) {
    return NULL;
}


