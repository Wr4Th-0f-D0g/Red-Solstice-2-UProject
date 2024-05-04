#include "SolsticePawnControlSwitcherBase.h"

USolsticePawnControlSwitcherBase::USolsticePawnControlSwitcherBase() : UUserWidget(FObjectInitializer::Get()) {
    this->LocalPlayerHero = NULL;
    this->ContentSwitcher = NULL;
}

void USolsticePawnControlSwitcherBase::GetUseCharacterSlotFlags_Implementation(bool& ForVehicles, bool& ForMech) {
}


