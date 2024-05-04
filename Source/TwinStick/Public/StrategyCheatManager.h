#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GameplayTagContainer.h"
#include "EDifficulty.h"
#include "StrategyCheatManager.generated.h"

class ARegion;

UCLASS(Blueprintable)
class TWINSTICK_API UStrategyCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UStrategyCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnStorm(ARegion* Region);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnMission(ARegion* Region, FGameplayTag MissionTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnClientFinishedMission(ARegion* Region, FGameplayTag MissionTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnCampaignMission(ARegion* Region, FGameplayTag MissionTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSupplies(int32 InSupplies);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSpecialists(int32 InSpecialists);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMaximumGlobalInfestation(int32 InInfestation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLevelSeed(int32 Seed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHQCurrentHealth(int32 NewHealth);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGlobalInfestation(int32 InInfestation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGameMonth(int32 Month);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDeployment(int32 InDeployment);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCustomSkin(const FString& SkinTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCampaignInfestationGrowthModifier(float NewModifier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBotDefaultSetup();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SeMissionGeneration(const FString& MissionTag, int32 Seed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveDefaultSetup();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RespecProfile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetTesterHQHealthDefault();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetContacts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetColor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveMedalFromProfile(FGameplayTag MedalTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveGrieferStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveCampaignTag(const FString& RemovedTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveBots();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshView();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReduceStormIntensity(ARegion* Region);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReduceIntel(ARegion* Region);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReduceInfestation(ARegion* Region);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrimeSolar();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrimeHasroc();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayCinematics(FGameplayTag CinematicsTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MagnumLives();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MagnumDiesAgain();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InfestPlanet();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveTech(FGameplayTag TechTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveItem(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FinishUpgrade();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FinishResearch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FinishEngineering();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DespawnStorm(ARegion* Region);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ContactAllRegions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteCampaignMission(const FString& CampaignTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearWeeklyProfile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearGrantedMedals();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearDailyProfile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearAvoidedPlayers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildOutpost(ARegion* Region);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AutoCompleteMissions(bool bAutoComplete);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddStormIntensity(ARegion* Region);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddSkillPoints(int32 Points);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddRequisition(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddProfileProgressTag(FGameplayTag ProfileTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddProfileCaptureTag(const FGameplayTag& InCaptureTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddPlayerStat(const FString& TagStat, float Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddMedalToProfile(FGameplayTag MedalTag, EDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddIntel(ARegion* Region);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddInfestation(ARegion* Region);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddFollowerBot(const FGameplayTag& InBotTag, int32 InBotLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddCustomBot(const FGameplayTag& InCustomBotTag, int32 InBotLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddCampaignTag(const FString& NewTag);
    
};

