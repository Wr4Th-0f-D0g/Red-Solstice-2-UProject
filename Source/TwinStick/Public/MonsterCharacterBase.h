#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MapElementInfo.h"
#include "MinimapElementInfo.h"
#include "CharacterWeaponData.h"
#include "Damage.h"
#include "EAttribute.h"
#include "EBuffChangedOperation.h"
#include "EDamageGroup.h"
#include "EDissolveType.h"
#include "EEnemyThreatLevel.h"
#include "EFiringMode.h"
#include "EIndicatorType.h"
#include "EMonsterSizeClass.h"
#include "EMonsterSpawnType.h"
#include "EMonsterType.h"
#include "ESolsticeAnimationSharingState.h"
#include "InheritableTagContainer.h"
#include "MonsterClearHoverDelegate.h"
#include "MonsterDebugsDelegate.h"
#include "MonsterHarpoonedDelegate.h"
#include "MonsterSettings.h"
#include "PoolableActorInterface.h"
#include "SeismicResonatorInterface.h"
#include "SimulatedBuff_ID.h"
#include "SolsticeAttributeData.h"
#include "SolsticeCharacterBase.h"
#include "Templates/SubclassOf.h"
#include "MonsterCharacterBase.generated.h"

class AActor;
class AController;
class AMonsterControllerBase;
class UAimOffsetComponent;
class UAnimMontage;
class UBoxComponent;
class UBurrowingMonsterComponentBase;
class UDamageComponent;
class UDarkenMeshComponent;
class UDissolveComponent;
class UEnergyComponent;
class UFMODEvent;
class UFOWHideComponent;
class UHealthBarWidgetBase;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMonsterMeleeSkillBase;
class UMonsterSkillBase;
class UMonsterSpeedBoostBaseComponent;
class UMonsterVaultingComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USkill;
class USolsticeBuffBase;
class USuppressionComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AMonsterCharacterBase : public ASolsticeCharacterBase, public ISeismicResonatorInterface, public IPoolableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CanBeTargetedIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBeginningVault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AttackSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DeathSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoPermanentHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSpawningAnimSharing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimSharing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMonsterEngaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DynamicHealthBarTimeout;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMonsterHarpooned OnMonsterHarpooned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGlitchBreakpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToTickEveryFrameSq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFromWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillMonstersOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonstersToKillVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KillMonstersOnHitTimerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MonstersToKillOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickTimeDistanceOptimized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustNetFreqDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNetPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNetPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNetFreqDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNetFreqDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetOptimizationMaxDistanceSq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetOptimizationMinDistanceSq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClosestPlayerPawnUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESolsticeAnimationSharingState AnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AggroIgnoreQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> GameDifficultyBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> PlayerCountBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MonsterBuffs, meta=(AllowPrivateAccess=true))
    TArray<FSimulatedBuff_ID> MonsterBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USolsticeBuffBase*> MonsterSimulatedBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> ArtilleryDamageBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsWeaponComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* GameDifficultyBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USolsticeBuffBase* PlayerCountBuff;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnerSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMonsterDetailsAttributesPrePlaced;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMonsterSpawnType SpawnType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer PlayerIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer SkillBlockingTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkill* ActiveAttackSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkill*> AISkills;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamage LastDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PendingAbilityTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MonsterDetailsRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionEnabled::Type>> PrimsToReactivate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDissolveType DissolveDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathAnimSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualBrutalExplode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNoDamageToMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageGroup LastDamageGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastDamageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPooledMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> LastAttackedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GoalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DropSpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InstantSpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UnburrowSpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USkill>> Skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<USkill>, float> WeightedSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InnerMeleeBoxRelativeLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InnerMeleeBoxExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OuterMeleeBoxRelativeLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OuterMeleeBoxExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesStandardMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMeleeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MeleeMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeAttackMovementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSpeedForCloserAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeEnableRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ExecuteSkillTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecutionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMonsterMeleeSkillBase* MeleeSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFOWHideComponent* FOWHideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFowVisibilityNeedsForceUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActualAppliedFowHideValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCooldownNavlinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NavlinkIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavlinkCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToRemoveBeforeNavLinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMonsterVaultingComponent* MonsterVaultingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnteredCircling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SnatcherTokenID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonsterControllerBase* MonsterController;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMonsterClearHover OnMonsterClearHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMonsterHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitReact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitReactAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle IdleOptimizeCheckTimerHandle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IdleOptimize_CheckTags;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> HoloMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> HoloMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalMaterials;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ReplicatedFlags, meta=(AllowPrivateAccess=true))
    uint16 ReplicatedFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPatrolMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnToInnerRadiusWhenAtOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolIgnoreTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolOuterRadius;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRequestingPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPathRequestSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimapElementInfo MinimapElementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapElementInfo MapElementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FresnalColorMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlignMonsterToFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BurrowBoxRelativeLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BurrowBoxExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StunStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* StunEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StunParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStunned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHealthBarWidgetBase> HealthBarWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMonsterSpeedBoostBaseComponent* MonsterSpeedBoostComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* MeleeRangeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OuterMeleeRangeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USuppressionComponent* SupressionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDissolveComponent* DissolveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDarkenMeshComponent* DarkenMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnergyComponent* MonsterEnergyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAimOffsetComponent* AimOffsetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* MonsterUnburrowBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBurrowingMonsterComponentBase* BurrowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ArmorHitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* NormalHitSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMonsterDebugs OnMonsterDebugs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplSuppression, meta=(AllowPrivateAccess=true))
    float ReplSuppression;
    
