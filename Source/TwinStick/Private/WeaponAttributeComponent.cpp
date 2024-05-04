#include "WeaponAttributeComponent.h"

UWeaponAttributeComponent::UWeaponAttributeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UWeaponAttributeComponent::HandleBuffsChanged(USolsticeBuffBase* ChangedBuff, EBuffChangedOperation ChangeOperation) {
}

ASolsticeWeaponBase* UWeaponAttributeComponent::GetWeaponOwner() const {
    return NULL;
}


