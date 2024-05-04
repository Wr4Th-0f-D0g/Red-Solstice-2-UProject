#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AbilityBuildableActorBase.h"
#include "BulletEffects.h"
#include "EBuffChangedOperation.h"
#include "EWeaponPenetrationMode.h"
#include "Templates/SubclassOf.h"
#include "TurretAmmoChangedDelegate.h"
#include "TurretClip.h"
#include "TurretActorBase.generated.h"

class AActor;
class APawn;
class ATurretActorBase;
class UArrowComponent;
class UFMODAudioComponent;
class UFMODEvent;
class UHitObjectBase;
class UOverwatchComponent;
class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USolsticeBuffBase;
class UStaticMeshComponent;
class UWeaponSkill;

UCLASS(Blueprintable)
class TWINSTICK_API ATurretActorBase : public AAbilityBuildableActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugLogTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugLogHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawTraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* GunDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TargetingOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverwatchComponent* OverwatchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MuzzleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ShellEjectionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FireAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FireEffectAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* RotationAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* HitAC;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ShellEjectionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FireEffectSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* RotationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponSkill* WeaponSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HorizontalMoveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* VerticalMoveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ShotIgnoredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Firing, meta=(AllowPrivateAccess=true))
    bool bFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bTurretEnabled, meta=(AllowPrivateAccess=true))
    bool bTurretEnabled;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OverwatchTarget, meta=(AllowPrivateAccess=true))
    AActor* OverwatchTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponPenetrationMode PenetrationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBulletEffects BulletEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AdvancedAmmoClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHitObjectBase> AdvancedAmmoClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHitObjectBase* AdvancedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHitObjectBase*> PooledAmmoObjects;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTurretAmmoChanged OnTurretAmmoChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClipsSpentPerReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TurretClip, meta=(AllowPrivateAccess=true))
    FTurretClip TurretClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresAmmoToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetFeet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIdleRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageNeutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationAllignmentAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bReceivesDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWeaponSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomFiringLogic;
    
    ATurretActorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetReceivesDamage(bool bInReceivesDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetPriorityTarget(AActor* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetNavAffectEnabled(bool InAffectsNavigation);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalVerticalMoveComponents(USceneComponent* InHorizontalMoveComp, USceneComponent* InVerticalMoveComp);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAdvancedAmmoClass(TSubclassOf<UHitObjectBase> NewClass, bool SkipEqualsCheck);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShotIgnoredActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoredCollisionActor(AActor* InActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Reload(int32 InClips, int32& OutOverflow);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayVFX();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayTurretBulletFX(const FHitResult& HitResult, const FVector& Origin, const FVector& Direction, const float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverwatchTargetSelected(AActor* OldOverwatchTarget, AActor* NewOverwatchTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenedFire();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_TurretClip();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OverwatchTarget(AActor* OldValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Firing(bool OldValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_bTurretEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AdvancedAmmoClass(TSubclassOf<UHitObjectBase> OldClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NoResourcesToInteract(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_TurretStateChanged(bool bEnabled, ATurretActorBase* Turret);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeWidget(bool RequiresAmmoToFire);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOverwatchTargetSelected(AActor* InOverwatchTarget, AActor* OldTarget);
    
    UFUNCTION(BlueprintCallable)
    void HandleBuffsChanged(USolsticeBuffBase* ChangedBuff, EBuffChangedOperation ChangedOperation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargetingOrigin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargetingDirection();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetAttackLocation(FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOverwatchTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxClips() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClipsForFullReload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoPerClip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmmoPercent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FiredShot();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableTurret();
    
    UFUNCTION(BlueprintCallable)
    void DisableTurret();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableTick();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CustomFire();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearPriorityTarget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CeaseVFX();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CeasedFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanRotateToTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanFire() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void AddShotIgnoredActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoredCollisionActor(AActor* InActor);
    
};

