#include "MonsterWeaponComponent.h"
#include "Net/UnrealNetwork.h"

UMonsterWeaponComponent::UMonsterWeaponComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bFirePressed = false;
}

void UMonsterWeaponComponent::SetFirePressed(bool NewPressed) {
}

void UMonsterWeaponComponent::OnRep_FirePressed() {
}

void UMonsterWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMonsterWeaponComponent, bFirePressed);
}


