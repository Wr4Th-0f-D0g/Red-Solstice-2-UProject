#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "AvailableSkillPointsChangedDelegate.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "ClassStatesRequestedDelegate.h"
#include "ECorporation.h"
#include "EDifficulty.h"
#include "ESaveGameType.h"
#include "ESolsticeGameAccessibility.h"
#include "ESolsticeHeroClass.h"
#include "ESolsticeUserOnlineContext.h"
#include "ESolsticeUserPrivilege.h"
#include "PlayerProgress.h"
#include "PlayerRankChangedDelegate.h"
#include "PlayerRankData.h"
#include "PlayerStat.h"
#include "PlayerStatContainer.h"
#include "PlayerStatsUpdatedDelegate.h"
#include "ProfileSavingStateChangedDelegate.h"
#include "RequisitionChangedDelegate.h"
#include "SolsticeCampaignID.h"
#include "SolsticeSaveGameInfo.h"
#include "SolsticeSteamID.h"
#include "SolsticeTechData.h"
#include "SpecializedRank.h"
#include "StrategyInventoryItemData.h"
#include "Templates/SubclassOf.h"
#include "TransferredCharacterData.h"
#include "ExecutorSubsystem.generated.h"

class AMonsterCharacterBase;
class ASolsticePlayerState;
class UCampaign;
class ULeaderboardInfo;
class USolsticeUserInfo;
class UTechTreeData;

