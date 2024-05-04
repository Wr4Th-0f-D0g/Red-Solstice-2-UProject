#include "PlayerDataAsset.h"
#include "Templates/SubclassOf.h"

UPlayerDataAsset::UPlayerDataAsset() {
    this->PlayerRanks = NULL;
    this->PlayerChallenges = NULL;
    this->PlayerMedals = NULL;
    this->PlayerAchievements = NULL;
    this->DailyChallengeExperienceBonus = 3.00f;
    this->DailyChallengeExperienceBonusReduction = -1.00f;
    this->MaximumProfilePoints = -1;
}

bool UPlayerDataAsset::PlayerHasDLC(int32 DLCCode, bool CheckDefaultPass) const {
    return false;
}

FSolsticeTechData UPlayerDataAsset::GetTechData(const FGameplayTag& TechTag) const {
    return FSolsticeTechData{};
}

TSubclassOf<AAbilityDroneBase> UPlayerDataAsset::GetDroneClassForCustomSkin(FGameplayTag CustomSkinTag) const {
    return NULL;
}

UCustomSkinDataAsset* UPlayerDataAsset::GetCustomSkinFor(FGameplayTag SkinTag) const {
    return NULL;
}

UStrategyCampaignData* UPlayerDataAsset::GetCampaignDataFor(FGameplayTag InCampaignSelectionTag) const {
    return NULL;
}

TArray<UCustomSkinDataAsset*> UPlayerDataAsset::GetAvailableSkins() const {
    return TArray<UCustomSkinDataAsset*>();
}

TArray<FSolsticeAttributeModifier> UPlayerDataAsset::GetAttributeModifiersForTech(const FGameplayTag& TechTag) const {
    return TArray<FSolsticeAttributeModifier>();
}


