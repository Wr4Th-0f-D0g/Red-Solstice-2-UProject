#include "MeshDestructionTypeEntry.h"

FMeshDestructionTypeEntry::FMeshDestructionTypeEntry() {
    this->Health = 0.00f;
    this->bCanBeDamaged = false;
    this->bReadGeometryFromTag = false;
    this->RangeToRemoveObjects = 0.00f;
}

