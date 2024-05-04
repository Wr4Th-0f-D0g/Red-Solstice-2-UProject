#include "WeaponModSelectionPanel.h"

UWeaponModSelectionPanel::UWeaponModSelectionPanel() : UUserWidget(FObjectInitializer::Get()) {
    this->WeaponDataAsset = NULL;
    this->WeaponGroupVerticalBox = NULL;
    this->WeaponUpgradeGroupWidgetClass = NULL;
    this->WidgetWeapon = NULL;
}

void UWeaponModSelectionPanel::SetWeapon(ASolsticeWeaponBase* NewWeapon) {
}


