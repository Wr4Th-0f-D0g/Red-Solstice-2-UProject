#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "AbilityFinishedDelegate.h"
#include "ESkillSlot.h"
#include "SkillChangedDelegate.h"
#include "SkillSelectionChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "HeroSkillsComponent.generated.h"

class AActor;
class ASolsticePlayerState;
class UAbilityBase;
class UPowerSuitComponent;
class USkill;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UHeroSkillsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPowerSuitComponent> PowerSuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASolsticePlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAbilityBase*> TemporaryGrantedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainSkillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UtilitySkillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USkill>> MainSkillClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USkill>> UtilitySkillClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<USkill>> NativeSkillClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_NativeSkillInstances, meta=(AllowPrivateAccess=true))
    TArray<USkill*> NativeSkillInstances;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillSelectionChanged OnSkillSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillChanged OnSkillChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityFinished OnAbilityFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_MainSkillInstances, meta=(AllowPrivateAccess=true))
    TArray<USkill*> MainSkillInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_UtilitySkillInstances, meta=(AllowPrivateAccess=true))
    TArray<USkill*> UtilitySkillInstances;
    
    UHeroSkillsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetSkillInSlot(int32 InSlotIndex, TSubclassOf<USkill> InSkillClass, ESkillSlot InSkillSlot, AActor* OwnerOverride);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSwapUtilitySkills(int32 FirstIndex, int32 SecondIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSwapMainSkills(int32 FirstIndex, int32 SecondIndex);
    
    UFUNCTION(BlueprintCallable)
    void RepairAllSkills();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UtilitySkillInstances(TArray<USkill*> OldSkills);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NativeSkillInstances();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MainSkillInstances(TArray<USkill*> OldSkills);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSkill(ESkillSlot InSlot, int32 InSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkillInstanceInSlotActive(int32 InSlotIndex, ESkillSlot InSkillSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSkill(TSubclassOf<USkill> InClass) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSkillLevelChanged(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void HandleAbilityFinished(UAbilityBase* InAbility, const FGameplayTag& InAbilityTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USkill*> GetUtilitySkillInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUtilitySkillCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<USkill>> GetUtilitySkillClasses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkill* GetSkillInstanceInSlot(int32 InSlotIndex, ESkillSlot InSkillSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<USkill> GetSkillClassInSlot(int32 InSlotIndex, ESkillSlot InSkillSlot) const;
    
    UFUNCTION(BlueprintCallable)
    USkill* GetSkillByTag(const FGameplayTag& SkillTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkill* GetMappedSkillInstanceInSlot(int32 InSlotIndex, ESkillSlot InSkillSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<USkill> GetMappedSkillClassInSlot(int32 InSlotIndex, ESkillSlot InSkillSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USkill*> GetMainSkillInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMainSkillCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<USkill>> GetMainSkillClasses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexForSkillInstance(USkill* InInstance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexForSkill(TSubclassOf<USkill> InClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstAvailableIndexForSlot(ESkillSlot InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USkill*> GetBotFilteredUtilitySkills(bool bNotCooldown, bool bHasEnergy, bool bPassiveSkill, bool bToggleSkill, bool bFriendlyUseSkill) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USkill*> GetBotFilteredMainSkills(bool bNotCooldown, bool bHasEnergy, bool bPassiveSkill, bool bToggleSkill, bool bFriendlyUseSkill) const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateSkill(ESkillSlot InSlot, int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void ActivateSkill(ESkillSlot InSlot, int32 InSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void AbortSkillInSlot(int32 InSlotIndex, ESkillSlot InSkillSlot);
    
};

