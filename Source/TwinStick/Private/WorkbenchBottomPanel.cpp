#include "WorkbenchBottomPanel.h"
#include "Templates/SubclassOf.h"

UWorkbenchBottomPanel::UWorkbenchBottomPanel() {
    this->WeaponModData = NULL;
}

TArray<TSubclassOf<ASolsticeWeaponBase>> UWorkbenchBottomPanel::GetAllEquippableWeaponClasses() {
    return TArray<TSubclassOf<ASolsticeWeaponBase>>();
}


