#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BulletEffects.h"
#include "CharacterWeaponData.h"
#include "Damage.h"
#include "EAmmoType.h"
#include "EAttribute.h"
#include "EDamageGroup.h"
#include "EFiringMode.h"
#include "EFiringState.h"
#include "ELocomotionMode.h"
#include "ERotationMode.h"
#include "EWeaponGameplayType.h"
#include "EWeaponPenetrationMode.h"
#include "FiringInput.h"
#include "FiringMode.h"
#include "HitscanPayload.h"
#include "HitscanPayloadLocal.h"
#include "PrimaryWeaponClip.h"
#include "ReloadFinishedDelegate.h"
#include "SavedReloadState.h"
#include "SecondaryWeaponClip.h"
#include "SolsticeAttributeModifier.h"
#include "TargetHitDelegate.h"
#include "Templates/SubclassOf.h"
#include "WeaponAttachementData.h"
#include "WeaponClip.h"
#include "WeaponClipDefaults.h"
#include "WeaponSounds.h"
#include "WeaponStateChangedDelegate.h"
#include "WeaponStateData.h"
#include "SolsticeWeaponBase.generated.h"

class ASolsticeCharacterBase;
class IDamagable;
class UDamagable;
class UArrowComponent;
class UDataTable;
class UFMODAudioComponent;
class UFMODEvent;
class UFireComponentBase;
class UHitObjectBase;
class UParticleSystem;
class UParticleSystemComponent;
class USkeletalMeshComponent;
class USolsticeBuffBase;
class USolsticeWeaponComponent;
class UStaticMeshComponent;
class UTexture2D;
class UWeaponAttributeComponent;
class UWeaponRootComponent;
class UWeaponSpecializationBase;
class UWeaponStateBase;
class UWeaponTargetingBase;

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticeWeaponBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponRootComponent* WeaponRoot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanHitTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OwningCharacter, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASolsticeCharacterBase> OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USolsticeWeaponComponent> OwningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WeaponTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FireComponentDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeaponName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELocomotionMode LocomotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponGameplayType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponInventorySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MuzzleDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* AimDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* BulletShellDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponAttributeComponent* AttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UWeaponSpecializationBase*> WeaponSpecializations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FCharacterWeaponData WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> ModMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UStaticMeshComponent*> DefaultMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumMuzzleYawCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumMuzzlePitchCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFiringState, FWeaponStateData> StateClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAttachementData AttachmentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachOtherWeaponToHandWhileActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_PrimaryFireComponent, meta=(AllowPrivateAccess=true))
    UFireComponentBase* PrimaryFireComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_SecondaryFireComponent, meta=(AllowPrivateAccess=true))
    UFireComponentBase* SecondaryFireComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_ActiveFireComponent, meta=(AllowPrivateAccess=true))
    UFireComponentBase* ActiveFireComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsActiveWeapon, meta=(AllowPrivateAccess=true))
    bool bIsActiveWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAttributeModifier> AimingAttributeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AimingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* AimingBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableBulletFXTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NoAmmoUseTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrimaryClipDefaults, meta=(AllowPrivateAccess=true))
    FWeaponClipDefaults PrimaryClipDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrimaryWeaponClip, meta=(AllowPrivateAccess=true))
    FPrimaryWeaponClip PrimaryClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryClipDefaults, meta=(AllowPrivateAccess=true))
    FWeaponClipDefaults SpecializedClipDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpecializedWeaponClip, meta=(AllowPrivateAccess=true))
    FSecondaryWeaponClip SpecializedClip;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReloadFinished OnReloadFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedReloadState SavedReloadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFiringMode FiringMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFiringState DesiredState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFiringInput FiringPackage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFiring;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponStateChanged OnWeaponStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetHit OnTargetHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFiringState ActiveFiringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentWeaponSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HitObjectClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHitObjectBase> HitObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHitObjectBase* HitObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHitObjectBase*> PooledHitObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponTargetingBase* AimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWeaponTargetingBase*> AimComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MuzzleFlashComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BulletEjectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ChargeParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BulletShellFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MagazineEjectFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBulletEffects BulletEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* StartFireAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FireAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FireEffectAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* ReloadAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* OutOfAmmoAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AimAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* HitAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* ChargeAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponSounds WeaponSounds;
    
    ASolsticeWeaponBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateWeaponPrimitiveData();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFireComponent();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SpecializedRequiresFriendlyCheck() const;
    
