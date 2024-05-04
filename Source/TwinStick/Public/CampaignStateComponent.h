#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "CampaignProgressTagAddedDelegate.h"
#include "CampaignTagsReplicatedDelegate.h"
#include "CampaignVehicleTemplatesUpdatedDelegate.h"
#include "CampaignWeaponTemplatesUpdatedDelegate.h"
#include "ECorporation.h"
#include "ReplicatedWeaponTemplateGroup.h"
#include "SolsticeSavedVehicles.h"
#include "CampaignStateComponent.generated.h"

class UDataTable;
class UStrategyCampaignData;
class UTechObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UCampaignStateComponent : public UActorComponent, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CampaignTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CampaignProgressTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TechTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TechProgressTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpgradeTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UpgradeProgressTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MiscellaneousTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MiscellaneousProgressTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UStrategyCampaignData* CampaignData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignTagsReplicated OnCampaignTagsAddedFromReplication;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignTagsReplicated OnCampaignTagsRemovedFromReplication;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignProgressTagAdded OnCampaignProgressTagAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignProgressTagAdded OnCampaignProgressTagRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedCampaign, meta=(AllowPrivateAccess=true))
    FGameplayTag SelectedCampaign;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnSelectectCampaignSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Corporation, meta=(AllowPrivateAccess=true))
    ECorporation CampaignCorporation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StoriesDatatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DocumentsDatatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharactersDatatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BestiaryDatatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CampaignWeaponTemplates, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedWeaponTemplateGroup> CampaignWeaponTemplates;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignWeaponTemplatesUpdated OnCampaignWeaponTemplatesUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SavedVehicles, meta=(AllowPrivateAccess=true))
    FSolsticeSavedVehicles SavedVehicles;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignVehicleTemplatesUpdated OnCampaignVehicleTemplatesUpdated;
    
    UCampaignStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateNewSetupSlidersStateFromResearch(UTechObject* InResearch);
    
    UFUNCTION(BlueprintCallable)
    void SetResearchEntryViewed(FGameplayTag InTechTag);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionSlidersViewed(bool HordeArrival, bool AirSupport, bool Artillery);
    
    UFUNCTION(BlueprintCallable)
    void SetEngineeringEntryViewed(FGameplayTag InTechTag);
    
    UFUNCTION(BlueprintCallable)
    void SetDocumentEntryViewed(FName InDocumentName);
    
    UFUNCTION(BlueprintCallable)
    void SetBestiaryEntryViewed(FName InBeastName);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpgradeTags(const FGameplayTagContainer& OldTags);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TechTags(const FGameplayTagContainer& OldTags);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedCampaign();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SavedVehicles();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MiscellaneousTags(const FGameplayTagContainer& OldTags);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Corporation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CampaignWeaponTemplates();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CampaignTags(const FGameplayTagContainer& OldTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasViewedResearch(FGameplayTag InTechTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasViewedEngineeringItem(FGameplayTag InTechTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasViewedDocumentsEntry(FName DocumentName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasViewedBestiaryEntry(FName InBeastName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProgressTag(FGameplayTag InTag, bool bExact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyProgressTags(const FGameplayTagContainer& InTagContainer, bool bExact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllProgressTags(const FGameplayTagContainer& InTagContainer, bool bExact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetNumberOfNewStoryEntries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetNumberOfNewResearchEntries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetNumberOfNewEntries(bool Story, bool Documents, bool Characters, bool Bestiary, bool Research, bool Engineering) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetNumberOfNewEngineeringEntries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetNumberOfNewDocumentEntries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetNumberOfNewCharacterEntries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    int32 GetNumberOfNewBestiaryEntries() const;
    

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

