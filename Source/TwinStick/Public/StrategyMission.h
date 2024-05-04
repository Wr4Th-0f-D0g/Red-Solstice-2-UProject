#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "EStrategyInteractionState.h"
#include "EStrategyMissionStatus.h"
#include "EStrategyMissionToken.h"
#include "MarsTime.h"
#include "MissionCompletedData.h"
#include "MissionEffect.h"
#include "MissionEffectContainer.h"
#include "StrategyMapActor.h"
#include "StrategyMissionData.h"
#include "StrategyMissionDescription.h"
#include "StrategyMissionSettings.h"
#include "StrategyMissionTimer.h"
#include "Templates/SubclassOf.h"
#include "StrategyMission.generated.h"

class AMissionSetupActor;
class ARegion;
class UCallToActionBase;
class UDataTable;
class UMissionDeploymentObject;
class UPaperSpriteComponent;
class UStaticMeshComponent;
class UTexture2D;

UCLASS(Blueprintable)
class TWINSTICK_API AStrategyMission : public AStrategyMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FStrategyMissionSettings MissionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MissionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPaperSpriteComponent* MIssionSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MissionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* campaignmissionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionDeploymentObject> DeploymentObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionDeploymentObject* DeploymentObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMissionSetupActor> MissionSetupActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionSetupActor, meta=(AllowPrivateAccess=true))
    AMissionSetupActor* MissionSetupActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnMissionSetupActorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMissionInfoWhenClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCallToActionBase> MissionCallToActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SpawnGenerationSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CampaignIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CombatIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SupplyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARegion> Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString RegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bMissionDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EStrategyMissionToken MissionToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedMissionTag, meta=(AllowPrivateAccess=true))
    FGameplayTag ReplicatedMissionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FStrategyMissionData MissionData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnMissionDataUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MissionEffects, meta=(AllowPrivateAccess=true))
    FMissionEffectContainer SuccessEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MissionEffects, meta=(AllowPrivateAccess=true))
    FMissionEffectContainer FailureEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMissionExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MissionStatus, meta=(AllowPrivateAccess=true))
    FStrategyMissionTimer MissionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMissionStatusReplicatedBefore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PostMissionData, meta=(AllowPrivateAccess=true))
    FMissionCompletedData PostMissionData;
    
    AStrategyMission(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TestPostMissionData(bool bVictory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldShowCallToAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPlayGlitchEffectBeforeCTA();
    
    UFUNCTION(BlueprintCallable)
    void SetMissionCompleted(AMissionSetupActor* InMSA);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostFirstMissionStatusReplication();
    
    UFUNCTION(BlueprintCallable)
    void OverrideLifetime(int32 Hours, bool bCanExpire);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMissionTag();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PostMissionData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionSetupActor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MissionDetected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MissionCanExpire() const;
    
    UFUNCTION(BlueprintCallable)
    void LaunchMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScanMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCombatMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsCampaignMission() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasSpecialNameRequirementFromFailureEffects(FGameplayTagContainer InContainer, FGameplayTag& FoundTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionExpired();
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionCompleted();
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignDayChanged(const FMarsTime& CampaignTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMissionEffect> GetScanMissionEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRemainingTimeDaysHours(int32& Days, int32& Hours) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMarsTime GetRemainingMissionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetMissionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStrategyMissionStatus GetMissionStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetMissionIcon() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetMissionGrantedItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStrategyMissionDescription GetMissionDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UDataTable* GetMissionDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStrategyMissionData GetMissionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStrategyInteractionState GetInteractionStatus() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMissionEffect> GetCondensedMissionRewardsForUI();
    
    UFUNCTION(BlueprintCallable)
    void FinalizeMission();
    
    UFUNCTION(BlueprintCallable)
    void DetectMission();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanEverExpire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintPostFinalizeMission();
    
};