private:
    UFUNCTION(BlueprintCallable)
    bool ShouldFireOnTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStencilValue(int32 NewValue, bool bRenderCustomDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetIsActiveWeapon(bool bNewActive, bool bForceSetter);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveFireComponent(UFireComponentBase* NewActiveFireComponent, bool bFromReplicationCallback);
    
    UFUNCTION(Reliable, Server)
    void ServerResolveDamage(const TArray<FHitscanPayload>& HitPayloads, const FVector_NetQuantize& Origin, uint16 PredictionKey);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReload();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerFinishReload();
    
    UFUNCTION(BlueprintCallable)
    void SaveReloadState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReloadStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpecializedWeaponClip(FSecondaryWeaponClip OldClip);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondaryFireComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondaryClipDefaults();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryWeaponClip(FPrimaryWeaponClip OldClip);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryFireComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryClipDefaults();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OwningCharacter();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActiveWeapon();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HitObjectClass(TSubclassOf<UHitObjectBase> OldClass);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveFireComponent(UFireComponentBase* OldFireComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwningCharacterSet();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopReload();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReload();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FDamage ModifySuppression(const FDamage& InDamage, const TScriptInterface<IDamagable>& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FDamage ModifyHealthDamage(const FDamage& InDamage, const TScriptInterface<IDamagable>& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FDamage ModifyArmorDamage(const FDamage& InDamage, const TScriptInterface<IDamagable>& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingSpecializedMod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingLoopedFireSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetInRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetInCone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecializedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShooting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSecondaryWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSecondaryFireComponentActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimaryWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimaryFireComponentActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCombatState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnergyToFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAmmunitionToFire() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponClipEmptied(EAmmoType InAmmoType);
    
    UFUNCTION(BlueprintCallable)
    void HandleShotFired(UFireComponentBase* FiringComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleProjectileFired(TArray<FHitscanPayloadLocal>& InOutHitPayload);
    
    UFUNCTION()
    void HandleMontageAnimNotify(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
    UFUNCTION(BlueprintCallable)
    void HandleFiringPackageChanged(FFiringInput NewFiringPackage);
    
    UFUNCTION(BlueprintCallable)
    void HandleFiringModeChanged(FFiringMode NewFiringMode);
    
    UFUNCTION(BlueprintCallable)
    void HandleFireEnabledChanged(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleAttackTargetChanged(AActor* OldTarget, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorHit(const FHitscanPayload& HitPayload, bool bLastHit, bool bFromServerRPC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ECollisionChannel> GetWeaponTraceChannel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetWeaponStartFireSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetWeaponReloadSoundLooped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetWeaponReloadSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetWeaponReloadCompleteSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponPenetrationMode GetWeaponPenetrationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetWeaponOutOfAmmoSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetWeaponFireSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetWeaponFireEffectSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetWeaponEndFireSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDamageGroup GetWeaponDamageType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetWeaponAimSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIAttributeValue(EAttribute Attribute, float& Base, bool bForPrimaryFireComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeaponStateBase* GetStateObject(EFiringState State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpreadRegeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpreadPerShot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShotsPerStandardClip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShotsPerSpecializedClip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSecondaryAmmo(int32& Current, int32& Max) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERotationMode GetRotationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProjectileSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPrimaryAmmo(int32& Current, int32& Max) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOwningCharacter(UPARAM(Ref) ASolsticeCharacterBase*& CharacterOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverwatchWindupSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfProjectiles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UArrowComponent* GetMuzzleDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxStandardClips() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSpecializedClips() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaximumVerticalWeaponSpread() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaximumHorizontalWeaponSpread() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetManualWindupSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInitialSpread() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFriendlyFireMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetFiringThresholdHalfAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFiringState GetFiringState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFiringMode GetFiringMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFinalSpread() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentWeaponSpread() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAmmo(int32& Current, int32& Max) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCriticalMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCriticalChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAttributeValue(EAttribute Attribute, float& Current) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttributeChecked(EAttribute Attribute, bool bWarnIfZero) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoPerShot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimingThresholdHalfAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeaponClip GetActiveWeaponClip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeaponStateBase* GetActiveStateObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetActiveAmmoIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FireButtonPressed() const;
    
    UFUNCTION(Client, Reliable)
    void ClientConfirmShot(uint16 PredictionKey, float CurrentEnergy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanUseAdvancedAmmo(TSubclassOf<UHitObjectBase> AmmoType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanToggleFireComponent();
    
    UFUNCTION(BlueprintCallable)
    void AttachWeapon(bool bIsActive, bool bKeepInHandIfInactive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveWeaponChanged(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveFireComponentChanged(bool bSpecialized);
    
};

