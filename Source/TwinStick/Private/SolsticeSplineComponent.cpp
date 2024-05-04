#include "SolsticeSplineComponent.h"

USolsticeSplineComponent::USolsticeSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForceCalculateBounds = false;
    this->bForceBoundsToMapSize = false;
    this->bFastSplineCalc = false;
}