UCLASS(Blueprintable, Config=Game)
class TWINSTICK_API UExecutorSubsystem : public ULocalPlayerSubsystem, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpecializedRank CurrentDeploymentProgress;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProfileInitialized;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InternetTimeRequestURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransferredCharacterData TransferredCharacterData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatsUpdated OnPlayerStatsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRankChanged OnPlayerRankChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailableSkillPointsChanged OnAvailableSkillPointsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 SteamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FPlayerProgress PlayerProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VersionString;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClassStatesRequested RequestClassStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCampaign* ActiveCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSolsticeSaveGameInfo AutoLoadGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadingFromMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkirmishMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESolsticeGameAccessibility SkirmishDefaultAccessibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESolsticeGameAccessibility CampaignDefaultAccessibility;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<uint64, int32> AvoidedPlayers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnAvoidedPlayersChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProfileSavingStateChanged OnProfileSavingStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle LoadSteamDataHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate PostTimestampReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequisitionChanged OnRequisitionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInventoryVerified;
    
    UExecutorSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnloadCampaign();
    
    UFUNCTION(BlueprintCallable)
    void TryApplyAchievements();
    
    UFUNCTION(BlueprintCallable)
    void StopAvoidingPlayerByID(FSolsticeSteamID AvoidedPlayerID);
    
    UFUNCTION(BlueprintCallable)
    void StopAvoidingPlayer(ASolsticePlayerState* AvoidedPlayer);
    
    UFUNCTION(BlueprintCallable)
    UCampaign* StartNewCampaign();
    
    UFUNCTION(BlueprintCallable)
    void SpendXPToRespecProfileSkills(const TArray<FGameplayTag> TechTreeTags);
    
    UFUNCTION(BlueprintCallable)
    void SaveProfileSkills();
    
    UFUNCTION(BlueprintCallable)
    bool SaveCampaignToFile(const FString& Filename, ESaveGameType SaveType);
    
    UFUNCTION(BlueprintCallable)
    bool SaveCampaign(ESaveGameType SaveType, FSolsticeSaveGameInfo& OutGameInfo);
    
    UFUNCTION(BlueprintCallable)
    void RollbackProfileSkills();
    
    UFUNCTION(BlueprintCallable)
    void RequestStatsForClass(ESolsticeHeroClass MarineClass);
    
    UFUNCTION(BlueprintCallable)
    void PrepareGameLoad(const FSolsticeSaveGameInfo& InGameInfo, bool bFromMainMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerHasCompletedMedalForDifficulty(FGameplayTag MedalTag, EDifficulty Difficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerHasCompletedMedalForAnyDifficulty(FGameplayTag MedalTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerHasCompletedMedal(FGameplayTag MedalTag) const;
    
    UFUNCTION(BlueprintCallable)
    void OnLeaderboardEntriesUploaded(ULeaderboardInfo* InLeaderboard, bool bSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnLeaderboardEntriesDownloaded(ULeaderboardInfo* InLeaderboard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MatchesLifetimeRequirement(const FPlayerStat& InRequirement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MatchesDeploymentRequirement(const FPlayerStat& InRequirement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MatchesChallengeRequirement(const FGameplayTag& InRequirement);
    
    UFUNCTION(BlueprintCallable)
    void LoadCampaignFromFile(const FString& Filename, bool bLoadCampaign, bool bLoadMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvoidingPlayer(ASolsticePlayerState* TestedPlayer) const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidateActiveCampaign();
    
    UFUNCTION(BlueprintCallable)
    void InitializeProfile(const USolsticeUserInfo* UserInfo);
    
    UFUNCTION(BlueprintCallable)
    void IncreasePrestige();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnlockedSkillTierFor(UTechTreeData* InSkillTree, int32 InTier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUnlockedBotClass(ESolsticeHeroClass MarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequirementForProfileSkill(const FSolsticeTechData& InSkillData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProgressTag(FGameplayTag InTag, bool bExact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProfileSkill(const FSolsticeTechData& InSkillData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasPointsInSkillTree(UTechTreeData* TreeData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasKilledMonster(TSubclassOf<AMonsterCharacterBase> MonsterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEncounteredMonster(TSubclassOf<AMonsterCharacterBase> MonsterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedPlayerTaskBonus(FGameplayTag TaskTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedPlayerTask(FGameplayTag TaskTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCapturedMonster(TSubclassOf<AMonsterCharacterBase> MonsterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyProgressTags(const FGameplayTagContainer& InTagContainer, bool bExact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllProgressTags(const FGameplayTagContainer& InTagContainer, bool bExact) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleUserInitialized(const USolsticeUserInfo* UserInfo, bool bBSuccess, FText Error, ESolsticeUserPrivilege RequestedPrivilege, ESolsticeUserOnlineContext OnlineContext);
    
    UFUNCTION(BlueprintCallable)
    void GrantUniqueAchievement(FGameplayTag AchievementTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUserSaveDirectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalSkillPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpentSkillPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkillPointXP_Progress(int32& OutCurrent, int32& OutRequired);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSkillPointsForXP(int32 InXP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRankXP_Progress(int32& OutCurrent, int32& OutRequired);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlayerRankData GetRankDataForRank(int32 InRank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetProgressToNextSkillPoint(int32 InXP, int32& OutCurrent, int32& OutRequired, float& OutProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProfileXPAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrestigeXPAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerTaskProgress(FGameplayTag TaskTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetPlayerTaskGroupTimeRemaining(FGameplayTag TaskGroupTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerTaskGroupSeed(const FGameplayTag& TaskTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerTaskGroupProgress(FGameplayTag TaskGroupTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetPlayerTaskBonusTimeRemaining(FGameplayTag TaskGroupTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerStatForClass(const FGameplayTag& InStatTag, ESolsticeHeroClass InMarineClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerStat(const FGameplayTag& InStatTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerStatContainer GetOwnedItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerRankData GetNextRankData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMedalDifficultyCompletedByTag(FGameplayTag MedalTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLifetimeStatValue(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemQuantity(FGameplayTag ItemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstFreeCampaignIndex(ECorporation InCorporation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExpendedRequisition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEarnedRequisition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeploymentStatValue(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerRankData GetCurrentRankData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPrestigeLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChallengeStatValue(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FSolsticeSteamID> GetAvoidedPlayerIDs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableSkillPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableRequisition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FStrategyInventoryItemData> GetAvailableItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeCampaignID> GetAllUserCampaigns() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSaveStats();
    
    UFUNCTION(BlueprintCallable)
    void DebugClearStats();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUndoSkillPreviews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRespecProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanIncreasePrestige() const;
    
    UFUNCTION(BlueprintCallable)
    void AvoidPlayer(ASolsticePlayerState* AvoidedPlayer);
    
    UFUNCTION(BlueprintCallable)
    void AddTutorialTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    void AddProgressTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    void AddProfileSkillPreview(const FSolsticeTechData& InSkillData);
    
    UFUNCTION(BlueprintCallable)
    void AddInventory(const FGameplayTag& ItemTag, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    void AddAvoidedPlayerByID(FSolsticeSteamID AvoidedPlayerID);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

