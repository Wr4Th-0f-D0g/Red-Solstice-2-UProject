#include "GraphicsOptionsObject.h"

UGraphicsOptionsObject::UGraphicsOptionsObject() {
    this->TemporalAASamplesInFile = 8;
    this->TemporalAASamplesCurrentlySet = 0;
    this->bLockCursorToScreenInFile = true;
    this->bLockCursorToScreenCurrentlySet = true;
    this->FowQualityInFile = 4;
    this->FowQualitySet = 0;
    this->BrightnessInFile = 0.50f;
}

void UGraphicsOptionsObject::SetWasSavedAsFullscreenWithoutChanging(bool Val) {
}

void UGraphicsOptionsObject::SetVSyncEnabled(bool aIsEnabled) {
}

void UGraphicsOptionsObject::SetVisualEffectQuality(int32 aQuality) {
}

void UGraphicsOptionsObject::SetViewDistanceQuality(int32 aQuality) {
}

void UGraphicsOptionsObject::SetUseDynamicResolution(bool bEnabled) {
}

void UGraphicsOptionsObject::SetTextureQuality(int32 aQuality) {
}

void UGraphicsOptionsObject::SetShadowQuality(int32 aQuality) {
}

void UGraphicsOptionsObject::SetResolutionScale(float aScale) {
}

void UGraphicsOptionsObject::SetResolution(FIntPoint Resolution) {
}

void UGraphicsOptionsObject::SetPostProcessingQuality(int32 aQuality) {
}

void UGraphicsOptionsObject::SetOverallScalabilityLevel(int32 aLevel) {
}

void UGraphicsOptionsObject::SetIsLockCursor(bool InbIsLockCursor) {
}

void UGraphicsOptionsObject::SetHDREnabledSettings(bool bEnabled) {
}

void UGraphicsOptionsObject::SetFullscreenMode(TEnumAsByte<EWindowMode::Type> aWindowMode) {
}

void UGraphicsOptionsObject::SetFrameRateLimit(int32 aLimit) {
}

void UGraphicsOptionsObject::SetFowQuality(int32 InFOWQuality) {
}

void UGraphicsOptionsObject::SetFoliageQuality(int32 aQuatity) {
}

void UGraphicsOptionsObject::SetDefaultSettings() {
}

void UGraphicsOptionsObject::SetAntiAliasingQuality(int32 aQuality) {
}

void UGraphicsOptionsObject::SaveResolutionWitoutChanging() {
}

void UGraphicsOptionsObject::RevertResolution() {
}

void UGraphicsOptionsObject::RevertEverything() {
}

void UGraphicsOptionsObject::RequestResolutionChange() {
}

bool UGraphicsOptionsObject::GetWasSavedAsFullscreenWithoutChanging() const {
    return false;
}

bool UGraphicsOptionsObject::GetVSyncEnabledSettings() {
    return false;
}

bool UGraphicsOptionsObject::GetVSyncEnabledLocal() {
    return false;
}

int32 UGraphicsOptionsObject::GetVisualEffectQualitySettings() {
    return 0;
}

int32 UGraphicsOptionsObject::GetVisualEffectQualityLocal() {
    return 0;
}

int32 UGraphicsOptionsObject::GetViewDistanceQualitySettings() {
    return 0;
}

int32 UGraphicsOptionsObject::GetViewDistanceQualityLocal() {
    return 0;
}

bool UGraphicsOptionsObject::GetUseDynamicResolutionSettings() {
    return false;
}

bool UGraphicsOptionsObject::GetUseDynamicResolutionLocal() {
    return false;
}

int32 UGraphicsOptionsObject::GetTextureQualitySettings() {
    return 0;
}

int32 UGraphicsOptionsObject::GetTextureQualityLocal() {
    return 0;
}

int32 UGraphicsOptionsObject::GetShadowQualitySettings() {
    return 0;
}

int32 UGraphicsOptionsObject::GetShadowQualityLocal() {
    return 0;
}

FIntPoint UGraphicsOptionsObject::GetResolutionSettings() {
    return FIntPoint{};
}

float UGraphicsOptionsObject::GetResolutionScaleSettings() {
    return 0.0f;
}

float UGraphicsOptionsObject::GetResolutionScaleLocal() {
    return 0.0f;
}

FIntPoint UGraphicsOptionsObject::GetResolutionLocal() {
    return FIntPoint{};
}

int32 UGraphicsOptionsObject::GetPostProcessingQualitySettings() {
    return 0;
}

int32 UGraphicsOptionsObject::GetPostProcessingQualityLocal() {
    return 0;
}

int32 UGraphicsOptionsObject::GetOverallScalabilityLevelSettings() {
    return 0;
}

int32 UGraphicsOptionsObject::GetOverallScalabilityLevelLocal() {
    return 0;
}

bool UGraphicsOptionsObject::GetIsResolutionConfirmed() {
    return false;
}

EMouseLockMode UGraphicsOptionsObject::GetIsLockCursorSettingsEnumVal() {
    return EMouseLockMode::DoNotLock;
}

bool UGraphicsOptionsObject::GetIsLockCursorSettings() {
    return false;
}

bool UGraphicsOptionsObject::GetIsLockCursorLocal() {
    return false;
}

bool UGraphicsOptionsObject::GetIsDirty() {
    return false;
}

bool UGraphicsOptionsObject::GetHDREnabledSettings() const {
    return false;
}

bool UGraphicsOptionsObject::GetHDREnabledLocal() const {
    return false;
}

TEnumAsByte<EWindowMode::Type> UGraphicsOptionsObject::GetFullscreenModeSettings() {
    return EWindowMode::Fullscreen;
}

TEnumAsByte<EWindowMode::Type> UGraphicsOptionsObject::GetFullscreenModeLocal() {
    return EWindowMode::Fullscreen;
}

int32 UGraphicsOptionsObject::GetFrameRateLimitSettings() {
    return 0;
}

int32 UGraphicsOptionsObject::GetFrameRateLimitLocal() {
    return 0;
}

int32 UGraphicsOptionsObject::GetFOWQualitySettings() {
    return 0;
}

int32 UGraphicsOptionsObject::GetFowQualityLocal() {
    return 0;
}

int32 UGraphicsOptionsObject::GetFoliageQualitySettings() {
    return 0;
}

int32 UGraphicsOptionsObject::GetFoliageQualityLocal() {
    return 0;
}

bool UGraphicsOptionsObject::GetDoesNeedRestart() {
    return false;
}

float UGraphicsOptionsObject::GetBrightnessSetings() {
    return 0.0f;
}

float UGraphicsOptionsObject::GetBrightnessLocal() {
    return 0.0f;
}

int32 UGraphicsOptionsObject::GetAntiAliasingQualitySettings() {
    return 0;
}

int32 UGraphicsOptionsObject::GetAntiAliasingQualityLocal() {
    return 0;
}

void UGraphicsOptionsObject::ConfirmResolution() {
}

void UGraphicsOptionsObject::ApplyResolution() {
}

void UGraphicsOptionsObject::ApplyNonResolution() {
}

void UGraphicsOptionsObject::ApplyFirstTimeDefaultResolution() {
}

void UGraphicsOptionsObject::ApplyBrightness(float InBrightness) {
}


