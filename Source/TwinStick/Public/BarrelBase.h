#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "Damage.h"
#include "EDamageGroup.h"
#include "HoldableObjectBase.h"
#include "Templates/SubclassOf.h"
#include "BarrelBase.generated.h"

class AActor;
class UBarrelAsItem;
class UBoxComponent;
class UCapsuleComponent;
class UDissolveComponent;
class UFMODAudioComponent;
class UFMODEvent;
class UFOWHideComponent;
class UNavArea;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class URotatingMovementComponent;
class USplineComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ABarrelBase : public AHoldableObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageGroup BarrelDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BarrelArmorShred;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetFade, meta=(AllowPrivateAccess=true))
    bool bDissolving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBarrelAsItem> Item;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PunctureEffectParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* PunctureEffectSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsToDetonateWhenOnFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercentToSetOnFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumFires;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DetonationEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DetonationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeedMultiplyer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrownTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* RootCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFOWHideComponent* FOWHideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URotatingMovementComponent* RotationMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDissolveComponent* DissolveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> HeldAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> DroppedToGroundAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundPositionTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* ProjectilePathSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> PunctureParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* PunctureFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceRotationSpeedMultiplyer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ThrownByActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPickedUp, meta=(AllowPrivateAccess=true))
    bool bPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BarrelPlacedPosition, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 BarrelStablePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator BarrelStableRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsThrown;
    
public:
    ABarrelBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TargetReached();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void SpawnParticleAtHit(FDamage DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetForcePlacedToPositionReplicated(FVector InPosition, FRotator InRotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetDroppedIntoOblivion(AActor* InThrowingActor, bool bInExplode);
    
    UFUNCTION(BlueprintCallable)
    void SetDissolving();
    
    UFUNCTION(BlueprintCallable)
    void ServerDorpToFloor(float InForwardSpeed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SetFade();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPickedUp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BarrelPlacedPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetonated();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDropToFloor(FVector DropedToFloorStartLocation, FVector DropedToFloorVelocity);
    
    UFUNCTION(BlueprintCallable)
    void MeshOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void LaunchOnPath(const TArray<FVector_NetQuantize>& InPath, FVector_NetQuantize10 InTargetLocation, float InHorizontalVelocity, AActor* InThrowingActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LandedToFloor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDissolving();
    
    UFUNCTION(BlueprintCallable)
    UBoxComponent* GetAimOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndDisplayNiagara();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DestroyMe();
    
    UFUNCTION(BlueprintCallable)
    void CapsuleOverlap();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginDisplayNiagara();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BarrelBounced(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
};

