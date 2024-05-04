#pragma once
#include "CoreMinimal.h"
#include "AttributeLinkedComponent.h"
#include "BulletEffects.h"
#include "EAmmoType.h"
#include "EAttribute.h"
#include "EDamageGroup.h"
#include "EFiringMode.h"
#include "EFiringState.h"
#include "EWeaponPenetrationMode.h"
#include "FiringStateChangedDelegate.h"
#include "ProjectileFiredDelegate.h"
#include "ShotFiredDelegate.h"
#include "SolsticeAttributeData.h"
#include "Templates/SubclassOf.h"
#include "WeaponSounds.h"
#include "WeaponStateData.h"
#include "FireComponentBase.generated.h"

class AActor;
class ASolsticeCharacterBase;
class ASolsticeWeaponBase;
class IResource;
class UResource;
class UHitObjectBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UFireComponentBase : public UAttributeLinkedComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASolsticeWeaponBase> WeaponOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASolsticeCharacterBase> CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IResource> Resource;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAimingAsPrimarySpecialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FireModeSuffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttribute, FSolsticeAttributeData> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBulletEffects WeaponEffectOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponSounds WeaponSoundOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFiringState FiringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFiringState DesiredState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFiringStateChanged OnWeaponStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFiringState, FWeaponStateData> StateClassOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HitObjectClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHitObjectBase> HitObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHitObjectBase* HitObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAmmoType RequiredAmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageGroup DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponPenetrationMode PenetrationMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShotFired OnShotFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileFired OnProjectileFired;
    
    UFireComponentBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldFire() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWeaponEffectOverrides(FBulletEffects WeaponEffects, FWeaponSounds WeaponSounds);
    
    UFUNCTION(BlueprintCallable)
    void SetHitObjectClass(TSubclassOf<UHitObjectBase> NewClass);
    
    UFUNCTION(BlueprintCallable)
    void SetFiringState(EFiringState NewFiringState);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredState(EFiringState NewDesiredState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HitObjectClass(TSubclassOf<UHitObjectBase> OldClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEnergyToFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAmmunitionToFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFiringState GetWeaponState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeBetweenShots() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfProjectiles() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFiringMode GetFiringMode() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoPerShot() const;
    
    UFUNCTION(BlueprintCallable)
    void FireProjectile();
    
    UFUNCTION(BlueprintCallable)
    void Fire();
    
    UFUNCTION(BlueprintCallable)
    void ClearWeaponEffectOverrides();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFire() const;
    
};

