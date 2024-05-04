#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DamageLoggedDelegate.h"
#include "EDifficulty.h"
#include "EnemyCombatTracker.h"
#include "EnemyKilledDelegate.h"
#include "MatchEndedDelegate.h"
#include "PlayerRank.h"
#include "PlayerRankData.h"
#include "PlayerStatContainer.h"
#include "PlayerStatsPair.h"
#include "CombatTrackingSubsystem.generated.h"

class AHeroCharacterBase;
class AMonsterCharacterBase;
class APawn;

UCLASS(Blueprintable)
class TWINSTICK_API UCombatTrackingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchEnded OnMatchEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageLogged OnDamageLogged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AHeroCharacterBase*, FPlayerRank> PlayerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AHeroCharacterBase*, FPlayerRank> PlayerLifetimeStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AHeroCharacterBase*, FPlayerRankData> PlayerRankRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AHeroCharacterBase*, float> PlayerJoinTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AHeroCharacterBase*, int32> PlayerDailyChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AHeroCharacterBase*, FPlayerStatContainer> PlayerMedals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AHeroCharacterBase*, FPlayerStatContainer> PlayerDailyStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AHeroCharacterBase*, FPlayerStatContainer> PlayerWeeklyStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AHeroCharacterBase*, FPlayerStatContainer> PlayerMonthlyStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyCombatTracker> RegisteredEnemies;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyKilled OnEnemyKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHeroCharacterBase*> RegisteredPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinalEvacSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinalCountdownExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FinalCountdownHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameStartedTime;
    
    UCombatTrackingSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdatePlayersProgress();
    
    UFUNCTION(BlueprintCallable)
    void LogStrolSubstanceKilled(APawn* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void LogShotFired(APawn* Instigator, bool bHit, bool bPrimaryWeapon);
    
    UFUNCTION(BlueprintCallable)
    void LogSecondaryMissionCompleted();
    
    UFUNCTION(BlueprintCallable)
    void LogPrimaryMissionCompleted();
    
    UFUNCTION(BlueprintCallable)
    void LogPlayerTasksCompleted(const AHeroCharacterBase* Player, FGameplayTagContainer CompletedTasks);
    
    UFUNCTION(BlueprintCallable)
    void LogPlayerRevived(const AHeroCharacterBase* RevivedPlayer, APawn* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void LogPlayerMedalReceived(const AHeroCharacterBase* Player, FGameplayTag MedalTag, EDifficulty AwardedDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void LogPlayerHealed(const AHeroCharacterBase* HealedPlayer, APawn* Instigator, float Amount);
    
    UFUNCTION(BlueprintCallable)
    void LogOverrunMinutes(float InMinutes);
    
    UFUNCTION(BlueprintCallable)
    void LogNewMonsterWave();
    
    UFUNCTION(BlueprintCallable)
    void LogMonsterCaptured(const AMonsterCharacterBase* Monster);
    
    UFUNCTION(BlueprintCallable)
    void LogFluffyHunt();
    
    UFUNCTION(BlueprintCallable)
    void LogFinalEvacSpawned();
    
    UFUNCTION(BlueprintCallable)
    void LogCivilianRescued();
    
    UFUNCTION(BlueprintCallable)
    void LogCampaignMissionCompleted(const FGameplayTag& CampaignTag);
    
    UFUNCTION(BlueprintCallable)
    void LogBiomassKilled();
    
    UFUNCTION(BlueprintCallable)
    void LogBiomassDamaged(APawn* Instigator, float Damage);
    
    UFUNCTION(BlueprintCallable)
    void HandleHostQuitSkirmishMatch();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPlayerStatsPair> GetPlayerStatsArray() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBestStatValue(FGameplayTag StatTag) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceGameEnd(bool bVictory);
    
    UFUNCTION(BlueprintCallable)
    void DebugPromotePlayer(AHeroCharacterBase* InPlayer);
    
    UFUNCTION(BlueprintCallable)
    void CalculateMVPSupport(float& OutResult, FText& OutName);
    
    UFUNCTION(BlueprintCallable)
    void CalculateMVPRecon(float& OutResult, FText& OutName);
    
    UFUNCTION(BlueprintCallable)
    void CalculateMVPMatch(float& OutResult, FText& OutName);
    
    UFUNCTION(BlueprintCallable)
    void CalculateMVPCombat(float& OutResult, FText& OutName);
    
    UFUNCTION(BlueprintCallable)
    void AddTagForAllPlayers(const FGameplayTag& ProfileTag);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerXP(const AHeroCharacterBase* Player, float XP, bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerStat(const AHeroCharacterBase* Player, const FGameplayTag& InTag, float Value, bool bForceUpdate);
    
};

