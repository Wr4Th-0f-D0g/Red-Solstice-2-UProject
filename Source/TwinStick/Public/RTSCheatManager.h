#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "RTSCheatManager.generated.h"

class AMonsterCharacterBase;
class ASolsticeCharacterBase;
class ULeaderboardInfo;
class USolsticeBuffBase;

UCLASS(Blueprintable)
class TWINSTICK_API URTSCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> SpeedBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> HealBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopAllAI;
    
public:
    URTSCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void WaveSkip();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WaveGoto(int32 WaveNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UseOldBodyParts(bool bUseOld);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UploadPlayerStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UploadLeaderboards() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void UploadDebugLeaderboard(float InScore);
    
    UFUNCTION(BlueprintCallable)
    void ToggleSpeedBuff(ASolsticeCharacterBase* TargetChar);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSpawnSystemEnabled();
    
    UFUNCTION(BlueprintCallable)
    void ToggleSkillOverride(ASolsticeCharacterBase* TargetChar);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleObserverHeightMode();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMonsterDebugs(AMonsterCharacterBase* Monster);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleISMs();
    
    UFUNCTION(BlueprintCallable)
    void ToggleInfAmmo(ASolsticeCharacterBase* TargetChar);
    
    UFUNCTION(BlueprintCallable)
    void ToggleHiddenFromAI(ASolsticeCharacterBase* TargetChar);
    
    UFUNCTION(BlueprintCallable)
    void ToggleGodMode(ASolsticeCharacterBase* TargetChar);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFOW();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDMM();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAllSpeedBuff();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAllSkillOverride();
    
    UFUNCTION(BlueprintCallable)
    void ToggleAllMonsterDebugs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAllInfAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAllHiddenFromAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAllGodMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAIEnabled();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToMouseCursor();
    
public:
    UFUNCTION(BlueprintCallable)
    void TeleportPlayerToPlayer(ASolsticeCharacterBase* TargetChar);
    
    UFUNCTION(BlueprintCallable)
    void TeleportPlayerToMe(ASolsticeCharacterBase* TargetChar);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SuicideAll();
    
    UFUNCTION(BlueprintCallable)
    void Suicide(ASolsticeCharacterBase* TargetChar);
    
    UFUNCTION(BlueprintCallable)
    void SpawnMonsterFromClass(TSubclassOf<AMonsterCharacterBase> MonsterClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkipPrimaryMissionTask();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowVehicleConnections();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowPrefabs(FGameplayTag PrefabTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowMonsters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowAllBigMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerStatInt(const FString& InName, int32 InValue);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SetObserverSpringArm(float Val);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SetLeaderboardScore(FName InLeaderboardName, int32 InScore) const;
    
    UFUNCTION(BlueprintCallable)
    void Revive(ASolsticeCharacterBase* TargetChar);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveCampaignTag(const FString& RemovedTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RebuildAllNavmesh();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintReplicatedActorsAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintReplicatedActorsActive();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintCurrentMonsters();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void MagnumLives();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MagnumDiesAgain();
    
public:
    UFUNCTION(BlueprintCallable)
    void LeaderboardDownloaded(ULeaderboardInfo* LeaderboardInfo);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void KaosClose();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Kaos();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void InfiniteSkills();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InfiniteAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void IncrementPlayerStatInt(const FString& InName, int32 InValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideVehicleConnections();
    
    UFUNCTION(BlueprintCallable)
    void Heal(ASolsticeCharacterBase* TargetChar);
    
    UFUNCTION(BlueprintCallable)
    void GiveXP(ASolsticeCharacterBase* TargetChar, float XP);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPlayerStatInt(const FString& InName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceLowestGraphics();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void EvacuateAll();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DownloadLeaderboards(int32 Minimum, int32 Maximum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DownloadLeaderboard(FName InLeaderboardName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableSpawnSystem();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void DialogTesting();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllMonstersInRadius(float Radius);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllMonsters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CrashTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompletePrimaryMission();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BeastMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllRevive();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllHeal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllGiveXP(float XP);
    
    UFUNCTION(BlueprintCallable)
    void AddRequisition(int32 NumRequisition);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddCampaignTag(const FString& NewTag);
    
};

