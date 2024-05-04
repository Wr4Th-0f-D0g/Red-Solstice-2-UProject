#include "InsertedPathfindingCenter.h"
#include "MeshSystemNodeComponent.h"

AInsertedPathfindingCenter::AInsertedPathfindingCenter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->Node1 = CreateDefaultSubobject<UMeshSystemNodeComponent>(TEXT("Node1"));
    this->Node2 = CreateDefaultSubobject<UMeshSystemNodeComponent>(TEXT("Node2"));
}


