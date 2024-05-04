#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EAttribute.h"
#include "EBuffChangedOperation.h"
#include "EBuffDuration.h"
#include "SolsticeAttributeData.h"
#include "SolsticeAttributeModifier.h"
#include "SolsticeAttributeValue.h"
#include "SolsticeBuffContainer.h"
#include "Templates/SubclassOf.h"
#include "AttributeComponent.generated.h"

class APawn;
class UAbilityBase;
class USolsticeBuffBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UAttributeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBuffsReset);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBuffsChanged, USolsticeBuffBase*, ChangedBuff, EBuffChangedOperation, ChangeOperation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttributeValueChanged, EAttribute, ChangedAttribute, float, OldValue, float, NewValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAttributeCleanup);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSolsticeBuffContainer BuffContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuffsChanged OnBuffsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeValueChanged OnAttributeValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeCleanup OnAttributeCleanup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuffsReset OnBuffsReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttribute, FSolsticeAttributeData> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Attributes, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeAttributeValue> AttributeBases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USolsticeBuffBase*> ReplicatedBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USolsticeBuffBase*> SimulatedBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<USolsticeBuffBase*> TickedBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogAttributeChanges;
    
    UAttributeComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetBuffStacks(USolsticeBuffBase* Buff, int32 NumberOfStacks, int32 OldStacks);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    USolsticeBuffBase* SetBuffDurationSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, float Duration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    USolsticeBuffBase* SetBuffDurationAndGroupSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, float Duration, EBuffDuration DurationGroup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    USolsticeBuffBase* SetBuffDurationAndGroup(TSubclassOf<USolsticeBuffBase> BuffClass, float Duration, EBuffDuration DurationGroup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    USolsticeBuffBase* SetBuffDuration(TSubclassOf<USolsticeBuffBase> BuffClass, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSimulatedBuffsOfClass(TSubclassOf<USolsticeBuffBase> BuffClass);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSimulatedBuff(USolsticeBuffBase* Buff, int32 NumberOfStacks);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveReplicatedBuffSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, int32 NumberOfStacks);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32 NumberOfStacks);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGenericBuff(USolsticeBuffBase* Buff);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveBuffWithTag(FGameplayTag TagToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAllReplicatedBuffs();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Attributes();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ImportAttributes(const TMap<EAttribute, FSolsticeAttributeData> OtherAttributes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSimulatedBuffOfClassSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, int32& OutStacks, USolsticeBuffBase*& OutBuff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSimulatedBuffOfClass(TSubclassOf<USolsticeBuffBase> BuffClass, int32& OutStacks, USolsticeBuffBase*& OutBuff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSimulatedBuff(USolsticeBuffBase* Buff) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReplicatedBuffSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, int32& OutStacks, USolsticeBuffBase*& OutBuff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32& OutStacks, USolsticeBuffBase*& OutBuff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttribute(EAttribute Attribute) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleBuffStacksChanged(USolsticeBuffBase* UpdatedBuff, int32 NewStacks, int32 OldStacks);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSimulatedBuffStacks(USolsticeBuffBase* Buff) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USolsticeBuffBase* GetReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAttributeValues(const EAttribute Attribute, float& Base, float& Current) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttributeUnchecked(const EAttribute Attribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAttributeModifiers(const EAttribute Attribute, TArray<FSolsticeAttributeModifier>& Modifiers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllAttributeModifiers(TArray<FSolsticeAttributeModifier>& Modifiers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USolsticeBuffBase*> GetActiveBuffsForDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USolsticeBuffBase*> GetActiveBuffs() const;
    
    UFUNCTION(BlueprintCallable)
    USolsticeBuffBase* CreateSimulatedBuffSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, int32 NumberOfStacks, EBuffDuration DurationGroup, float Duration);
    
    UFUNCTION(BlueprintCallable)
    USolsticeBuffBase* CreateSimulatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32 NumberOfStacks, EBuffDuration DurationGroup, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void AddSimulatedBuff(USolsticeBuffBase* Buff, int32 NumberOfStacks, APawn* Instigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    USolsticeBuffBase* AddReplicatedBuffSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, int32 NumberOfStacks, APawn* Instigator, UAbilityBase* AbilityOwner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    USolsticeBuffBase* AddReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32 NumberOfStacks, APawn* Instigator, UAbilityBase* AbilityOwner);
    
    UFUNCTION(BlueprintCallable)
    USolsticeBuffBase* AddGenericBuff(FName BuffName);
    
};

