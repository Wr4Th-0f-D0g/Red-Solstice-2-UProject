#include "SolsticeHUD_Base.h"

ASolsticeHUD_Base::ASolsticeHUD_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->GamepadFocusDisplay = NULL;
}





void ASolsticeHUD_Base::SetGamepadFocusDisplayVisibility(bool IsVisible) {
}

void ASolsticeHUD_Base::RemoveAllPopupWidgets() {
}

void ASolsticeHUD_Base::RegisterPopupWidget(UPopupWidgetBase* InWidget) {
}


void ASolsticeHUD_Base::HandlePreClientTravel(const FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless) {
}

void ASolsticeHUD_Base::HandleGameWindowFocusChange(bool bIsFocused) {
}



