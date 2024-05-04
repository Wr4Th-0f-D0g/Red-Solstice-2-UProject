#include "AttributeComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UAttributeComponent::UAttributeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLogAttributeChanges = true;
}

void UAttributeComponent::SetBuffStacks(USolsticeBuffBase* Buff, int32 NumberOfStacks, int32 OldStacks) {
}

USolsticeBuffBase* UAttributeComponent::SetBuffDurationSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, float Duration) {
    return NULL;
}

USolsticeBuffBase* UAttributeComponent::SetBuffDurationAndGroupSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, float Duration, EBuffDuration DurationGroup) {
    return NULL;
}

USolsticeBuffBase* UAttributeComponent::SetBuffDurationAndGroup(TSubclassOf<USolsticeBuffBase> BuffClass, float Duration, EBuffDuration DurationGroup) {
    return NULL;
}

USolsticeBuffBase* UAttributeComponent::SetBuffDuration(TSubclassOf<USolsticeBuffBase> BuffClass, float Duration) {
    return NULL;
}

void UAttributeComponent::RemoveSimulatedBuffsOfClass(TSubclassOf<USolsticeBuffBase> BuffClass) {
}

void UAttributeComponent::RemoveSimulatedBuff(USolsticeBuffBase* Buff, int32 NumberOfStacks) {
}

void UAttributeComponent::RemoveReplicatedBuffSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, int32 NumberOfStacks) {
}

void UAttributeComponent::RemoveReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32 NumberOfStacks) {
}

void UAttributeComponent::RemoveGenericBuff(USolsticeBuffBase* Buff) {
}

void UAttributeComponent::RemoveBuffWithTag(FGameplayTag TagToRemove) {
}

void UAttributeComponent::RemoveAllReplicatedBuffs() {
}

void UAttributeComponent::OnRep_Attributes() {
}

void UAttributeComponent::ImportAttributes(const TMap<EAttribute, FSolsticeAttributeData> OtherAttributes) {
}

bool UAttributeComponent::HasSimulatedBuffOfClassSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, int32& OutStacks, USolsticeBuffBase*& OutBuff) {
    return false;
}

bool UAttributeComponent::HasSimulatedBuffOfClass(TSubclassOf<USolsticeBuffBase> BuffClass, int32& OutStacks, USolsticeBuffBase*& OutBuff) {
    return false;
}

bool UAttributeComponent::HasSimulatedBuff(USolsticeBuffBase* Buff) const {
    return false;
}

bool UAttributeComponent::HasReplicatedBuffSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, int32& OutStacks, USolsticeBuffBase*& OutBuff) {
    return false;
}

bool UAttributeComponent::HasReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32& OutStacks, USolsticeBuffBase*& OutBuff) {
    return false;
}

bool UAttributeComponent::HasAttribute(EAttribute Attribute) const {
    return false;
}

void UAttributeComponent::HandleBuffStacksChanged(USolsticeBuffBase* UpdatedBuff, int32 NewStacks, int32 OldStacks) {
}

int32 UAttributeComponent::GetSimulatedBuffStacks(USolsticeBuffBase* Buff) const {
    return 0;
}

USolsticeBuffBase* UAttributeComponent::GetReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass) {
    return NULL;
}

bool UAttributeComponent::GetAttributeValues(const EAttribute Attribute, float& Base, float& Current) const {
    return false;
}

float UAttributeComponent::GetAttributeUnchecked(const EAttribute Attribute) const {
    return 0.0f;
}

bool UAttributeComponent::GetAttributeModifiers(const EAttribute Attribute, TArray<FSolsticeAttributeModifier>& Modifiers) const {
    return false;
}

bool UAttributeComponent::GetAllAttributeModifiers(TArray<FSolsticeAttributeModifier>& Modifiers) const {
    return false;
}

TArray<USolsticeBuffBase*> UAttributeComponent::GetActiveBuffsForDisplay() const {
    return TArray<USolsticeBuffBase*>();
}

TArray<USolsticeBuffBase*> UAttributeComponent::GetActiveBuffs() const {
    return TArray<USolsticeBuffBase*>();
}

USolsticeBuffBase* UAttributeComponent::CreateSimulatedBuffSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, int32 NumberOfStacks, EBuffDuration DurationGroup, float Duration) {
    return NULL;
}

USolsticeBuffBase* UAttributeComponent::CreateSimulatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32 NumberOfStacks, EBuffDuration DurationGroup, float Duration) {
    return NULL;
}

void UAttributeComponent::AddSimulatedBuff(USolsticeBuffBase* Buff, int32 NumberOfStacks, APawn* Instigator) {
}

USolsticeBuffBase* UAttributeComponent::AddReplicatedBuffSoft(TSoftClassPtr<USolsticeBuffBase> BuffClass, int32 NumberOfStacks, APawn* Instigator, UAbilityBase* AbilityOwner) {
    return NULL;
}

USolsticeBuffBase* UAttributeComponent::AddReplicatedBuff(TSubclassOf<USolsticeBuffBase> BuffClass, int32 NumberOfStacks, APawn* Instigator, UAbilityBase* AbilityOwner) {
    return NULL;
}

USolsticeBuffBase* UAttributeComponent::AddGenericBuff(FName BuffName) {
    return NULL;
}

void UAttributeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeComponent, BuffContainer);
    DOREPLIFETIME(UAttributeComponent, AttributeBases);
}


