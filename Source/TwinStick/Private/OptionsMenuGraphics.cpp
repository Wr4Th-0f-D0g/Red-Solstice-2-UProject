#include "OptionsMenuGraphics.h"

UOptionsMenuGraphics::UOptionsMenuGraphics() {
}

void UOptionsMenuGraphics::ToggleVSyncEnabled() {
}

void UOptionsMenuGraphics::ToggleVisualEffectQuality() {
}

void UOptionsMenuGraphics::ToggleViewDistanceQuality() {
}

void UOptionsMenuGraphics::ToggleTextureQuality() {
}

void UOptionsMenuGraphics::ToggleShadowQuality() {
}

void UOptionsMenuGraphics::TogglePostProcessingQuality() {
}

void UOptionsMenuGraphics::ToggleOverallScalabilityLevel() {
}

void UOptionsMenuGraphics::ToggleIsCursorLocked() {
}

void UOptionsMenuGraphics::ToggleFullscreenMode() {
}

void UOptionsMenuGraphics::ToggleFowQuality() {
}

void UOptionsMenuGraphics::ToggleFoilageQuality() {
}

void UOptionsMenuGraphics::ToggleDynamicResolution() {
}

void UOptionsMenuGraphics::ToggleAspectRatioLock() {
}

void UOptionsMenuGraphics::ToggleAntiAliasingQuality() {
}

void UOptionsMenuGraphics::SetVSyncEnabled(bool aIsEnabled) {
}

void UOptionsMenuGraphics::SetVisualEffectQuality(int32 aQuality) {
}

void UOptionsMenuGraphics::SetViewDistanceQuality(int32 aQuality) {
}

void UOptionsMenuGraphics::SetTextureQuality(int32 aQuality) {
}

void UOptionsMenuGraphics::SetShadowQuality(int32 aQuality) {
}

void UOptionsMenuGraphics::SetResolution(FIntPoint Resolution) {
}

void UOptionsMenuGraphics::SetPostProcessingQuality(int32 aQuality) {
}

void UOptionsMenuGraphics::SetOverallScalabilityLevel(int32 aLevel) {
}

void UOptionsMenuGraphics::SetIsCursorLocked(bool InIsLocked) {
}

void UOptionsMenuGraphics::SetFullscreenMode(TEnumAsByte<EWindowMode::Type> aWindowMode) {
}

void UOptionsMenuGraphics::SetFrameRateLimit(int32 aLimit) {
}

void UOptionsMenuGraphics::SetFowQuality(int32 InIsUseLowQualityFow) {
}

void UOptionsMenuGraphics::SetFoliageQuality(int32 aQuatity) {
}

void UOptionsMenuGraphics::SetAntiAliasingQuality(int32 aQuatity) {
}

void UOptionsMenuGraphics::InitWidescreenAspectRationDropdownBox(UComboBoxString* InComboBox) {
}

void UOptionsMenuGraphics::InitCobboBoxForResolution(UComboBoxString* aBox) {
}

FText UOptionsMenuGraphics::GetVSyncEnabledText() {
    return FText::GetEmpty();
}

bool UOptionsMenuGraphics::GetVSyncEnabled() {
    return false;
}

FText UOptionsMenuGraphics::GetVisulaEffectQualityText() {
    return FText::GetEmpty();
}

int32 UOptionsMenuGraphics::GetVisualEffectQuality() {
    return 0;
}

FText UOptionsMenuGraphics::GetViewDistanceQualityText() {
    return FText::GetEmpty();
}

int32 UOptionsMenuGraphics::GetViewDistanceQuality() {
    return 0;
}

FText UOptionsMenuGraphics::GetTextureQualityText() {
    return FText::GetEmpty();
}

int32 UOptionsMenuGraphics::GetTextureQuality() {
    return 0;
}

FString UOptionsMenuGraphics::GetStringFromAspectRatio(float InRatio) {
    return TEXT("");
}

FText UOptionsMenuGraphics::GetShadowQualityText() {
    return FText::GetEmpty();
}

int32 UOptionsMenuGraphics::GetShadowQuality() {
    return 0;
}

FText UOptionsMenuGraphics::GetResolutionTextY() {
    return FText::GetEmpty();
}

FText UOptionsMenuGraphics::GetResolutionTextX() {
    return FText::GetEmpty();
}

FText UOptionsMenuGraphics::GetResolutionTextFull() {
    return FText::GetEmpty();
}

FIntPoint UOptionsMenuGraphics::GetResolution() {
    return FIntPoint{};
}

FText UOptionsMenuGraphics::GetQualityLevelDescriptionFromNumeric(int32 aNumericVal) {
    return FText::GetEmpty();
}

int32 UOptionsMenuGraphics::GetPostProcessingQuality() {
    return 0;
}

FText UOptionsMenuGraphics::GetPostPorcessingText() {
    return FText::GetEmpty();
}

FText UOptionsMenuGraphics::GetOverallScalabilityLevelText() {
    return FText::GetEmpty();
}

int32 UOptionsMenuGraphics::GetOverallScalabilityLevel() {
    return 0;
}

FText UOptionsMenuGraphics::GetOnOffDescriptionFromBool(bool aBool) {
    return FText::GetEmpty();
}

FText UOptionsMenuGraphics::GetIsCursorLockedText() {
    return FText::GetEmpty();
}

bool UOptionsMenuGraphics::GetIsCursorLocked() {
    return false;
}

FText UOptionsMenuGraphics::GetFullscreenModeText() {
    return FText::GetEmpty();
}

FText UOptionsMenuGraphics::GetFullScreenModeDescritptionFromEnum(TEnumAsByte<EWindowMode::Type> aEnum) {
    return FText::GetEmpty();
}

TEnumAsByte<EWindowMode::Type> UOptionsMenuGraphics::GetFullscreenMode() {
    return EWindowMode::Fullscreen;
}

int32 UOptionsMenuGraphics::GetFrameRateLimit() {
    return 0;
}

FText UOptionsMenuGraphics::GetFrameLimitText() {
    return FText::GetEmpty();
}

FText UOptionsMenuGraphics::GetFowQualityText() {
    return FText::GetEmpty();
}

int32 UOptionsMenuGraphics::GetFOWQuality() {
    return 0;
}

int32 UOptionsMenuGraphics::GetFoliageQuality() {
    return 0;
}

FText UOptionsMenuGraphics::GetFoilageQualityText() {
    return FText::GetEmpty();
}

FText UOptionsMenuGraphics::GetDynamicResolutionText() {
    return FText::GetEmpty();
}

FText UOptionsMenuGraphics::GetDesktopResolutionTextFull() {
    return FText::GetEmpty();
}

FIntPoint UOptionsMenuGraphics::GetDesktopResolution() {
    return FIntPoint{};
}

float UOptionsMenuGraphics::GetAspectRatioFromString(const FString& inString) const {
    return 0.0f;
}

FText UOptionsMenuGraphics::GetAntiAliasingQualityText() {
    return FText::GetEmpty();
}

int32 UOptionsMenuGraphics::GetAntiAliasingQuality() {
    return 0;
}

TArray<FString> UOptionsMenuGraphics::GetAllAvailableResolutionsAsStrings() {
    return TArray<FString>();
}

FIntPoint UOptionsMenuGraphics::ConvertStringToIntPoint(const FString& aString) {
    return FIntPoint{};
}

FString UOptionsMenuGraphics::ConvertIntPointToString(FIntPoint aPoint) {
    return TEXT("");
}


