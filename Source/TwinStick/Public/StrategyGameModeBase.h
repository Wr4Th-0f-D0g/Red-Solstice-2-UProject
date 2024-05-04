#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "NumberOfPlayersChangedDelegate.h"
#include "SolsticeGameMode.h"
#include "SolsticeOnlineResultInformation.h"
#include "StrategyMissionSettings.h"
#include "Templates/SubclassOf.h"
#include "StrategyGameModeBase.generated.h"

class AActor;
class AArmoryBotController;
class AHeroCharacterBase;
class AMissionSetupActor;
class AStrategyControllerBase;
class AStrategyMission;
class UBotStatus;

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API AStrategyGameModeBase : public ASolsticeGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCompleteMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCompleteMissionsPIE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHeroCharacterBase> PreviewHeroClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AArmoryBotController> ArmoryBotControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHeroCharacterBase*> Bots;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNumberOfPlayersChanged OnNumberOfPlayersChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMissionSetupActor* LastSkirmishMSA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BeaconClassTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> BeaconSoftClassTest;
    
    AStrategyGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopDeploymentCountDown();
    
    UFUNCTION(BlueprintCallable)
    void StartDeploymentCountdown();
    
    UFUNCTION(BlueprintCallable)
    void SpawnPreviewHero(AStrategyControllerBase* PC);
    
    UFUNCTION(BlueprintCallable)
    AHeroCharacterBase* SpawnPreviewBot(UBotStatus* BotStatus);
    
    UFUNCTION(BlueprintCallable)
    AMissionSetupActor* SpawnMissionSetupActorCampaign(AStrategyMission* InMission);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveMissionSetupActor(AMissionSetupActor* InMissionSetupActor);
    
    UFUNCTION(BlueprintCallable)
    AMissionSetupActor* LoadMissionSetupActor(const FStrategyMissionSettings& InMissionSettings);
    
    UFUNCTION(BlueprintCallable)
    void LaunchGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHotJoiningCoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHotJoining() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleDeploymentCountdownCompleted();
    
    UFUNCTION(BlueprintCallable)
    void HandleCreateSessionCompleted(const FSolsticeOnlineResultInformation& Info);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignTagAdded(const FGameplayTag& AddedTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumMarines();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimerHandle GetDeploymentTimeHandle() const;
    
    UFUNCTION(BlueprintCallable)
    void DespawnPreviewBot(UBotStatus* InBotStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddBot() const;
    
};

