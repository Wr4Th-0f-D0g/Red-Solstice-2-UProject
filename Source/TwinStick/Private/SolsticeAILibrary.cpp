#include "SolsticeAILibrary.h"
#include "Templates/SubclassOf.h"

USolsticeAILibrary::USolsticeAILibrary() {
}

void USolsticeAILibrary::SortArrayByThreat(bool bAscending, TArray<AActor*>& InOutMonsterArray) {
}

bool USolsticeAILibrary::IsHostileOrNeutralInterfaceActor(TScriptInterface<IGenericTeamAgentInterface> ActorA, const AActor* ActorB) {
    return false;
}

bool USolsticeAILibrary::IsHostileOrNeutralInterface(TScriptInterface<IGenericTeamAgentInterface> ActorA, TScriptInterface<IGenericTeamAgentInterface> ActorB) {
    return false;
}

bool USolsticeAILibrary::IsHostileOrNeutral(const AActor* ActorA, const AActor* ActorB) {
    return false;
}

bool USolsticeAILibrary::IsHostileInterfaceActor(TScriptInterface<IGenericTeamAgentInterface> ActorA, const AActor* ActorB) {
    return false;
}

bool USolsticeAILibrary::IsHostileInterface(TScriptInterface<IGenericTeamAgentInterface> ActorA, TScriptInterface<IGenericTeamAgentInterface> ActorB) {
    return false;
}

bool USolsticeAILibrary::IsHostile(const AActor* ActorA, const AActor* ActorB) {
    return false;
}

UAbilityBase* USolsticeAILibrary::GetWeightedAbility(bool& bSuccess, TMap<UAbilityBase*, float> WeightedMap, bool bCheckActivation, UAbilityBase* LastAbility) {
    return NULL;
}

int32 USolsticeAILibrary::GetThreatValue(const FMonsterSettings& InSettings) {
    return 0;
}

EEnemyThreatLevel USolsticeAILibrary::GetThreatLevel(const FMonsterSettings& InSettings) {
    return EEnemyThreatLevel::VeryLow;
}

int32 USolsticeAILibrary::GetNumberOfMonsters(const UObject* WorldContextObject) {
    return 0;
}

int32 USolsticeAILibrary::GetNumberOfEnemiesInRange(const UObject* WorldContextObject, const FVector& Location, FEnemySearchParams EnemySearchParams) {
    return 0;
}

FGameplayTag USolsticeAILibrary::GetMonsterTag(const FMonsterSettings& InSettings) {
    return FGameplayTag{};
}

EMonsterSizeClass USolsticeAILibrary::GetMonsterSize(const FMonsterSettings& InSettings) {
    return EMonsterSizeClass::Tiny;
}

float USolsticeAILibrary::GetMonsterKillXP(const FMonsterSettings& InSettings) {
    return 0.0f;
}

FMonsterGroupTagTable USolsticeAILibrary::GetMonsterGroupRowForTag(UDataTable* GroupRowTagTable, FGameplayTag Tag) {
    return FMonsterGroupTagTable{};
}

FText USolsticeAILibrary::GetMonsterDisplayName(const FMonsterSettings& InSettings) {
    return FText::GetEmpty();
}

TSubclassOf<AMonsterCharacterBase> USolsticeAILibrary::GetMonsterClass(const FMonsterSettings& InSettings) {
    return NULL;
}

FGameplayTag USolsticeAILibrary::GetKilledTag(const FMonsterSettings& InSettings) {
    return FGameplayTag{};
}

TArray<ASolsticeCharacterBase*> USolsticeAILibrary::GetEnemiesInRangeByThreatLevel(const UObject* WorldContextObject, const FVector& Location, FEnemySearchParams EnemySearchParams, FEnemyThreatSearch ThreatSearch) {
    return TArray<ASolsticeCharacterBase*>();
}

TArray<ASolsticeCharacterBase*> USolsticeAILibrary::GetEnemiesInRange(const UObject* WorldContextObject, const FVector& Location, FEnemySearchParams EnemySearchParams) {
    return TArray<ASolsticeCharacterBase*>();
}

FGameplayTag USolsticeAILibrary::GetCapturedTag(const FMonsterSettings& InSettings) {
    return FGameplayTag{};
}

FGameplayTagContainer USolsticeAILibrary::GetCampaignRequirementTags(const FMonsterSettings& InSettings) {
    return FGameplayTagContainer{};
}

EBossType USolsticeAILibrary::GetBossType(const FMonsterSettings& InSettings) {
    return EBossType::None;
}

TEnumAsByte<ETeamAttitude::Type> USolsticeAILibrary::GetAttitudeTowardsInterfaceActor(TScriptInterface<IGenericTeamAgentInterface> ActorA, const AActor* ActorB) {
    return ETeamAttitude::Friendly;
}

TEnumAsByte<ETeamAttitude::Type> USolsticeAILibrary::GetAttitudeTowardsInterface(TScriptInterface<IGenericTeamAgentInterface> ActorA, TScriptInterface<IGenericTeamAgentInterface> ActorB) {
    return ETeamAttitude::Friendly;
}

TEnumAsByte<ETeamAttitude::Type> USolsticeAILibrary::GetAttitudeTowards(const AActor* ActorA, const AActor* ActorB) {
    return ETeamAttitude::Friendly;
}

bool USolsticeAILibrary::CheckSkillRangeFollower(AAIController* InController, USkill* InSkill, const FVector& DestLoc) {
    return false;
}


