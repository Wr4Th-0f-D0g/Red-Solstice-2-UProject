#include "ConnectedMeshManagerBase.h"
#include "Templates/SubclassOf.h"

UConnectedMeshManagerBase::UConnectedMeshManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxConnectionDistance = 100.00f;
}

void UConnectedMeshManagerBase::OnLocationsMapped(ULocationManager* InLocManager) {
}

bool UConnectedMeshManagerBase::GetAllLinks(TArray<AMeshSystemLinkBase*>& OutLinks, TSubclassOf<AMeshSystemLinkBase> InLinkType) {
    return false;
}

bool UConnectedMeshManagerBase::GetAllCenters(TArray<AMeshSystemCenterBase*>& OutArray, TSubclassOf<AMeshSystemCenterBase> InCenterType) {
    return false;
}

bool UConnectedMeshManagerBase::AreElementsMapped() const {
    return false;
}


