#include "GameplayOptionsObject.h"

UGameplayOptionsObject::UGameplayOptionsObject() {
}

void UGameplayOptionsObject::SetLocale(const FString& InLocale) {
}

void UGameplayOptionsObject::SetGameplaySettingStringByTag(FGameplayTag InTag, const FString& InValue) {
}

void UGameplayOptionsObject::SetGameplaySettingString(FName InName, const FString& InValue) {
}

void UGameplayOptionsObject::SetGameplaySettingGameplayTag(FName InName, FGameplayTag InValue) {
}

void UGameplayOptionsObject::SetGameplaySettingFloatByTag(FGameplayTag InTag, float InValue) {
}

void UGameplayOptionsObject::SetGameplaySettingFloat(FName InName, float InValue) {
}

void UGameplayOptionsObject::SetGameplaySettingBoolByTag(FGameplayTag InTag, bool InValue) {
}

void UGameplayOptionsObject::SetGameplaySettingBool(FName InName, bool InValue) {
}

void UGameplayOptionsObject::SaveAll() {
}

void UGameplayOptionsObject::Init() {
}

bool UGameplayOptionsObject::GetIsDirty() {
    return false;
}

FString UGameplayOptionsObject::GetGameplaySettingStringByTag(FGameplayTag InTag) {
    return TEXT("");
}

FString UGameplayOptionsObject::GetGameplaySettingString(FName InName) {
    return TEXT("");
}

FGameplayTag UGameplayOptionsObject::GetGameplaySettingGameplayTag(FName InName) {
    return FGameplayTag{};
}

float UGameplayOptionsObject::GetGameplaySettingFloatByTag(FGameplayTag InTag) {
    return 0.0f;
}

float UGameplayOptionsObject::GetGameplaySettingFloat(FName InName) {
    return 0.0f;
}

bool UGameplayOptionsObject::GetGameplaySettingBoolByTag(FGameplayTag InTag) {
    return false;
}

bool UGameplayOptionsObject::GetGameplaySettingBool(FName InName) {
    return false;
}

FString UGameplayOptionsObject::GetCurrentlySetLocale() {
    return TEXT("");
}


