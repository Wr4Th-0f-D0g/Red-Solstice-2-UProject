#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AttackTargetChangedDelegate.h"
#include "AttributeLinkedComponent.h"
#include "CharacterWeaponData.h"
#include "EFiringMode.h"
#include "EFiringState.h"
#include "EnergyDepletedDelegate.h"
#include "FireEnabledChangedDelegate.h"
#include "FiringMode.h"
#include "FiringModeChangedDelegate.h"
#include "OutOfAmmoDelegate.h"
#include "PrimaryAmmoAddedDelegate.h"
#include "SecondaryAmmoAddedDelegate.h"
#include "SolsticeAttributeModifier.h"
#include "SwapWeaponData.h"
#include "Templates/SubclassOf.h"
#include "WeaponChangedDelegate.h"
#include "WeaponReloadStartedDelegate.h"
#include "SolsticeWeaponComponent.generated.h"

class AActor;
class AHeroCharacterBase;
class AInventoryPickup;
class ASolsticeCharacterBase;
class ASolsticeWeaponBase;
class UFMODEvent;
class UHitObjectBase;
class UParticleSystem;
class UWeaponPassiveBuffBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USolsticeWeaponComponent : public UAttributeLinkedComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponReloadStarted OnReloadStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveWeaponData, meta=(AllowPrivateAccess=true))
    FSwapWeaponData ActiveWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwatchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwatchTargetingInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwatchRetargetCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OverwatchOnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* OverwatchOffSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AmmoDropDisallowTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OverwatchTargetingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FiringTresholdHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingTresholdHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManuallWindupSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverwatchWindupSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAttributeModifier> LongAimingBuffModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsForLongAimingBuffApplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponPassiveBuffBase* LongAimingBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IncapacitatedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GrabbedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrimaryAmmoClips, meta=(AllowPrivateAccess=true))
    int32 PrimaryAmmoClips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 SpecializedAmmoClips;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAmmoAdded OnPrimaryAmmoAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSecondaryAmmoAdded OnSecondaryAmmoAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimaryAmmoCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimaryAmmoRegeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpecializedAmmoCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecializedAmmoRegeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingPrimaryAmmoPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingSpecializedAmmoPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingLoadedSpecializedClips;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutOfAmmo OnOutOfAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoClipsDropped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoClipsDroppedPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AInventoryPickup> AmmoPickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponData PrimaryWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponData SecondaryWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrimaryWeapon, meta=(AllowPrivateAccess=true))
    ASolsticeWeaponBase* PrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecondaryWeapon, meta=(AllowPrivateAccess=true))
    ASolsticeWeaponBase* SecondaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveWeapon, meta=(AllowPrivateAccess=true))
    ASolsticeWeaponBase* ActiveWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFiringMode FiringMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFiringModeChanged OnFiringModeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttackTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackTargetChanged OnAttackTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireEnabledChanged OnFireEnabledChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor LaserColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserColorIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor LaserColorManual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserColorIntensityManual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserIntensityMultiplierRemoteHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwapWeaponDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* InstantReloadSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponChanged OnWeaponChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnergyDepleted OnEnergyDepleted;
    
    USolsticeWeaponComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryExpendSecondaryWeaponBullets(int32 InBullets, int32& OutSpent);
    
    UFUNCTION(BlueprintCallable)
    void ToggleFireComponent();
    
    UFUNCTION(BlueprintCallable)
    void SetLaserColor(FColor NewColor, float Intensity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetPreviewWeapon(const FCharacterWeaponData& WeaponData, bool bPrimary);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropAmmo();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddSecondaryFireMod(const FDataTableRowHandle& FireModDataHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddAdvancedAmmoMod(const FDataTableRowHandle& AdvancedAmmoDataHandle);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWeaponBuff(TSubclassOf<UWeaponPassiveBuffBase> BuffClass, int32 NumberOfStacks);
    
    UFUNCTION(BlueprintCallable)
    void ReloadWeapon();
    
    UFUNCTION(BlueprintCallable)
    void OpenFire();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecondaryWeapon();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryWeapon();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrimaryAmmoClips(int32 PreviousClips);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveWeaponData(const FSwapWeaponData& OldData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveWeapon();
    
    UFUNCTION(BlueprintCallable)
    void LoadPrimaryWeaponBullets(int32 Bullets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSecondaryWeaponActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimaryWeaponActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveWeapon(ASolsticeWeaponBase* WeaponRef) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSecondaryWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasResourcesToFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPrimaryWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponStateChanged(ASolsticeWeaponBase* InWeapon, EFiringState OldState, EFiringState NewState);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameplayTagAdded(ASolsticeCharacterBase* Char, FGameplayTag NewTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLaserIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetLaserColor() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHeroCharacterBase* GetHeroOwner() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFiringMode GetFiringMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveWeaponCurrentAmmo() const;
    
    UFUNCTION(BlueprintCallable)
    void CeaseFire();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseWeapons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTransitionFiringStates() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanToggleFireComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwapWeapons(bool bToSecondary, float Timestamp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReloadWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOpenFire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddSpecializedAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddAdvancedAmmo(TSubclassOf<UHitObjectBase> AmmoType) const;
    
    UFUNCTION(BlueprintCallable)
    void AddWeaponBuff(TSubclassOf<UWeaponPassiveBuffBase> BuffClass, int32 NumberOfStacks);
    
    UFUNCTION(BlueprintCallable)
    void AddStandardAmmo(int32 Clips, bool bTryReload);
    
    UFUNCTION(BlueprintCallable)
    void AddSpecializedAmmo(int32 Clips, bool bForceSecondaryWeapon);
    
    UFUNCTION(BlueprintCallable)
    void AddSecondaryWeaponBullets(int32 Bullets);
    
    UFUNCTION(BlueprintCallable)
    void AddSecondaryFireMod(FDataTableRowHandle FireModDataHandle);
    
    UFUNCTION(BlueprintCallable)
    void AddPrimaryWeaponBullets(int32 Bullets);
    
    UFUNCTION(BlueprintCallable)
    void AddAdvancedAmmoMod(FDataTableRowHandle AdvancedAmmoDataHandle);
    
    UFUNCTION(BlueprintCallable)
    void AddAdvancedAmmo(TSubclassOf<UHitObjectBase> AmmoType, int32 Bullets);
    
};

