#include "AbilityTooltipData.h"

UAbilityTooltipData::UAbilityTooltipData() {
    this->AspectDescriptionTable = NULL;
    this->AttributeDescriptionTable = NULL;
    this->BuffDescriptionTable = NULL;
}

FCustomTooltipText UAbilityTooltipData::MakeTooltipTextWithFormatting(FText Text, const FCustomTooltipFormatting& Formatting) {
    return FCustomTooltipText{};
}

FCustomTooltipFormatting UAbilityTooltipData::MakeTooltipFormatSettings(UTexture2D* Icon, FLinearColor HighlightColor, FLinearColor NormalColor) {
    return FCustomTooltipFormatting{};
}

FCustomTooltipText UAbilityTooltipData::MakeSimpleTooltipText(FText Text) {
    return FCustomTooltipText{};
}

FGameplayTagContainer UAbilityTooltipData::GetGrantedTagsForAspectGroup(UAbilityBase* Ability, EAspectDisplayGroup AspectGroup) const {
    return FGameplayTagContainer{};
}

FCustomTooltipFormatting UAbilityTooltipData::GetFormattingSettings(const FAbilityToolTipAspect& Aspect, bool& HasCustomFormatting) {
    return FCustomTooltipFormatting{};
}

FGameplayTagContainer UAbilityTooltipData::GetClearedTagsForAspectGroup(UAbilityBase* Ability, EAspectDisplayGroup AspectGroup) const {
    return FGameplayTagContainer{};
}

void UAbilityTooltipData::GetAttributeValues(UAbilityBase* Ability, EAspectDisplayGroup AspectGroup, TArray<FAbilityToolTipAspect>& OutAspects, bool bShowBuffDurations) const {
}

void UAbilityTooltipData::GetAspectValues(UAbilityBase* Ability, EAspectDisplayGroup AspectGroup, TArray<FAbilityToolTipAspect>& OutAspects) const {
}

FText UAbilityTooltipData::GetAspectText(const FAbilityToolTipAspect& Aspect) {
    return FText::GetEmpty();
}

void UAbilityTooltipData::GetAspectGroups(UAbilityBase* Ability, TArray<FAbilityTooltipAspectGroup>& OutGroups, bool bShowDefinitionBuffDuration) const {
}

FText UAbilityTooltipData::GetAspectDisplayType(const FAbilityToolTipAspect& Aspect) {
    return FText::GetEmpty();
}

TArray<FCustomTooltipText> UAbilityTooltipData::GetAllAspectValues(const FAbilityToolTipAspect& Aspect) {
    return TArray<FCustomTooltipText>();
}

FGameplayTagContainer UAbilityTooltipData::GetAbilityGrantedTags(UAbilityBase* Ability) const {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UAbilityTooltipData::GetAbilityClearedTags(UAbilityBase* Ability) const {
    return FGameplayTagContainer{};
}

bool UAbilityTooltipData::AbilityHasActiveBuff(UAbilityBase* Ability) const {
    return false;
}

bool UAbilityTooltipData::AbiilityHasPassiveBuff(UAbilityBase* Ability) const {
    return false;
}


