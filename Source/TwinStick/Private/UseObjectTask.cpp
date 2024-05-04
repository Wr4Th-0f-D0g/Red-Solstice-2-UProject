#include "UseObjectTask.h"

UUseObjectTask::UUseObjectTask() {
}

UUseObjectTask* UUseObjectTask::StartUseItemTask(UObject* WorldContextObject, FText MissionName, FUseItemParamaters Parameters) {
    return NULL;
}

void UUseObjectTask::HandleItemPickedUp(AInventoryPickup* PickupItem, UItem* InventoryItem) {
}

void UUseObjectTask::HandleItemActivated(AActor* UsableObject, const TArray<APawn*>& Instigators, bool bSuccess) {
}

void UUseObjectTask::HandleDummyItemActivated(AActor* UsableObject, const TArray<APawn*>& Instigators, bool bSuccess) {
}

void UUseObjectTask::HandleActorEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


