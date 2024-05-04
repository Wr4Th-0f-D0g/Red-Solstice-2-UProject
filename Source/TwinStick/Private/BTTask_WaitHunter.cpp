#include "BTTask_WaitHunter.h"

UBTTask_WaitHunter::UBTTask_WaitHunter() {
    this->NodeName = TEXT("Wait");
    this->WaitBeforeMoving = 5.00f;
    this->RandomDeviation = 0.00f;
    this->CachedMonster = NULL;
    this->CachedOwnerComp = NULL;
}

void UBTTask_WaitHunter::TagAdded(ASolsticeCharacterBase* Character, FGameplayTag UpdatedTag) {
}


