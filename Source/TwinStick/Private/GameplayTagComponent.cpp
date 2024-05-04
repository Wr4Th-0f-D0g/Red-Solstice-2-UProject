#include "GameplayTagComponent.h"
#include "Net/UnrealNetwork.h"

UGameplayTagComponent::UGameplayTagComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGameplayTagComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayTagComponent, MinimalReplicatedTagContainer);
}


