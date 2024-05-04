#include "FindItemTask.h"

UFindItemTask::UFindItemTask() {
}

void UFindItemTask::HandleItemPickedUp(AHeroCharacterBase* Hero, AInventoryPickup* PickupItem, UItem* InventoryItem) {
}

void UFindItemTask::HandleItemDropped(AInventoryPickup* PickupItem, UItem* InventoryItem) {
}

void UFindItemTask::HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool bSuccess) {
}

UFindItemTask* UFindItemTask::GenerateFindItemObjective(UObject* WorldContextObject, FMissionLocation Location, FFindItemTaskParameters Parameters, FText MissionName) {
    return NULL;
}


