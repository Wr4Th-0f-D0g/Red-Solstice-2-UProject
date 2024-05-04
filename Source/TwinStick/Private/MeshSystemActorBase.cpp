#include "MeshSystemActorBase.h"

AMeshSystemActorBase::AMeshSystemActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->DefaultNodeMaterial = NULL;
    this->ConnectionDistance = 200.00f;
    this->NodeComponentTag = TEXT("NodeComp");
}

bool AMeshSystemActorBase::IsInstance() const {
    return false;
}

void AMeshSystemActorBase::DrawNodeLocations() {
}

void AMeshSystemActorBase::Debug() {
}


