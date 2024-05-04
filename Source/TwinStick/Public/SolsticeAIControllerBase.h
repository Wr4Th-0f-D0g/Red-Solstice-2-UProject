#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "AITypes.h"
#include "Perception/AIPerceptionTypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Damage.h"
#include "EActivationStatus.h"
#include "EPerceptionSense.h"
#include "ETRSNavRecoveryAbility.h"
#include "OnGoalActorChangedDelegate.h"
#include "PreviewAbilityActivationRequestedDelegateDelegate.h"
#include "TRSNavRecoverySettings.h"
#include "Templates/SubclassOf.h"
#include "SolsticeAIControllerBase.generated.h"

class AActor;
class AMoveTargetActorBase;
class ASolsticeCharacterBase;
class UAbilityBase;
class UActorComponent;
class UBehaviorTree;

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticeAIControllerBase : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTree* CurrentRunningBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIVisionAngle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoalActorChanged OnGoalActorChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* MyPawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GoalActorChangeDenyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMoveTargetActorBase* MoveTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMoveTargetActorBase> MoveToActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> GoalActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoTokenCheckBeforeChoosingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId MyTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilityBase> PreviewAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilityBase> ActiveAbility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreviewAbilityActivationRequestedDelegate OnPreviewAbilityActivationRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseNavRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETRSNavRecoveryAbility NavRecoveryAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTRSNavRecoverySettings NavRecoverySettingsOffMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTRSNavRecoverySettings NavRecoverySettingsOnIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RecoveryDisabledTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavRecoveryTestExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPathRequestSuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPathRequestActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailedNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailedNavigationStartedOnNavMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavFailureCurrentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavFailureFirstFailTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavRecoveryStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavRecoveryStartActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavRecoveryStartPathingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavRecoveryFailedGoalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavRecoveryCounter;
    
    ASolsticeAIControllerBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickNavMeshRecovery(float DeltaTIme, FVector Location, FVector RecoveryDestination);
    
    UFUNCTION(BlueprintCallable)
    void TargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SuggestProjectileVelocity_MediumArc(FVector& OutLaunchVelocity, FVector StartPos, FVector EndPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SuggestProjectileVelocity_CustomArc(FVector& OutLaunchVelocity, FVector StartPos, FVector EndPos, float ArcParam);
    
    UFUNCTION(BlueprintCallable)
    void SpawnMoveTargetActor();
    
    UFUNCTION(BlueprintCallable)
    void SetVaultingFocalPont(FVector FP);
    
    UFUNCTION(BlueprintCallable)
    void SetNavSearchRadiiCurrent(float NewInnerRadius, float NewOuterRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetNavRecoveryDestination(FVector Destination);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalActor(AActor* NewGoalActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStimulusUpdate(EPerceptionSense Sense);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNotifyGoalActorDied(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyStartNavRecovery(FVector FailedGoalLocation, bool bCurrentlyOnNavMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyRequestingPath();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyPathRequestSuccess(FVector GoalLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool NotifyPathRequestFailed(FVector GoalLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyNavMeshRecoveryFailed(FVector Location, float TimeSinceStartRecovery, bool bWasOnNavMeshAtStart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyNavMeshRecovered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyFailedToFindRecoveryDestination(float DeltaTIme, FVector Location, float TimeSinceStartRecovery);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_GoalActorKilled(AActor* KilledActor, const FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFailingNavigationFromValidNavMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFailingNavigation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFacingTarget(FVector TargetLoc, float AngleToleranceDeg) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidatePathWhilstLinking();
    
    UFUNCTION(BlueprintCallable)
    void HandlePreviewAbilityActivationChanged(UAbilityBase* Ability, EActivationStatus Status, const FGameplayTag& AbilityTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
    UFUNCTION(BlueprintCallable)
    void HandleActiveAbilityActivationChanged(UAbilityBase* Ability, EActivationStatus Status, const FGameplayTag& AbilityTag);
    
    UFUNCTION(BlueprintCallable)
    bool HandleAbilityRequestedMove(UActorComponent* InstigatorComponent, FVector TargetLocation, float AcceptanceRadius);
    
    UFUNCTION(BlueprintCallable)
    void GrowNavSearchRadiiCurrent(float InnerGrowth, float OuterGrowth);
    
    UFUNCTION(BlueprintCallable)
    void GoalActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetTargetLocationForManual() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetTargetedLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNavSearchRadiiDefault(float& DefaultInnerRadius, float& DefaultOuterRadius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNavSearchRadiiCurrent(float& CurrentInnerRadius, float& CurrentOuterRadius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNavRecoveryDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetGoalActor() const;
    
    UFUNCTION(BlueprintCallable)
    bool DoJumpLaunchWithPrecomputedVelocity(const FTransform& Destination, FVector LaunchVelocity, float Arc, const AActor* JumpFromActor, float& OutAscendingTime, float& OutDescendingTime);
    
    UFUNCTION(BlueprintCallable)
    bool DoJumpLaunch(const FTransform& Destination, float Arc, const AActor* JumpFromActor, float& OutAscendingTime, float& OutDescendingTime);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAbortActiveAbility();
    
    UFUNCTION(BlueprintCallable)
    void ClearVaultingFocalPoint();
    
    UFUNCTION(BlueprintCallable)
    void ClearGoalActor();
    
    UFUNCTION(BlueprintCallable)
    void CheckGoalActorVisible(bool bImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSeeGoalActor() const;
    
};

