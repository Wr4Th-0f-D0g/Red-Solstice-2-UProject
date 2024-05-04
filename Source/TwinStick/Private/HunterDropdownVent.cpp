#include "HunterDropdownVent.h"

AHunterDropdownVent::AHunterDropdownVent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OccupyingHunter = NULL;
}

void AHunterDropdownVent::SetOccupyingHunter(AMonsterCharacterBase* InOccupyingHunter) {
}

AHunterDropdownVent* AHunterDropdownVent::FindClosestDropdownToHunter(AMonsterCharacterBase* InHunter, bool bIncludeOccupied) {
    return NULL;
}


