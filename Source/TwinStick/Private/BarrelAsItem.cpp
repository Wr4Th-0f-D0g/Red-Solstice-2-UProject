#include "BarrelAsItem.h"

UBarrelAsItem::UBarrelAsItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreferedPitch = 0.30f;
    this->MaximumPitch = 0.70f;
    this->PathDrawStaticMesh = NULL;
    this->PathDrawMaterial = NULL;
    this->ThrowHorizontalVelocity = 0.00f;
    this->PathSpline = NULL;
}

void UBarrelAsItem::AdjustBarrelPath() {
}


