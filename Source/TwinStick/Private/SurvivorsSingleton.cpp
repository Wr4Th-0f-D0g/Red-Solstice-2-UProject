#include "SurvivorsSingleton.h"

USurvivorsSingleton::USurvivorsSingleton() {
    this->ExplosionCameraShakeTypeDefault = NULL;
    this->GenericBuffTable = NULL;
    this->MonsterSetupTable = NULL;
    this->MonsterSetupTableConsoles = NULL;
    this->EnemyMarineSetupTable = NULL;
    this->FollowerSetupTable = NULL;
    this->MonsterAggroTable = NULL;
    this->BestiaryTable = NULL;
    this->WaveAdvanceSound = NULL;
    this->MonsterGroupTagTable = NULL;
    this->WaveGenerationAsset = NULL;
    this->ComponentModuleDescriptions = NULL;
    this->ControlOptionsDataTable = NULL;
    this->BotSkillDefinitionsTable = NULL;
    this->PrefabDataAsset = NULL;
    this->LocalizationSimpleTextTable = NULL;
    this->MonsterDoorTargetCheckFilter = NULL;
    this->InteractableInfoTable = NULL;
    this->ChatWidgetClass = NULL;
    this->VehicleInfoWidgetClass = NULL;
    this->FOWRenderTaget = NULL;
    this->FOWWhiteTexture = NULL;
    this->LeaderboardDataTable = NULL;
    this->GameplayTextMappings = NULL;
    this->PlayerStaticData = NULL;
    this->GlobalDefinitions = NULL;
    this->HeroData = NULL;
    this->StrategyMapDefinitions = NULL;
    this->PrefabDefinitions = NULL;
    this->CorsairDataAsset = NULL;
    this->PlaceableItemData = NULL;
    this->PlayerTasksData = NULL;
    this->WeaponDataAsset = NULL;
    this->MedalsDataAsset = NULL;
    this->VehicleDataAsset = NULL;
    this->BuffData = NULL;
    this->BuffDescriptions = NULL;
    this->SkirmishInventoryTable = NULL;
    this->CampaignObjectClass = NULL;
    this->BotManagerClass = NULL;
    this->PlayerRanksTable = NULL;
    this->WeaponTable = NULL;
    this->WeaponFiringModeTable = NULL;
    this->MonsterGroupsTable = NULL;
    this->DialogSpeakerTable = NULL;
    this->SuitModulesTable = NULL;
    this->StrategyMissionGenerationTable = NULL;
    this->StrategyCombatMissionTable = NULL;
    this->ChallengeTable = NULL;
    this->AchievementTableSession = NULL;
    this->AchievementTableLifetime = NULL;
    this->EnvironmentTable = NULL;
    this->WeatherTable = NULL;
    this->AntiCheatData = NULL;
    this->AttributeInfoTable = NULL;
    this->AspectDescriptionsTable = NULL;
    this->PrefabMinimapActorClass = NULL;
    this->ISMHighlightMaterial = NULL;
    this->ISMUnconvertedHighlightMaterial = NULL;
}

void USurvivorsSingleton::ModifyBestiaryDT() {
}

UTexture2D* USurvivorsSingleton::GetSuitSectionIcon(ESuitSection SuitSection) {
    return NULL;
}

UStrategyMapDefinitions* USurvivorsSingleton::GetStrategyMapDefinitions() {
    return NULL;
}

USolsticePrefabData* USurvivorsSingleton::GetPrefabData() {
    return NULL;
}

UPlayerTasksDataAsset* USurvivorsSingleton::GetPlayerTaskData() {
    return NULL;
}

UPlayerDataAsset* USurvivorsSingleton::GetPlayerData() {
    return NULL;
}

UPlaceableItemData* USurvivorsSingleton::GetPlaceableItemData() {
    return NULL;
}

UDataTable* USurvivorsSingleton::GetMonsterDetailsTable() {
    return NULL;
}

UCharacterDataAsset* USurvivorsSingleton::GetHeroData() {
    return NULL;
}

FPlayerRankData USurvivorsSingleton::GetDataForRank(int32 Rank) {
    return FPlayerRankData{};
}

FName USurvivorsSingleton::GetClassName(ESolsticeHeroClass HeroClass) {
    return NAME_None;
}

FCharacterData USurvivorsSingleton::GetCharacterData(ESolsticeHeroClass MarineClass, ESuitTier SuitVersion) {
    return FCharacterData{};
}

TMap<EAttribute, FSolsticeAttributeData> USurvivorsSingleton::GetCharacterAttributes(ESolsticeHeroClass MarineClass, ESuitTier SuitVersion) {
    return TMap<EAttribute, FSolsticeAttributeData>();
}

TArray<FSolsticeAttributeModifier> USurvivorsSingleton::GetAttributeModifiersForRank(int32 Rank) {
    return TArray<FSolsticeAttributeModifier>();
}

TMap<TSoftClassPtr<AInventoryPickup>, FString> USurvivorsSingleton::GetAllCheatPickups() const {
    return TMap<TSoftClassPtr<AInventoryPickup>, FString>();
}


