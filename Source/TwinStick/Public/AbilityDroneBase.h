#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityActorBase.h"
#include "EAbilityDroneMovementState.h"
#include "Templates/SubclassOf.h"
#include "AbilityDroneBase.generated.h"

class AActor;
class AHeroCharacterBase;
class UCurveFloat;
class UMaterialInstanceDynamic;
class UNavigationQueryFilter;
class USplineComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AAbilityDroneBase : public AAbilityActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FollowingHero, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* FollowingHero;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LandActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DestinationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VerticalMovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HorizontalMovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HorizontalMovementRandFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HorizontalMovementRandDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableArriveDistToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeriodicPathUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowTargetActorDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackTargetPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DroneSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DroneAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DroneRotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorTraceUpdateFreq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DroneHoverHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DroneVerticalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalWobbleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationPathUpdateTriggerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AproachSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFloorHeightWhenAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetVelocityConsideredMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArriveLocationVectorInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorFollowingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationMovementNegativeRand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationMovementPositiveRand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateArriveVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavFilterUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetFloorForActorSeek;
    
public:
    AAbilityDroneBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void VerifyFollowTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFade(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TrackTargetLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    void TakeoffFromTarget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TakenOffFromTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
    UFUNCTION(BlueprintCallable)
    void SetFollowingHero(AHeroCharacterBase* NewHero);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetFadeParameter(float InValue) const;
    
    UFUNCTION(BlueprintCallable)
    void RequestPathToTarget(const AActor* InCurrentlyFollowingActor);
    
    UFUNCTION(BlueprintCallable)
    void RequestFloorTraceUpdate();
    
    UFUNCTION(BlueprintCallable)
    void PathFindTimeout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetWentOutOfRangeBp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetReachedBp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetLocationUnreachableBp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetActorLostBp();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_FollowingHero();
    
    UFUNCTION(BlueprintCallable)
    void MoveToTargetActor(AActor* InTarget, bool bInCanFollowDead);
    
    UFUNCTION(BlueprintCallable)
    void MoveToLocation(FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void LandToTarget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LandedAtTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitLandedAtTarget(AActor* InDestinationActor);
    
    UFUNCTION(BlueprintCallable)
    void InitFollowingActor(AActor* InDestinationActor, bool bInCanFollowDead);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAbilityDroneMovementState GetMovementState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFadeParameter() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable)
    void FadeIn();
    
    UFUNCTION(BlueprintCallable)
    void CreateDynamicMaterial();
    
    UFUNCTION(BlueprintCallable)
    void CheckDestinationTargetValidity();
    
};

