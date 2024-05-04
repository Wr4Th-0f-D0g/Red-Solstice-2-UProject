#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "DropshipStatusChangedDelegate.h"
#include "DropshipTargetChangedDelegate.h"
#include "EAttribute.h"
#include "EDropshipStatus.h"
#include "EStrategyInteractionState.h"
#include "MarsTime.h"
#include "SolsticeSaveInterface.h"
#include "StrategyMapActorReplicationHelper.h"
#include "StrategyMissionTimer.h"
#include "Templates/SubclassOf.h"
#include "StrategyDropship.generated.h"

class AExecutorHQ;
class AMarsSplineActor;
class ARegion;
class AStrategyMapActor;
class AStrategyMission;
class UCameraComponent;
class UFMODAudioComponent;
class UFMODEvent;
class UPaperSpriteComponent;
class USceneComponent;
class USpringArmComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AStrategyDropship : public AActor, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EDropshipStatus DropshipStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropshipStatusChanged OnDropshipStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Dropship_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Dropship_MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPaperSpriteComponent* Dropship_SpriteComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* Dropship_SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Dropship_Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* Dropship_Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DropshipTravelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DropshipScanSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DropshipBuildSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_HQ, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AExecutorHQ> HQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMarsSplineActor> DropshipSplineActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMarsSplineActor> PreviewSplineActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMarsSplineActor* DropshipSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMarsSplineActor* PreviewSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDropshipInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDropshipAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropshipSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyMapActor> LastTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyMapActor> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float DistanceTravelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString TargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString LastTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector StartDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector FlightDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector LandingStartDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector LandingDirection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDropshipTargetChanged OnDropshipTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NetworkMovementHelper, meta=(AllowPrivateAccess=true))
    FStrategyMapActorReplicationHelper NetworkMovementHelper;
    
    AStrategyDropship(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateDropshipSound();
    
    UFUNCTION(BlueprintCallable)
    void TravelToMission(AStrategyMission* TargetMission);
    
    UFUNCTION(BlueprintCallable)
    void ShowPreviewPath(AStrategyMapActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetDropshipStatus(EDropshipStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToHQ();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NetworkMovementHelper();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HQ();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTravelling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScanning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRange(AStrategyMapActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtHQ() const;
    
    UFUNCTION(BlueprintCallable)
    void HidePreviewPath();
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionStatusChanged(const FStrategyMissionTimer& Status);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionChanged(AStrategyMapActor* MapActor, EStrategyInteractionState InteractionState);
    
    UFUNCTION(BlueprintCallable)
    void HandleDropshipSpeedChanged(EAttribute InAttribute, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTravelTimeSeconds(FVector ToLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMarsTime GetRemainingTravelTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMarsTime GetPreviewPathTravelTime(AStrategyMapActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPreviewPathLength(AStrategyMapActor* TargetActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDropshipSpeedInUnitsPerSecond() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDropshipSpeedInUnitsPerHour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStrategyMapActor* FindNearestOutpost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DropshipTakingOff(float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DropshipLanding(float Alpha);
    

    // Fix for true pure virtual functions not being implemented
};

