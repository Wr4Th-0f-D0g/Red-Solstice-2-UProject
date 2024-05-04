#include "DeployItemTask.h"

UDeployItemTask::UDeployItemTask() {
}

void UDeployItemTask::HandleItemPickedUp(AHeroCharacterBase* Instigator, AInventoryPickup* PickupItem, UItem* InventoryItem) {
}

void UDeployItemTask::HandleItemDropped(AInventoryPickup* PickupItem, UItem* InventoryItem) {
}

void UDeployItemTask::HandleItemDeployed(UAbilityBase* InventoryItem, const FGameplayTag& AbilityTag) {
}

UDeployItemTask* UDeployItemTask::GenerateDeployItemObjective(UObject* WorldContextObject, FMissionLocation MissionLocation, FDeployItemTaskParameters DeployParameters) {
    return NULL;
}


