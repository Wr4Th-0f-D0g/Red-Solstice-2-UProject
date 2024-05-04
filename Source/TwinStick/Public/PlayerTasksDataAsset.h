#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EDifficulty.h"
#include "EHordeArrivalTime.h"
#include "ESolsticeHeroClass.h"
#include "PlayerStat.h"
#include "PlayerTaskSettings.h"
#include "PlayerTaskStatRange.h"
#include "PlayerTasksDataAsset.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UPlayerTasksDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DailyGroupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DailyGroupBonusProgressTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailyMissionXPReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DailiesRequiredForBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusXPForDailyChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DailyTaskTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerTaskSettings> DailyTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeeklyGroupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeeklyGroupBonusProgressTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeeklyMissionXPReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeekliesRequiredForBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusSkillPointsForWeeklyChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> WeeklyTaskTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MonthlyGroupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MonthliesRequiredForBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPrimaryMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPrimaryMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinInfestation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInfestation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty MinDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDifficulty MaxDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHordeArrivalTime MinHordeArrival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHordeArrivalTime MaxHordeArrival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerTaskStatRange> RandomStatRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MapTagsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESolsticeHeroClass> PotentialClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TaskMultiplier;
    
    UPlayerTasksDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetXPRewardedForTask(FGameplayTag PlayerTaskTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTaskIdentifier(FGameplayTag TaskTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetTaskDataBySeedAndTag(int32 InSeed, FGameplayTag TaskTag, FPlayerTaskSettings& OutTaskSettings) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerStat GetSeededTaskStat(int32 InSeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeededPrimaryMissionCount(int32 InSeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSeededMapTag(int32 InSeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeededInfestationValue(int32 InSeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHordeArrivalTime GetSeededHordeArrivalValue(int32 InSeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeHeroClass GetSeededHeroClass(int32 InSeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficulty GetSeededDifficultyValue(int32 InSeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredAmountForBonusByGroupTag(FGameplayTag PlayerTaskGroupTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FGameplayTag> GetGroupTaskTags(FGameplayTag TaskGroupTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetGroupTagForTask(FGameplayTag TaskTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetBonusProgressTagByGroupTag(FGameplayTag TaskGroupTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBonusByGroupTag(FGameplayTag PlayerTaskGroupTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FGameplayTag> GetAllUsableTaskTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAllTaskTags() const;
    
};

