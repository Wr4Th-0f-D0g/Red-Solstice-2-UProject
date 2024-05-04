#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AttackTargetChangedDelegate.h"
#include "EAttribute.h"
#include "EFiringMode.h"
#include "ERotationMode.h"
#include "ESolsticeControlMode.h"
#include "FireEnabledChangedDelegate.h"
#include "FiringMode.h"
#include "FiringModeChangedDelegate.h"
#include "OverwatchTargetChangedDelegate.h"
#include "SolsticeAIControllerBase.h"
#include "Templates/SubclassOf.h"
#include "HeroControllerBase.generated.h"

class AActor;
class AHeroCharacterBase;
class AMonsterCharacterBase;
class APawn;
class ASolsticeCharacterBase;
class ASolsticeWeaponBase;
class IDamagable;
class UDamagable;
class UEnvQuery;
class UNavigationQueryFilter;
class UParticleSystemComponent;
class USolsticeWeaponComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AHeroControllerBase : public ASolsticeAIControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* SolsticeChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* ExitVehicleEQSQuery;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverwatchTargetChanged OnOverwatchTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FiringMode, meta=(AllowPrivateAccess=true))
    FFiringMode ActiveFiringMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFiringModeChanged OnFiringModeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastAttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttackTarget, meta=(AllowPrivateAccess=true))
    AActor* AttackTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackTargetChanged OnAttackTargetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TargetParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FirePressed, meta=(AllowPrivateAccess=true))
    bool bFirePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireEnabledChanged OnFirePressedChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize CameraTracePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize WeaponTracePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InteractableTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DestructableTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InteractionRotationDisallowTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawInteractionDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> PlayerNavFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> PlayerNavFilterNoVault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* LastInteractionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InteractionTarget, meta=(AllowPrivateAccess=true))
    AActor* InteractionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERotationMode RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingTurnRateMultiplier;
    
    AHeroControllerBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void VerifyOverwatchTarget();
    
    UFUNCTION(BlueprintCallable)
    void UnbindFromTargetKilled(TScriptInterface<IDamagable> Target);
    
    UFUNCTION(BlueprintCallable)
    void ToggleFireMode();
    
    UFUNCTION(BlueprintCallable)
    bool SwapWeapons(bool bToSecondaryWeapon, float Timestamp, USolsticeWeaponComponent* TargetWeaponComponent);
    
    UFUNCTION(BlueprintCallable)
    void StopHeroMovement();
    
    UFUNCTION(BlueprintCallable)
    void StopForInteraction();
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryWeaponActive(bool bNewActive, bool bForceSetter);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationMode();
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionTarget(AActor* NewInteractionTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetFiringModeMode(EFiringMode NewFiringMode, bool bForceSetter);
    
    UFUNCTION(BlueprintCallable)
    void SetFiringMode(FFiringMode NewFiringMode, bool bForceSetter);
    
    UFUNCTION(BlueprintCallable)
    void SetFirePressed(bool NewPressed);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackTarget(AActor* NewAttackTarget, bool bForceSetter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetOverwatchTarget(AActor* NewAttackTarget);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerFocusOnInteractable(const FVector& Location, const FGameplayTagContainer& TagsToAdd, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RotationModeChanged(ERotationMode NewRotationMode);
    
    UFUNCTION(BlueprintCallable)
    void RotateToFaceInteractable();
    
    UFUNCTION(BlueprintCallable)
    void ResumePathfollowing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestWASDLocationMove(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void ReloadWeapon();
    
    UFUNCTION(BlueprintCallable)
    void PausePathfollowing();
    
    UFUNCTION(BlueprintCallable)
    void OpenFire();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractionTarget(AActor* OldInteractionTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FiringMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FirePressed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackTarget(AActor* OldTarget);
    
    UFUNCTION(BlueprintCallable)
    void MoveToInteractLocation(FVector Location, float Range);
    
    UFUNCTION(BlueprintCallable)
    void MoveCharacterTo(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void MarkAttackTarget(AActor* OldTarget, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSecondaryWeaponActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrimaryWeaponActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInInteractionRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeroWithinDistanceOf(FVector Location, float Range) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractionTargetReceived(AActor* NewTarget, const FVector& Location, float Range, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractionTargetChanged(AActor* OldTarget, AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractionStartedServer(AActor* Target, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractionStartedClient(AActor* Target, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Interact(AActor* Target, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidInteractionTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveTarget();
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponSwapReplicated(bool SecondaryWeaponActive);
    
    UFUNCTION(BlueprintCallable)
    void HandleTargetKilled(AActor* KilledTarget, APawn* PawnInstigator);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTagAdded(ASolsticeCharacterBase* InCharacter, FGameplayTag InTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleOverwatchTargetKilled(AActor* KilledActor, APawn* PawnInstigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameplayTagCountChanged(const FGameplayTag InTag, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USolsticeWeaponComponent* GetWeaponComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeWeaponBase* GetSecondaryWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeWeaponBase* GetPrimaryWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHeroCharacterBase* GetHero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFiringMode GetFiringModeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDesiredWeaponRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERotationMode GetDesiredRotationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDesiredHeroRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeControlMode GetControlMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeWeaponBase* GetActiveWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    void FocusOnInteractable(const FVector& Location, const FGameplayTagContainer& TagsToAdd, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void FinishUsingNavlink();
    
    UFUNCTION(BlueprintCallable)
    void FindOverwatchTarget();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAttackTargetKilled();
    
    UFUNCTION(BlueprintCallable)
    void ClearMonsterTarget(AMonsterCharacterBase* InMonster);
    
    UFUNCTION(BlueprintCallable)
    void ClearFocusOnInteractable(const FGameplayTagContainer TagsToRemove);
    
    UFUNCTION(BlueprintCallable)
    void CeaseFire();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRotateToFaceInteractable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMoveToInteract() const;
    
    UFUNCTION(BlueprintCallable)
    void BindToTargetKilled(TScriptInterface<IDamagable> Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttackTargetReceived(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void AlreadyAtInteractLocation();
    
};

