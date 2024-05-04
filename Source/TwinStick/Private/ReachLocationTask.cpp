#include "ReachLocationTask.h"
#include "Templates/SubclassOf.h"

UReachLocationTask::UReachLocationTask() {
    this->ObjectiveTrackerClass = NULL;
}

UReachLocationTask* UReachLocationTask::StartReachLocationTask(UObject* WorldContextObject, FMissionLocation InLocation, FText MissionName, FReachLocationStatus ReachLocationParameters, TSubclassOf<UMissionObjectiveTracker> ObjectiveTracker) {
    return NULL;
}

void UReachLocationTask::HandleObjectiveReached() {
}

void UReachLocationTask::HandleItemPickedUp(AHeroCharacterBase* Instigator, AInventoryPickup* PickupItem, UItem* InventoryItem) {
}

void UReachLocationTask::HandleItemDropped(AInventoryPickup* PickupItem, UItem* InventoryItem) {
}


