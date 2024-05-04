#include "SolsticeOptionsLibrary.h"

USolsticeOptionsLibrary::USolsticeOptionsLibrary() {
}

bool USolsticeOptionsLibrary::SkipInitResCheck(const UObject* WorldContextObject) {
    return false;
}

void USolsticeOptionsLibrary::SetControl(FSolsticeControlBinding& ControlBinding, ESolsticeControlMode ControlGroup, FKey Key, FModifierKeysPressed Modifiers, bool bPrimaryControl) {
}

bool USolsticeOptionsLibrary::IsControlEnabledFor(const FSolsticeControlBinding& ControlBinding, ESolsticeControlMode ControlGroup) {
    return false;
}

TArray<FIntPoint> USolsticeOptionsLibrary::GetSupportedResolutions() {
    return TArray<FIntPoint>();
}

TArray<FString> USolsticeOptionsLibrary::GetSupportedLanguageNames(const UObject* WorldContextObject) {
    return TArray<FString>();
}

UDataTable* USolsticeOptionsLibrary::GetOptionsTextsDT(const UObject* WorldContextObject) {
    return NULL;
}

FString USolsticeOptionsLibrary::GetOptionsSavePath(const FString& InFilename) {
    return TEXT("");
}

UOptionsRelatedDefinitions* USolsticeOptionsLibrary::GetOptionsRelatedDefinitions(const UObject* WorldContextObject) {
    return NULL;
}

UOptionsObject* USolsticeOptionsLibrary::GetOptionsObject(const UObject* WorldContextObject) {
    return NULL;
}

TArray<FInputActionKeyMapping> USolsticeOptionsLibrary::GetKeyMappingFor(const FSolsticeControlBinding& ControlBinding, ESolsticeControlMode ControlGroup) {
    return TArray<FInputActionKeyMapping>();
}

UGraphicsOptionsObject* USolsticeOptionsLibrary::GetGraphicsOptionsObject(const UObject* WorldContextObject) {
    return NULL;
}

UGameplayOptionsObject* USolsticeOptionsLibrary::GetGameplayOptionsObject(const UObject* WorldContextObject) {
    return NULL;
}

FString USolsticeOptionsLibrary::GetCurrentLanguageName() {
    return TEXT("");
}

UControlsOptionsObject* USolsticeOptionsLibrary::GetControlsOptionsObject(const UObject* WorldContextObject) {
    return NULL;
}

UDataTable* USolsticeOptionsLibrary::GetControlNameTextsDT(const UObject* WorldContextObject) {
    return NULL;
}

FName USolsticeOptionsLibrary::GetControlDisplayNameFor(const FSolsticeControlBinding& ControlBinding, ESolsticeControlMode ControlGroup) {
    return NAME_None;
}

TArray<FSolsticeButtonTextures> USolsticeOptionsLibrary::GetButtonTextures(const UObject* WorldContextObject) {
    return TArray<FSolsticeButtonTextures>();
}

UAudioOptionsObject* USolsticeOptionsLibrary::GetAudioOptionsObject(const UObject* WorldContextObject) {
    return NULL;
}


