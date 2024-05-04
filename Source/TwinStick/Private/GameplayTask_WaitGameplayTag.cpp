#include "GameplayTask_WaitGameplayTag.h"

UGameplayTask_WaitGameplayTag::UGameplayTask_WaitGameplayTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OptionalExternalTarget = NULL;
}

void UGameplayTask_WaitGameplayTag::GameplayTagCallback(const FGameplayTag Tag, int32 NewCount) {
}


