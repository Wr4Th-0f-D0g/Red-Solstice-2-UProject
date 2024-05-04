#include "BTTask_DoBurrowBurrower.h"

UBTTask_DoBurrowBurrower::UBTTask_DoBurrowBurrower() {
    this->NodeName = TEXT("Burrow Burrower");
    this->MyOwnerComp = NULL;
    this->BurrowComp = NULL;
}

void UBTTask_DoBurrowBurrower::MonsterBurrowed(AMonsterCharacterBase* Monster, EBurrowingState NewState, EBurrowingState OldState) {
}


