#include "TinyModPanelBase.h"
#include "Templates/SubclassOf.h"

UTinyModPanelBase::UTinyModPanelBase() {
    this->TinyModContainer = NULL;
    this->TinyModWidgetClass = NULL;
}

void UTinyModPanelBase::PopulateTinyMods(const TArray<FDataTableRowHandle> RowHandles, TSubclassOf<ASolsticeWeaponBase> ButtonWeaponClass) {
}


