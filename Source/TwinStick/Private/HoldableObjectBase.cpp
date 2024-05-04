#include "HoldableObjectBase.h"

AHoldableObjectBase::AHoldableObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
}


