#include "BarrelProximityDestrComponent.h"

UBarrelProximityDestrComponent::UBarrelProximityDestrComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TestLength = 50.00f;
    this->TestZIncrease = 50.00f;
    this->DamagePercent = 0.15f;
    this->TestTime = 1.00f;
}


