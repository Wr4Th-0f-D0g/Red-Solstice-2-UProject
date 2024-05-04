#include "MeshSystemLinkBase.h"
#include "Components/StaticMeshComponent.h"
#include "MeshSystemNodeComponent.h"

AMeshSystemLinkBase::AMeshSystemLinkBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));
    this->Tags.AddDefaulted(1);
    this->Node1 = CreateDefaultSubobject<UMeshSystemNodeComponent>(TEXT("Node1"));
    this->Node2 = CreateDefaultSubobject<UMeshSystemNodeComponent>(TEXT("Node2"));
    this->bDimensionlessConnection = false;
    this->Node1->SetupAttachment(RootComponent);
    this->Node2->SetupAttachment(RootComponent);
}

bool AMeshSystemLinkBase::IsFullyConnected() const {
    return false;
}


