#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Types/SlateEnums.h"
#include "EDifficulty.h"
#include "MSAChallengeRequirements.h"
#include "StrategyMenuBase.h"
#include "StrategyMissionData.h"
#include "MissionSetupWidgetBase.generated.h"

class AMissionSetupActor;
class ARegion;
class AStrategyMission;
class UAuthaerComboBoxString;
class UDataTable;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UMissionSetupWidgetBase : public UStrategyMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAuthaerComboBoxString* MapSelectionComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAuthaerComboBoxString* DifficultyComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAuthaerComboBoxString* WaveGenerationComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAuthaerComboBoxString* MissionSelectionComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MissionSetupText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* XPModifierText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BorderMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyMissionData MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMissionSetupActor* MissionSetupActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AllMissionDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AccessibilityOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FGameplayTagContainer> WaveGenerationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPopulatingMissions;
    
    UMissionSetupWidgetBase();

    UFUNCTION(BlueprintCallable)
    void UpdateWaveDataAndGraph();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMissionXPText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMissionSliders();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMissionNameText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMissionGraph();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMissionDataAndMapSelection();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDifficultySetting(const EDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDeploymentText(int32 DeploymentCost);
    
    UFUNCTION(BlueprintCallable)
    void UpdateComboBoxValues();
    
    UFUNCTION(BlueprintCallable)
    void UpdateComboBoxEnabledState();
    
    UFUNCTION(BlueprintCallable)
    void TrySetupForChallenge(FMSAChallengeRequirements ChallengeRequirements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldLockControlsForGenerationType() const;
    
    UFUNCTION(BlueprintCallable)
    void SetupMissionData(const FName& MissionLookupName);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionSetupActorForServer(AMissionSetupActor* NewMissionSetupActor, bool SkipInitialization);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionSetupActorForClient(AMissionSetupActor* NewMissionSetupActor);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionSetupActor(AMissionSetupActor* MissionSetup);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHostButtonVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficultyDropdown(EDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void RerollWaves();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostMissionSetupActorSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostMissionDataSet();
    
    UFUNCTION(BlueprintCallable)
    void PostGenerationTypeChanged();
    
    UFUNCTION(BlueprintCallable)
    void PopulateWaveGenerationCombobox();
    
    UFUNCTION(BlueprintCallable)
    void PopulateMissionsComboBox();
    
    UFUNCTION(BlueprintCallable)
    void PopulateMapSelectionComboBox();
    
    UFUNCTION(BlueprintCallable)
    void PopulateDifficultiesComboBox();
    
    UFUNCTION(BlueprintCallable)
    void OnWaveGenerationSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void OnMapSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void OnDifficultySelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MissionSetupActorSet(AMissionSetupActor* MissionSetup);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMissionSetupWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleWaveGenerationUpdated();
    
    UFUNCTION(BlueprintCallable)
    void HandleSkirmishGenerationChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleNewPlayerRankReceived();
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionSetupActorSet(AMissionSetupActor* MissionSetup);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionDataChanged(const FStrategyMissionData& NewData);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionChanged(AStrategyMission* NewMission);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameDifficultyChanged(EDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStrategyMissionData GetMissionDataTableRow(FName InRowName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStrategyMission* GetMission() const;
    
    UFUNCTION(BlueprintCallable)
    EDifficulty GetGameDifficulty();
    
};

