#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "CampaignMissionGenerationData.h"
#include "CampaignMissionUnlockedDelegate.h"
#include "CampaignProgressTagAddedDelegate.h"
#include "ECampaignMode.h"
#include "ECorporation.h"
#include "EDifficulty.h"
#include "ESolsticeHeroClass.h"
#include "MarsTime.h"
#include "SaveGameWeaponData.h"
#include "SavedCharacterData.h"
#include "SolsticeCampaignID.h"
#include "SolsticeDeployedVehicleData.h"
#include "SolsticeSaveInterface.h"
#include "Campaign.generated.h"

class UBotManager;
class UDataTable;
class UPlayerDataAsset;
class UStrategyCampaignData;

UCLASS(Blueprintable)
class TWINSTICK_API UCampaign : public UObject, public IGameplayTagAssetInterface, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EDifficulty GameDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ECorporation Corporation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag SelectedCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSolsticeCampaignID CampaignID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime CampaignTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerDataAsset* PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStrategyCampaignData* CampaignData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CampaignProgressTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TechProgressTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UpgradeProgressTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MiscellaneousProgressTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ArchiveTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TutorialProgressTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCampaignMissionGenerationData> UnlockedMissionData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignMissionUnlocked OnCampaignMissionUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignProgressTagAdded OnCampaignProgressTagAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignProgressTagAdded OnCampaignProgressTagRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSkipFirstMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bFastCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIronman;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ECampaignMode CampaignMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBotManager* BotManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StoriesDatatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DocumentsDatatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharactersDatatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BestiaryDatatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> ArchivesDocumentsViewed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> ArchivesBeastsViewed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ResearchViewed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> EngineeringItemsViewed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasNewHordeArrivalStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasNewAirSupportStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasNewArtilleryStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSavedCharacterData LastLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSaveGameWeaponData LastPrimaryWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSaveGameWeaponData LastSecondaryWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSolsticeDeployedVehicleData LastVehicleData;
    
    UCampaign();

    UFUNCTION(BlueprintCallable)
    void SetSkipFirstMission(bool bSkip);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayTutorial(bool Tutorial);
    
    UFUNCTION(BlueprintCallable)
    void SetIronman(bool Ironman);
    
    UFUNCTION(BlueprintCallable)
    void SetGameDifficulty(EDifficulty InDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetFastCampaign(bool FastCampaign);
    
    UFUNCTION(BlueprintCallable)
    void SetCorporation(ECorporation InCorporation);
    
    UFUNCTION(BlueprintCallable)
    void SetCampaignSelection(FGameplayTag CampaignSelectionTag);
    
    UFUNCTION(BlueprintCallable)
    void SetCampaignMode(ECampaignMode InCampaignMode);
    
    UFUNCTION(BlueprintCallable)
    void RemoveUpgradeTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTutorialTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTechTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMiscellaneousTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCampaignTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProgressTag(FGameplayTag InTag, bool bExact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyProgressTags(const FGameplayTagContainer& InTagContainer, bool bExact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllProgressTags(const FGameplayTagContainer& InTagContainer, bool bExact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNextCampaignMission(FCampaignMissionGenerationData& OutMissionData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeHeroClass GetDefaultHeroClassForCampaign() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvailableCampaignMissions(TArray<FCampaignMissionGenerationData>& OutMissionData) const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteMission(const FCampaignMissionGenerationData& InMissionData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSkipTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSkipFirstMission() const;
    
    UFUNCTION(BlueprintCallable)
    void AddUpgradeTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    void AddTutorialTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    void AddTechTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    void AddMiscellaneousTag(FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    void AddCampaignTag(FGameplayTag InTag);
    

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

