#include "CharacterDataAsset.h"
#include "Templates/SubclassOf.h"

UCharacterDataAsset::UCharacterDataAsset() {
    this->DefaultBotSuitTier = ESuitTier::MarkVI;
}

bool UCharacterDataAsset::HasAnyUnlockedSuitsForTier(ESuitTier SuitTier, int32 PlayerRank) const {
    return false;
}

bool UCharacterDataAsset::HasAnyResearchedSuitsForTier(ESuitTier SuitTier, UCampaign* ActiveCampaign, UExecutorSubsystem* ExecutorSubsystem) const {
    return false;
}

FText UCharacterDataAsset::GetSuitDisplayNameFor(ESolsticeHeroClass MarineClass) const {
    return FText::GetEmpty();
}

TArray<UMarineClassData*> UCharacterDataAsset::GetResearchedSuitsForTier(ESuitTier SuitTier, UCampaign* ActiveCampaign, UExecutorSubsystem* ExecutorSubsystem) const {
    return TArray<UMarineClassData*>();
}

FGameplayTagContainer UCharacterDataAsset::GetProfileUnlockTagsFor(ESolsticeHeroClass MarineClass) const {
    return FGameplayTagContainer{};
}

FCharacterData UCharacterDataAsset::GetPremadeDataForClassAndTier(ESolsticeHeroClass MarineClass, ESuitTier SuitType) const {
    return FCharacterData{};
}

FCharacterData UCharacterDataAsset::GetPremadeDataForClass(ESolsticeHeroClass MarineClass) const {
    return FCharacterData{};
}

FCharacterData UCharacterDataAsset::GetPremadeDataFor(FName MarineClassName) const {
    return FCharacterData{};
}

FPowerSuitVisualDefinition UCharacterDataAsset::GetPowerSuitVisualForClassAndTier(ESolsticeHeroClass MarineClass, ESuitTier SuitType) const {
    return FPowerSuitVisualDefinition{};
}

FPowerSuitVisualDefinition UCharacterDataAsset::GetPowerSuitVisualForClass(ESolsticeHeroClass MarineClass) const {
    return FPowerSuitVisualDefinition{};
}

FPowerSuitVisualDefinition UCharacterDataAsset::GetPowerSuitVisualFor(FName MarineClassName) const {
    return FPowerSuitVisualDefinition{};
}

FPowerSuit UCharacterDataAsset::GetPowerSuitDataForClassAndTier(ESolsticeHeroClass MarineClass, ESuitTier SuitType) const {
    return FPowerSuit{};
}

FPowerSuit UCharacterDataAsset::GetPowerSuitDataForClass(ESolsticeHeroClass MarineClass) const {
    return FPowerSuit{};
}

FPowerSuit UCharacterDataAsset::GetPowerSuitDataFor(FName MarineClassName) const {
    return FPowerSuit{};
}

UMarineClassData* UCharacterDataAsset::GetMarineDataForClass(ESolsticeHeroClass MarineClass) const {
    return NULL;
}

UMarineClassData* UCharacterDataAsset::GetMarineDataFor(FName MarineClassName) const {
    return NULL;
}

FName UCharacterDataAsset::GetMarineClassName(ESolsticeHeroClass MarineClass) const {
    return NAME_None;
}

FText UCharacterDataAsset::GetMarineClassDisplayText(ESolsticeHeroClass MarineClass) const {
    return FText::GetEmpty();
}

UTexture2D* UCharacterDataAsset::GetIconForSuitSection(ESuitSection SuitSection) const {
    return NULL;
}

TSubclassOf<AHeroCharacterBase> UCharacterDataAsset::GetHeroClass() const {
    return NULL;
}

UMaterialInterface* UCharacterDataAsset::GetClassSkeletonMaterial(ESolsticeHeroClass MarineClass) const {
    return NULL;
}

USkeletalMesh* UCharacterDataAsset::GetClassSkeletalMesh(ESolsticeHeroClass MarineClass) const {
    return NULL;
}

FVector UCharacterDataAsset::GetClassSecondaryColor(ESolsticeHeroClass MarineClass) const {
    return FVector{};
}

FVector UCharacterDataAsset::GetClassPrimaryColor(ESolsticeHeroClass MarineClass) const {
    return FVector{};
}

TArray<FName> UCharacterDataAsset::GetClassNames() const {
    return TArray<FName>();
}

UTexture2D* UCharacterDataAsset::GetClassIconFor(ESolsticeHeroClass MarineClass) const {
    return NULL;
}

FText UCharacterDataAsset::GetClassDisplayNameFor(ESolsticeHeroClass MarineClass) const {
    return FText::GetEmpty();
}

FText UCharacterDataAsset::GetClassDescriptionFor(ESolsticeHeroClass MarineClass) const {
    return FText::GetEmpty();
}

FGameplayTagContainer UCharacterDataAsset::GetCampaignUnlockTagsFor(ESolsticeHeroClass MarineClass) const {
    return FGameplayTagContainer{};
}

FPowerSuit UCharacterDataAsset::GetBotSuitDataFor(UBotStatus* BotStatus) const {
    return FPowerSuit{};
}

FPowerSuitVisualDefinition UCharacterDataAsset::GetBotPowerSuitVisualFor(const UBotStatus* BotStatus) const {
    return FPowerSuitVisualDefinition{};
}

FCharacterData UCharacterDataAsset::GetBotDataFor(UBotStatus* BotStatus) const {
    return FCharacterData{};
}

TArray<FSolsticeAttributeValue> UCharacterDataAsset::GetBotAttributesFor(UBotStatus* BotStatus) const {
    return TArray<FSolsticeAttributeValue>();
}

UTexture2D* UCharacterDataAsset::GetAvatarFor(ESolsticeHeroClass MarineClass) const {
    return NULL;
}

TArray<UMarineClassData*> UCharacterDataAsset::GetAvailableSuitsForTier(ESuitTier SuitTier, UCampaign* ActiveCampaign, UExecutorSubsystem* ExecutorSubsystem) const {
    return TArray<UMarineClassData*>();
}

TArray<FSolsticeAttributeValue> UCharacterDataAsset::GetAttributesForClassAndTier(ESolsticeHeroClass MarineClass, ESuitTier SuitType) const {
    return TArray<FSolsticeAttributeValue>();
}

TArray<FSolsticeAttributeValue> UCharacterDataAsset::GetAttributesForClass(ESolsticeHeroClass MarineClass) const {
    return TArray<FSolsticeAttributeValue>();
}

TArray<FSolsticeAttributeValue> UCharacterDataAsset::GetAttributesFor(FName MarineClassName) const {
    return TArray<FSolsticeAttributeValue>();
}


