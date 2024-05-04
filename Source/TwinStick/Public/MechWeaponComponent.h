#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "BulletEffects.h"
#include "EDamageGroup.h"
#include "EWeaponPenetrationMode.h"
#include "HitscanPayload.h"
#include "WeaponDescription.h"
#include "WeaponSounds.h"
#include "MechWeaponComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMechWeaponComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SweepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageGroup DamageType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ControllingPawnWeaponFireDisableTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MechWeaponFireDisableTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MechFireMontage_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MechFireMontage_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MechFireMontagePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShotOriginBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBulletEffects BulletEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bFirePressed, meta=(AllowPrivateAccess=true))
    bool bFirePressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponPenetrationMode PenetrationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponSounds WeaponSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponDescription WeaponDescription;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayFirstFireHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ShotFireHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRefiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastFireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimerIntervalAdjust;
    
public:
    UMechWeaponComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetFireEnabled(bool bEnabled);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetFireEnabled(bool bEnabled);
    
protected:
    UFUNCTION(Reliable, Server)
    void ServerResolveDamage(const TArray<FHitscanPayload>& HitPayloads, const FVector_NetQuantize& Origin, uint16 PredictionKey);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bFirePressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiring() const;
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientConfirmShot(uint16 PredictionKey, float CurrentEnergy);
    
};

