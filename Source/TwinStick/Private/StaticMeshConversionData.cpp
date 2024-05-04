#include "StaticMeshConversionData.h"

FStaticMeshConversionData::FStaticMeshConversionData() {
    this->StaticMesh = NULL;
    this->CollisionObjectType = ECC_WorldStatic;
    this->bCanAffectNavigation = false;
}

