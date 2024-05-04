#include "PlayerTasksDataAsset.h"

UPlayerTasksDataAsset::UPlayerTasksDataAsset() {
    this->DailyMissionXPReward = 0;
    this->DailiesRequiredForBonus = 0;
    this->BonusXPForDailyChallenge = 0;
    this->WeeklyMissionXPReward = 0;
    this->WeekliesRequiredForBonus = 0;
    this->BonusSkillPointsForWeeklyChallenge = 0;
    this->MonthliesRequiredForBonus = 0;
    this->MinPrimaryMissions = 1;
    this->MaxPrimaryMissions = 3;
    this->MinInfestation = 3;
    this->MaxInfestation = 7;
    this->MinDifficulty = EDifficulty::Veteran;
    this->MaxDifficulty = EDifficulty::MERCS;
    this->MinHordeArrival = EHordeArrivalTime::Early;
    this->MaxHordeArrival = EHordeArrivalTime::Immediate;
    this->TaskMultiplier = 71;
}

int32 UPlayerTasksDataAsset::GetXPRewardedForTask(FGameplayTag PlayerTaskTag) const {
    return 0;
}

int32 UPlayerTasksDataAsset::GetTaskIdentifier(FGameplayTag TaskTag) const {
    return 0;
}

bool UPlayerTasksDataAsset::GetTaskDataBySeedAndTag(int32 InSeed, FGameplayTag TaskTag, FPlayerTaskSettings& OutTaskSettings) const {
    return false;
}

FPlayerStat UPlayerTasksDataAsset::GetSeededTaskStat(int32 InSeed) const {
    return FPlayerStat{};
}

int32 UPlayerTasksDataAsset::GetSeededPrimaryMissionCount(int32 InSeed) const {
    return 0;
}

FGameplayTag UPlayerTasksDataAsset::GetSeededMapTag(int32 InSeed) const {
    return FGameplayTag{};
}

int32 UPlayerTasksDataAsset::GetSeededInfestationValue(int32 InSeed) const {
    return 0;
}

EHordeArrivalTime UPlayerTasksDataAsset::GetSeededHordeArrivalValue(int32 InSeed) const {
    return EHordeArrivalTime::Immediate;
}

ESolsticeHeroClass UPlayerTasksDataAsset::GetSeededHeroClass(int32 InSeed) const {
    return ESolsticeHeroClass::ESHC_Invalid;
}

EDifficulty UPlayerTasksDataAsset::GetSeededDifficultyValue(int32 InSeed) const {
    return EDifficulty::None;
}

int32 UPlayerTasksDataAsset::GetRequiredAmountForBonusByGroupTag(FGameplayTag PlayerTaskGroupTag) const {
    return 0;
}

TArray<FGameplayTag> UPlayerTasksDataAsset::GetGroupTaskTags(FGameplayTag TaskGroupTag) const {
    return TArray<FGameplayTag>();
}

FGameplayTag UPlayerTasksDataAsset::GetGroupTagForTask(FGameplayTag TaskTag) {
    return FGameplayTag{};
}

FGameplayTag UPlayerTasksDataAsset::GetBonusProgressTagByGroupTag(FGameplayTag TaskGroupTag) const {
    return FGameplayTag{};
}

int32 UPlayerTasksDataAsset::GetBonusByGroupTag(FGameplayTag PlayerTaskGroupTag) const {
    return 0;
}

TArray<FGameplayTag> UPlayerTasksDataAsset::GetAllUsableTaskTags() const {
    return TArray<FGameplayTag>();
}

FGameplayTagContainer UPlayerTasksDataAsset::GetAllTaskTags() const {
    return FGameplayTagContainer{};
}


