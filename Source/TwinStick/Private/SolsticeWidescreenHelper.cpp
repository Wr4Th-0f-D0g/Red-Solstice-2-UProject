#include "SolsticeWidescreenHelper.h"

USolsticeWidescreenHelper::USolsticeWidescreenHelper() : UUserWidget(FObjectInitializer::Get()) {
    this->WidescreenSizebox = NULL;
    this->bOnlyClampWidth = false;
    this->GameplayOptions = NULL;
}

void USolsticeWidescreenHelper::OnSettingsChanged() {
}


