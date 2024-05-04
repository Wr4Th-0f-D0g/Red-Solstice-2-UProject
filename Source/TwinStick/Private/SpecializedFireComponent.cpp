#include "SpecializedFireComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

USpecializedFireComponent::USpecializedFireComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FireModeSuffix = TEXT("_Specialized");
    this->GrantedAbilityClass = NULL;
    this->GrantedAbility = NULL;
    this->bAIRequiresFriendlyCheck = false;
}

void USpecializedFireComponent::SetGrantedAbility(UAbilityBase* InAbility) {
}

void USpecializedFireComponent::OnRep_GrantedAbility() {
}

void USpecializedFireComponent::HandleAbilityUsed(UAbilityBase* InAbility, const FGameplayTag& AbilityTag) {
}

void USpecializedFireComponent::CreateNewGrantedAbility(TSubclassOf<UAbilityBase> AbilityClass) {
}

void USpecializedFireComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpecializedFireComponent, GrantedAbility);
}


