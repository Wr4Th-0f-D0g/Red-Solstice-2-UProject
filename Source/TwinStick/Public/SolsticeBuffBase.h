#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTaskOwnerInterface.h"
#include "AspectInterface.h"
#include "AspectValueSet.h"
#include "BuffDataRow.h"
#include "BuffDescriptionRow.h"
#include "Damage.h"
#include "EAttribute.h"
#include "EBuffDuration.h"
#include "EDurationExpiredPolicy.h"
#include "SolsticeAttributeModifier.h"
#include "Templates/SubclassOf.h"
#include "SolsticeBuffBase.generated.h"

class AActor;
class APawn;
class ASolsticeWeaponBase;
class UAbilityBase;
class UDataTable;
class UFMODAudioComponent;
class UFMODEvent;
class UGameplayTask;
class UParticleSystem;
class UParticleSystemComponent;
class USolsticeBuffBase;
class UTexture2D;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeBuffBase : public UObject, public IAspectInterface, public IGameplayTagAssetInterface, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStacksChanged, USolsticeBuffBase*, Buff, int32, NewStacks, int32, PrevStacks);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayTask*> ActiveTasks;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BuffDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BuffDescriptionRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BuffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAilment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSkipOnBatchRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDurationExpiredPolicy DurationExpiredPolicy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAttributeModifier> FixedAttributeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAttributeModifier> StackableAttributeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAttributeModifier> AttributeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DurationResets, meta=(AllowPrivateAccess=true))
    uint8 DurationResets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APawn* Instigator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Duration, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EBuffDuration DurationGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingTickDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumStacks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStacksChanged OnStacksChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ExpectedRefreshInterval;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRegisterDamageFunction;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilityBase> AbilityOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAspectValueSet AspectValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GrantedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ClearedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotRemoveGrantedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolTipText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DurationDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AppliedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TickEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ActiveEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExpiredEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StacksChangedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* AppliedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* TickSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ActiveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ExpiredSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AppliedEffectReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ActiveEffectReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* StacksChangedEffectReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* ActiveSoundReference;
    
    USolsticeBuffBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterWeaponDamageMod();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldRegisterWeaponDamageMod(ASolsticeWeaponBase* Weapon) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDurationGroup(EBuffDuration InDurationGroup, float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetDuration(float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetBuffToolTip(const FText& NewToolTipText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterWeaponDamageMod();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEngineTick(float DeltaTIme);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBuffTick();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DurationResets();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Duration(float OldDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FDamage ModifyWeaponDamage(const FDamage& InDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FDamage ModifyDamage(const FDamage& InDamage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeAttributeModifier> GetStackableAttributeModifiers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingTickDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumStacks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeAttributeModifier> GetFixedAttributeModifiers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBuffDuration GetDurationGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentStacks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBuffDescriptionRow GetBuffDescriptionRowFor(TSubclassOf<USolsticeBuffBase> InBuffClass, bool& bRowExists);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBuffDataRow GetBuffDataRowFor(TSubclassOf<USolsticeBuffBase> InBuffClass, bool& bRowExists);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSolsticeAttributeModifier> GetAttributeModifiersFor(TSubclassOf<USolsticeBuffBase> InBuffClass, int32 InStacks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeAttributeModifier> GetAttributeModifiers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanApplyBuff(AActor* Target, int32& OutMaxStacksOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuffStacksChanged(int32 NewStacks, int32 OldStacks);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuffRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuffApplied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AffectsAttribute(EAttribute Attribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AffectsAnyAttribute() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

