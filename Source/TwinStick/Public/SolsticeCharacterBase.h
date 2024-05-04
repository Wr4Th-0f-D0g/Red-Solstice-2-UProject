#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "ActorDamagedDelegate.h"
#include "ActorKilledDelegate.h"
#include "ComponentRequestedMoveDelegate.h"
#include "Damagable.h"
#include "Damage.h"
#include "EAttribute.h"
#include "ECharacterType.h"
#include "ELocomotionMode.h"
#include "ERotationMode.h"
#include "ESolsticeSignificanceType.h"
#include "ESolsticeSurfaceType.h"
#include "ESolsticeTeam.h"
#include "FootstepData.h"
#include "FootstepSounds.h"
#include "GameplayTagNotifyInterface.h"
#include "GrantAndActivatePayload.h"
#include "InheritableTagContainer.h"
#include "LocalMontageInfo.h"
#include "MontageInfoTags.h"
#include "OnTagUpdatedDelegate.h"
#include "ReplicatedMontageInfo.h"
#include "SolsticeControlInterface.h"
#include "SolsticeMinimapReplicationTagCountMap.h"
#include "SolsticeSignificanceInterface.h"
#include "Templates/SubclassOf.h"
#include "VaultablePawn.h"
#include "SolsticeCharacterBase.generated.h"

class AActor;
class AFootstepSoundDelivery;
class AMechCharacterBase;
class APawn;
class APlayerController;
class ARTS_PlayerController;
class ASolsticeDrivableVehicle;
class UAbilityBase;
class UAnimInstance;
class UAnimMontage;
class UArmorComponent;
class UAttributeComponent;
class UBrutalExplodeComponent;
class UEnergyComponent;
class UEnvironmentInteractionComponent;
class UFMODEvent;
class UGameplayTagComponent;
class UGameplayTasksComponent;
class UHealthComponent;
class UHeroSkillsComponent;
class UMaterialInterface;
class UObject;
class UPerceptionTargetComponent;
class USceneComponent;
class USkeletalMeshComponent;
class USolsticeSkeletalMeshComponent;
class USolsticeWeaponComponent;
class USuppressionComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticeCharacterBase : public ACharacter, public IDamagable, public IGameplayTagAssetInterface, public IGameplayTagNotifyInterface, public IVaultablePawn, public IVisualLoggerDebugSnapshotInterface, public IGenericTeamAgentInterface, public IAISightTargetInterface, public ISolsticeControlInterface, public ISolsticeSignificanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WeaponSwitchDisallowTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCMCTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideCMCTickRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideCMCTickRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisableTickAfterMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShotOriginBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OverwatchIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterType CharacterType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentRequestedMove OnComponentRequestedMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAbilityBase*> TemporaryAbilities;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorDamaged OnActorDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorKilled OnActorKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PickupAndDropObjectMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PickupAndThrowObjectMontage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPerceptionTargetComponent* PerceptionTargetComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESolsticeSurfaceType, FFootstepSounds> FootstepSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFootstepData> FootstepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* GenericFootstepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* GenericFootstepSoundRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FootstepDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFootstepSoundDelivery* FootstepSoundDeliveryActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FootstepDecalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootstepDecalLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootstepDecalFadeoutStartTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrutalExplodeComponent* BrutalExplodeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedMontage, meta=(AllowPrivateAccess=true))
    FReplicatedMontageInfo ReplicatedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalMontageInfo LocalMontage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AITargetAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HideMesh, meta=(AllowPrivateAccess=true))
    bool bHideMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DisableCollisions, meta=(AllowPrivateAccess=true))
    bool bDisableCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DesiredRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator DesiredRotationYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERotationMode RotationMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DesiredYaw, meta=(AllowPrivateAccess=true))
    float DesiredYaw;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MovementRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MovementToCurrentRotationDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MovementToDesiredRotationDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer IncapacitatedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer RootedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer FocusOverrideTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer GrabbedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer WeaponUsePreventedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer SkillUsePreventedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer DetonatorPreventionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer CustomRotationModeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer InteractionForbiddenTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer RootedRotationAllowedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer SpawnTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTagUpdated OnTagAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTagUpdated OnTagRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* GameplayTagComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IncapacitationState, meta=(AllowPrivateAccess=true))
    uint8 IncapacitationState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KilledScore;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USuppressionComponent* SuppressionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArmorComponent* ArmorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTasksComponent* GameplayTasksComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnergyComponent* EnergyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttributeComponent* AttributeComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    USolsticeWeaponComponent* ActiveWeaponComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USolsticeWeaponComponent* WeaponComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnvironmentInteractionComponent* EnvironmentInteractionComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControllingVehicle, meta=(AllowPrivateAccess=true))
    APawn* ControllingVehicle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeSignificanceType SignificanceType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSolsticeMinimapReplicationTagCountMap MinimalReplicatedTagContainer;
    
