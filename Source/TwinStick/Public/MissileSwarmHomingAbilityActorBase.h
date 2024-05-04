#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityActorBase.h"
#include "LaunchedMissileStruct.h"
#include "MissileDetonatedDelegateDelegate.h"
#include "MissileLaunchedDelegateDelegate.h"
#include "MissileSalvoCompleteDelegate.h"
#include "MissileSalvoStartedDelegate.h"
#include "MissileTargetInfo.h"
#include "MissilesPerTargetStruct.h"
#include "MissileSwarmHomingAbilityActorBase.generated.h"

class AActor;
class UCurveFloat;
class UFMODEvent;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AMissileSwarmHomingAbilityActorBase : public AAbilityActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferedPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, float> FlightPathTestPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MissileParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FizzleEffectParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MissileFlightSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MissileLaunchSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissileMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissileHomingMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MissileHomingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissileLaunchPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissileLaunchPitchLowered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissileLaunchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissileScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveTargetOnMissileHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissileSelfDestructTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnoreOnTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnoreForDetonation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTargetsDelay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissileLaunchedDelegate MissileLaunchedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissileDetonatedDelegate MissileDetonatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissileSalvoComplete MissileSalvoComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissileSalvoStarted MissileSalvoStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissileTargetInfo> TargetsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* DesignatedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLaunchInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bLaunchInProgressOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissilesPerTargetStruct> MissileNumbersPerTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLaunchedMissileStruct> MissilesSeekingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLaunchedMissileStruct> InactiveMissilesPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActors;
    
public:
    AMissileSwarmHomingAbilityActorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLaunchedMissiles(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHomedTargets();
    
    UFUNCTION(BlueprintCallable)
    void StartLaunchingMissilesLocal();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartLaunchingMissiles();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLaunchInProgress(bool bInProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetDesignatedTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartFiringMissiles(const TArray<AActor*>& InTargets);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerClearTargetArray();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddTarget(AActor* InTarget);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveTarget(AActor* InTarget);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_StartLaunchingMissiles(const TArray<AActor*>& InTargets);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRemoveTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastClearTargetArray();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAddTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void LaunchMissile();
    
    UFUNCTION(BlueprintCallable)
    void LaunchInProgressFailsafe();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOwnerValidForFire();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLaunchInProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsActorStateAndDistanceValidForTarget(const AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorPathValidForTarget(const AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void ForceFireMissile(FTransform InTransform, AActor* InPawn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FindLaunchTransform(FTransform& OutTransform);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* FindDesignatedActor();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ConstructSpline(AActor* InPawnToAim, UParticleSystemComponent* InMissileParticle);
    
    UFUNCTION(BlueprintCallable)
    int32 ConstructMissileWithPathToTarget(AActor* InPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearTargetArray();
    
    UFUNCTION(BlueprintCallable)
    bool CanStartFiring();
    
    UFUNCTION(BlueprintCallable)
    void AddTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoredTarget(AActor* InIgnoredTarget);
    
};