public:
    AMonsterCharacterBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryAddingToArray();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMeleeTimer(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ToggleHealthBarVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void TagRemoved(ASolsticeCharacterBase* Char, FGameplayTag RemovedTag);
    
    UFUNCTION(BlueprintCallable)
    void TagAdded(ASolsticeCharacterBase* Char, FGameplayTag AddedTag);
    
    UFUNCTION(BlueprintCallable)
    void StopAI();
    
    UFUNCTION(BlueprintCallable)
    void StartAI();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ShowStunParticles(bool bTurnOn);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnType(EMonsterSpawnType InSpawnType);
    
    UFUNCTION(BlueprintCallable)
    void SetMonsterWeapon(FCharacterWeaponData WeaponData);
    
    UFUNCTION(BlueprintCallable)
    void SetMonsterTicksDisabled(bool bDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMonsterRenderPassDisabled(bool bNewDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMonsterMeshHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetMonsterHolographic(bool bNewHolographic);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleOptimized(bool bOptimized, bool bSwitchBehaviourTrees);
    
    UFUNCTION(BlueprintCallable)
    void SetFiringMode(EFiringMode FiringMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFireEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimState(ESolsticeAnimationSharingState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveAttackSkill(USkill* SkillToActivate);
    
    UFUNCTION(BlueprintCallable)
    void RetreatMonster();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RespawnMonsterAfterDeath();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMonsterFromMapSystem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveHealthBar();
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterMonsterToMapSystem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlaySpawnAnimations();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplSuppression();
    
    UFUNCTION()
    void OnRep_ReplicatedFlags(uint16 OldFlags);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_MonsterBuffs();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMonsterStartedSkill(UMonsterSkillBase* ActivatedSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMonsterMeshHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMonsterHolographic(bool bNewHolographic);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeleeAttackStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyFinishSpawning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyDropFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyDeath(bool bAllowBeginNotify);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ReturnedToPool();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ReleasedFromPool(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NetMulticast_PsychicTeleport_Implementation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MonsterIdleOptimizations(bool bTurnOff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MonsterEngaged(bool bEngaged);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MonsterCleanupForDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MonsterArmorShredded();
    
    UFUNCTION(BlueprintCallable)
    void MeleeTimerTick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MeleeActivated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMonsterSettings K2_GetMonsterDetails() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanUseSkill() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool K2_CanRespawn() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_AnimSharingSpawn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTicksDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTauntable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRenderPassDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPatrolMonster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdleOptimized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHolographicMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimSharing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IdleOptimizeCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IdleOptimizeChanged(bool bIsIdleOptimized);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDisabledFloorChecks() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleMonsterDamaged(AActor* DamagedMonster, const FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleBuffApplied(USolsticeBuffBase* AppliedBuff, EBuffChangedOperation ChangeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEnemyThreatLevel GetThreatLevelEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMonsterSpawnType GetSpawnType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkill* GetSkill(const FGameplayTag& SkillTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReturnToInnerRadiusWhenAtOuterRadius() const;
    
    UFUNCTION(BlueprintCallable)
    USkill* GetRandomSkillWeighted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetQueryTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerSpeedForCloserAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPatrolOuterRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPatrolInnerRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPatrolIgnoreTraceRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOuterMeleeBoxWorldLocation(FVector& OutLocation, FVector& OutExtents, FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMonsterType GetMonsterType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMonsterSizeClass GetMonsterSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMonsterName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMonsterKillXP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMonsterKillDestroyTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMonsterControllerBase* GetMonsterController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EAttribute, FSolsticeAttributeData> GetMonsterAttributes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMonsterMeleeSkillBase* GetMeleeSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeleePlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMeleeAttackMovementDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TMap<TSubclassOf<USolsticeBuffBase>, float> GetMeleeAilments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxMeleeRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetKilledTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInnerMeleeBoxWorldLocation(FVector& OutLocation, FVector& OutExtents, FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthWidgetTimeOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetGoalActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetExecutionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExecutionRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEvadeChance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<USolsticeBuffBase> GetEvadeBuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCapturedTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCampaignUnlockTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBurrowBoxWorldLocation(FVector& OutLocation, FVector& OutExtents, FRotator& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAttackTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkill* GetActiveAttackSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FOW_VisibilityChanged(float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceStun();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceStagger();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesExecutePlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesEvadeAfterAttack() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DiscoverHealthbars(AController* InController, EIndicatorType IndicatorType);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisableFloorChecks(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void DestroyMonster();
    
    UFUNCTION(BlueprintCallable)
    void DamageMaterialChange(float MaxBlood);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateHealthBar();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ClearMonsterHighlight();
    
    UFUNCTION(BlueprintCallable)
    void ClearRetreat();
    
    UFUNCTION(BlueprintCallable)
    void ClearMonsterHighlight();
    
    UFUNCTION(BlueprintCallable)
    void ClearAttackTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRespawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReloadAndHasClips() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttackDoors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AvoidBehemothDeathSlam();
    

    // Fix for true pure virtual functions not being implemented
};

