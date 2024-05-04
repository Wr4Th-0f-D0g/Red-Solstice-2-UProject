#include "SolsticeUILibrary.h"
#include "Templates/SubclassOf.h"

USolsticeUILibrary::USolsticeUILibrary() {
}

bool USolsticeUILibrary::WeaponDataIsForPrimaryWeapon(const FWeaponData& InWeaponData) {
    return false;
}

void USolsticeUILibrary::TickSlateImmediately() {
}

void USolsticeUILibrary::SetFilteredTextBlockText(const UObject* WorldContextObject, const FString& Text, UTextBlock* TextBlock) {
}

ESlateVisibility USolsticeUILibrary::SelectWidgetVisibility(bool Condition, bool HitTestable, bool ShouldCollapse) {
    return ESlateVisibility::Visible;
}

bool USolsticeUILibrary::IsBackKey(FKey InKey) {
    return false;
}

bool USolsticeUILibrary::IsAcceptKey(FKey InKey) {
    return false;
}

FCharacterWeaponData USolsticeUILibrary::GetVehicleModuleWeaponData(const FSolsticeVehicleModuleData& VehicleModuleData) {
    return FCharacterWeaponData{};
}

TSubclassOf<UVehicleSkill> USolsticeUILibrary::GetVehicleModuleSkill(const FSolsticeVehicleModuleData& VehicleModuleData) {
    return NULL;
}

TSubclassOf<USolsticeBuffBase> USolsticeUILibrary::GetVehicleModuleBuff(const FSolsticeVehicleModuleData& VehicleModuleData) {
    return NULL;
}

FSlateBrush USolsticeUILibrary::GetSlateBrushForGamepadControlBinding(const UObject* Context, FName ControlName) {
    return FSlateBrush{};
}

FText USolsticeUILibrary::GetSecondaryMissionValueText(ESecondaryMissionFrequency MissionFrequency) {
    return FText::GetEmpty();
}

float USolsticeUILibrary::GetProjectilesFiredFromFiringModeAttributes(const FFiringModeAttributes& FiringModeAttribute) {
    return 0.0f;
}

FText USolsticeUILibrary::GetMarineClassDisplayName(ESolsticeHeroClass InClass) {
    return FText::GetEmpty();
}

FSlateBrush USolsticeUILibrary::GetInputIconBrushForKey(const UObject* WorldContext, FKey InKey) {
    return FSlateBrush{};
}

FText USolsticeUILibrary::GetHordeArrivalValueText(EHordeArrivalTime HordeArrival) {
    return FText::GetEmpty();
}

TSubclassOf<USkill> USolsticeUILibrary::GetGrantedSkillClass(const FModuleInfo& ModuleInfo) {
    return NULL;
}

USkill* USolsticeUILibrary::GetGrantedSkillCDO(const FModuleInfo& ModuleInfo) {
    return NULL;
}

TSubclassOf<USolsticeBuffBase> USolsticeUILibrary::GetGameplayBuff(const FModuleInfo& ModuleInfo) {
    return NULL;
}

FSlateBrush USolsticeUILibrary::GetGamepadIconForKey(FKey InKey) {
    return FSlateBrush{};
}

FText USolsticeUILibrary::GetGamepadIconDecoratorFromInputActionMapping(const UObject* Context, FInputActionKeyMapping InputActionKeyMapping) {
    return FText::GetEmpty();
}

UBehaviorTree* USolsticeUILibrary::GetCustomBehaviorTree(const FMarineBotSettings& MarineBotSettings) {
    return NULL;
}

FTitleAndDataText USolsticeUILibrary::GetAttributeModifierSeparatedText(const FSolsticeAttributeModifier& AttributeModifier, bool bForceShowClamps, bool& bAttributeValuePositive, int32 Stacks) {
    return FTitleAndDataText{};
}

FText USolsticeUILibrary::GetAttributeModifierDisplayText(const FSolsticeAttributeModifier& AttributeModifier, int32 Stacks, bool bAlwaysSign) {
    return FText::GetEmpty();
}

FText USolsticeUILibrary::GetAttributeModifierArrayDisplayText(const TArray<FSolsticeAttributeModifier>& ArrayOfModifiers, int32 Stacks, bool bAlwaysSign) {
    return FText::GetEmpty();
}

FAttributeInfo USolsticeUILibrary::GetAttributeInfoForAttribute(EAttribute InAttribute) {
    return FAttributeInfo{};
}

FText USolsticeUILibrary::GetAspectDescriptionText(FName AspectName) {
    return FText::GetEmpty();
}

FText USolsticeUILibrary::GetArtillerySupportValueText(EArtillerySupportLevel ArtillerySupport) {
    return FText::GetEmpty();
}

FText USolsticeUILibrary::GetAirSupportValueText(EAirSupportLevel AirSupport) {
    return FText::GetEmpty();
}

bool USolsticeUILibrary::GamePadModeActive(const UObject* WorldContext) {
    return false;
}

FText USolsticeUILibrary::FormatFloatToText(float Value) {
    return FText::GetEmpty();
}

void USolsticeUILibrary::FlushLocalInputKeys(const UObject* WorldContextObject) {
}

FText USolsticeUILibrary::DifficultyToText(EDifficulty Difficulty) {
    return FText::GetEmpty();
}

FName USolsticeUILibrary::DifficultyToName(EDifficulty InDifficulty) {
    return NAME_None;
}

FText USolsticeUILibrary::DifficultyStringToText(const FString& DifficultyString) {
    return FText::GetEmpty();
}

bool USolsticeUILibrary::CheckOrCreateWidget(UObject* WorldContextObject, UUserWidget*& WidgetPointer, TSubclassOf<UUserWidget> WidgetClass) {
    return false;
}


