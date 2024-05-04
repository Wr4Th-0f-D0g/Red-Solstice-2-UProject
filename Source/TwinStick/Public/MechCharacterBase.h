#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BulletEffects.h"
#include "Damage.h"
#include "EDamageGroup.h"
#include "EIndicatorType.h"
#include "InteractionInterface.h"
#include "OnMechAttachmentChangedDelegate.h"
#include "SolsticeCharacterBase.h"
#include "Templates/SubclassOf.h"
#include "MechCharacterBase.generated.h"

class AActor;
class AController;
class UAnimMontage;
class UArrowComponent;
class UEnergyComponent;
class UFMODAudioComponent;
class UFMODEvent;
class UHealthBarWidgetBase;
class UHeroSkillsComponent;
class UInteractableComponent;
class UMapDynamicActorComponent;
class UMaterialInstanceDynamic;
class UMechWeaponComponent;
class UNavigationQueryFilter;
class UOverwatchComponent;
class USkill;

UCLASS(Blueprintable)
class TWINSTICK_API AMechCharacterBase : public ASolsticeCharacterBase, public IInteractionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionStartRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InteractionInfoHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionWidgetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableOverwatchOnPerceptionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InteractIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DynamicHealthBarTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwakenCloseByMembersRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MechOpenMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverwatchComponent* OverwatchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OverwatchTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMechAttachmentChanged OnMechAttachmentChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> PlayerFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ControllingPawnWeaponFireDisableTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MechWeaponFireDisableTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHeroSkillsComponent* SkillsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRooted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMechWeaponComponent* MechWeaponComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* TakeDamageSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USkill>> Skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkill*> MechSkillInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MuzzleDirectionLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MuzzleDirectionRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MuzzleDirectionCenter;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBulletEffects BulletEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDamageGroup LastDamageGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastDamageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHealthBarWidgetBase> HealthBarWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMechHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthWidgetTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControllingPawn, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* ControllingPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USkill>> MainMechSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USkill>> UtilityMechSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* DamageSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapDynamicActorComponent* MapDynamicActorComponent;
    
public:
    AMechCharacterBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetupSkills();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupBuffs();
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterNameWidgetHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHealthBar();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveBuffs();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ControllingPawn(ASolsticeCharacterBase* PrevControllingPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyFinishSpawning();
    
    UFUNCTION(BlueprintCallable)
    void MoveRight(float Axis);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MechEverEntered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_MechUnattached(ASolsticeCharacterBase* AttachedCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_MechDied(const FDamage& DamageInfo, bool bRecent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_MechAttached(ASolsticeCharacterBase* AttachedCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_EnergyReachedZero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasControllingPawn() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTagRemoved(ASolsticeCharacterBase* Char, FGameplayTag RemovedTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleTagAdded(ASolsticeCharacterBase* Char, FGameplayTag AddedTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleOverwatchTargetSelected(AActor* Target, AActor* PreviousTarget);
    
    UFUNCTION(BlueprintCallable)
    void HandleOverwatchStatusChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleMechEnergyChanged(float Energy, UEnergyComponent* InEnergyComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleControllingPawnDied(AActor* Character, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void HandleCharacterEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkill* GetSkill(const FGameplayTag& SkillTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeCharacterBase* GetControllingPawn() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceControllingPawnOutOfMech();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ExitMech(ASolsticeCharacterBase* SolsticeCharacter);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool EnterMech(ASolsticeCharacterBase* SolsticeCharacter);
    
    UFUNCTION(BlueprintCallable)
    void DiscoverHealthbars(AController* InController, EIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void CreateHealthBar();
    
    UFUNCTION(BlueprintCallable)
    void CopyAttributesFromPawn(ASolsticeCharacterBase* OtherPawn);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientActivateMechExitSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanRemoveCharacterFromMech(ASolsticeCharacterBase* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAttachCharacterToMech(ASolsticeCharacterBase* InCharacter);
    

    // Fix for true pure virtual functions not being implemented
};

