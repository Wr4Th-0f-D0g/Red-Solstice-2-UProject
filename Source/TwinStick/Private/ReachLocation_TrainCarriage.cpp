#include "ReachLocation_TrainCarriage.h"
#include "Templates/SubclassOf.h"

UReachLocation_TrainCarriage::UReachLocation_TrainCarriage() {
    this->ObjectiveTrackerClass = NULL;
    this->TrainCarriage = NULL;
}

UReachLocation_TrainCarriage* UReachLocation_TrainCarriage::StartTrainCarriageReachLocationTask(UObject* WorldContextObject, FGameplayTag TrainCarriageTag, FMissionLocation InLocation, FText MissionName, FReachLocationCarriageStatus ReachLocationParameters, TSubclassOf<UMissionObjectiveTracker> ObjectiveTracker) {
    return NULL;
}

void UReachLocation_TrainCarriage::HandleObjectiveReached() {
}

void UReachLocation_TrainCarriage::HandleItemPickedUp(AHeroCharacterBase* Instigator, AInventoryPickup* PickupItem, UItem* InventoryItem) {
}

void UReachLocation_TrainCarriage::HandleItemDropped(AInventoryPickup* PickupItem, UItem* InventoryItem) {
}


