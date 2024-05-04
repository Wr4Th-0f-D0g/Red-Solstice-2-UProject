#include "ControlsOptionsObject.h"

UControlsOptionsObject::UControlsOptionsObject() {
    this->DefaultHeroControlMode = ESolsticeControlMode::RTS;
    this->DefaultVehicleControlMode = ESolsticeControlMode::WASD;
    this->CurrentGamepadControlsVersion = 0;
    this->GamepadControlVersion = 5;
    this->bDoubleKeyFailsafeCheckedOnce = false;
}

void UControlsOptionsObject::SetDefaultVehicleControlMode(ESolsticeControlMode InControlMode, bool bMarkDirty) {
}

void UControlsOptionsObject::SetDefaultHeroControlMode(ESolsticeControlMode InControlMode, bool bMarkDirty) {
}

void UControlsOptionsObject::SetControlBindingByName(FName ControlDisplayName, ESolsticeControlMode ControlGroup, FKey Key, FModifierKeysPressed Modifiers, bool bPrimaryControl) {
}

void UControlsOptionsObject::SaveInputBindings() {
}

void UControlsOptionsObject::RevertInputBindings() {
}

void UControlsOptionsObject::ResetToDefaults() {
}

bool UControlsOptionsObject::IsKeyAlreadyBound(FKey InKey, FModifierKeysPressed InModifierKeys, ESolsticeControlMode InControlMode, TArray<FSolsticeInputMapping>& OutMappingsInUse, TArray<FName> InIgnoredMappingNames) const {
    return false;
}

bool UControlsOptionsObject::IsDirty() const {
    return false;
}

void UControlsOptionsObject::Init() {
}

TArray<FKey> UControlsOptionsObject::GetPressedControlBindingsFromNames(TArray<FName>& ControlNames, ESolsticeControlMode ControlMode) {
    return TArray<FKey>();
}

FText UControlsOptionsObject::GetKeyCombinationText(const FInputActionKeyMapping& InMapping, bool bInUseLongKeyName, bool bInUseLongModifierKeyNames, bool bRemoveModifierKeyPrefix) {
    return FText::GetEmpty();
}

bool UControlsOptionsObject::GetIconsForKey(FKeyIconStruct& OutBinding, FKey InKey) {
    return false;
}

ESolsticeControlMode UControlsOptionsObject::GetDefaultVehicleControlMode() {
    return ESolsticeControlMode::RTS;
}

ESolsticeControlMode UControlsOptionsObject::GetDefaultHeroControlMode() {
    return ESolsticeControlMode::RTS;
}

UTexture2D* UControlsOptionsObject::GetControlPromptIcon(FKey Key, ESolsticeControlInputDeviceType ControllerType) const {
    return NULL;
}

TArray<FSolsticeControlBinding> UControlsOptionsObject::GetControlBindingsByCategory(EControlCategory ControlCategory) const {
    return TArray<FSolsticeControlBinding>();
}

TArray<FInputActionKeyMapping> UControlsOptionsObject::GetControlBindingByName(FName ControlDisplayName, ESolsticeControlMode ControlGroup) {
    return TArray<FInputActionKeyMapping>();
}