public:
    ASolsticeCharacterBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnGrantAllAbilities();
    
    UFUNCTION(BlueprintCallable)
    void UnGrantAbility(TSubclassOf<UAbilityBase> AbilityClass);
    
    UFUNCTION(BlueprintCallable)
    bool TraceAndDoJump(FVector GroundDestination, float JumpArc, float PathTracePercent, FVector& OutLaunchVelocity, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float DrawDebugDuration);
    
    UFUNCTION(BlueprintCallable)
    void Suicide();
    
    UFUNCTION(BlueprintCallable)
    void StopReplicatedMontage(UAnimMontage* StopMontage, float OverrideBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTeam(ESolsticeTeam NewTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetKilledScore(int32 InScore);
    
    UFUNCTION(BlueprintCallable)
    void SetFocalPoint(const FVector& FP);
    
    UFUNCTION(BlueprintCallable)
    void SetFocalActor(AActor* FocalActor);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionsDisabled(bool bLeaveRootCompStatic);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterRotation(FRotator CharDesiredRotation, ERotationMode NewRotationMode);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopReplicatedMontage(UAnimMontage* StopMontage, float OverrideBlend);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerSetRotationUnreliable(FRotator InRot, bool bTeleport, bool bMulticast);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetRotation(FRotator InRot, bool bTeleport, bool bMulticast);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerSetLocationUnreliable(FVector InLoc, bool bTeleport, bool bMulticast);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetLocation(FVector InLoc, bool bTeleport, bool bMulticast);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetFocalPoint(const FVector& FP);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetFocalActor(AActor* FocalActor);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveGameplayTag(FGameplayTag Tag, bool bRemoveChildren);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlayReplicatedMontage(UAnimMontage* MontageToPlay, FMontageInfoTags MontageTags, float InPlayRate, float StartPosition, FName StartSection, UObject* Payload);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayMontage(UAnimMontage* Montage, float PlayRate, FName StartSection, bool bMulticast);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerClearFocalPoint();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddTemporaryTag(const FGameplayTag& InTag, float Duration);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddGameplayTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTags(FGameplayTagContainer InTags, bool bRemoveChildren, bool bAllowClientRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTag(FGameplayTag InTag, bool bRemoveChildren, bool bAllowClientRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessGameplayTagRemoved(FGameplayTag RemovedTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessGameplayTagAdded(FGameplayTag AddedTag);
    
    UFUNCTION(BlueprintCallable)
    float PlayReplicatedMontage(UAnimMontage* MontageToPlay, FMontageInfoTags MontageTags, float InPlayRate, float StartPosition, FName StartSection, UObject* Payload, bool bFromServerRPC, bool bFromAbility);
    
    UFUNCTION(BlueprintCallable)
    void OnTemporaryAbilityFinished(UAbilityBase* Ability);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMontage();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_IncapacitationState(uint8 OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HideMesh();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DisableCollisions();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredYaw();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ControllingVehicle(APawn* PrevVehicle);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastRotationUnreliable(FRotator InRot, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastRotation(FRotator InRot, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastMontage(USkeletalMeshComponent* InMesh, UAnimMontage* Montage, float PlayRate, FName StartSection, float StartTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastLocationUnreliable(FVector InLoc, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastLocation(FVector InLoc, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* K2_GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPerceptionTargetComponent* K2_GetPerceptionTargetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* K2_GetAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuppressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStunned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandingOnTrain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRooted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIncapacitated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrabbed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAllowedInsideBuildings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMatchingGameplayTag(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& InTagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& InTagContainer) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSuppressed(bool bSuppressed);
    
    UFUNCTION(BlueprintCallable)
    void HandleIncapacitationStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleCharacterDied(AActor* Character, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleAbilityUsed(UAbilityBase* Ability, const FGameplayTag& AbilityTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleAbilityFinished(UAbilityBase* Ability, const FGameplayTag& AbilityTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool GrantAndActivateAbility(TSubclassOf<UAbilityBase> Ability, FGrantAndActivatePayload Payload);
    
    UFUNCTION(BlueprintCallable)
    UAbilityBase* GrantAbility(TSubclassOf<UAbilityBase> AbilityClass, int32 AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USolsticeWeaponComponent* GetWeaponComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTopArmorBlockPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTopArmorBlockArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESolsticeTeam GetTeamEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppressionRegenerationMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppressionRegeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppressionPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppressionMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSuppression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USolsticeSkeletalMeshComponent* GetSolsticeSkeletalMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHeroSkillsComponent* GetSkillsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARTS_PlayerController* GetRTSController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetMontagePayload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELocomotionMode GetLocomotionMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKilledScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRegeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyRegeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMechCharacterBase* GetControllingMech() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeDrivableVehicle* GetControllingDrivableVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetComponentWithSocket(FName SocketName, USceneComponent*& OutComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterType GetCharacterType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBrutalExplodeComponent* GetBrutalExplodeComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttributeValueUnchecked(EAttribute Attribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAttributeValue(EAttribute Attribute, float& CurrentValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorRegeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorKineticResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorEnergyResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorDestructiveResistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorBlocksMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArmorBlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAllCharacterGameplayTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorFeetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USolsticeWeaponComponent* GetActiveWeaponComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitedVehicle(APawn* Vehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnteredVehicle(APawn* Vehicle);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopMontage(float BlendOutTime, UAnimMontage* AnimMontage);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetFocalPoint(const FVector& FP);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetFocalActor(AActor* FocalActor);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRemoveGameplayTag(FGameplayTag Tag, bool bRemoveChildren);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearFocalPoint();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddGameplayTag(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void ClearFocalPoint();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllGameplayTags(bool bAddSpawnTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseWeapons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseSkills() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanShowFootstep();
    
    UFUNCTION(BlueprintCallable)
    void AddTemporaryGameplayTag(FGameplayTag InTag, float Duration, bool bAllowClientAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTags(FGameplayTagContainer InTags, bool bAllowClientAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTag(FGameplayTag InTag, bool bAllowClientAdd);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    void GetActorGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetActorGameplayTags,);
    
};

