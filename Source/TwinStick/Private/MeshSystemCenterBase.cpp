#include "MeshSystemCenterBase.h"

AMeshSystemCenterBase::AMeshSystemCenterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

bool AMeshSystemCenterBase::IsConnectedToCenter(AMeshSystemActorBase* TestedCenter, TArray<AMeshSystemLinkBase*>& ConnectingLinks) const {
    return false;
}


