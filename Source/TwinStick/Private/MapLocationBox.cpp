#include "MapLocationBox.h"

AMapLocationBox::AMapLocationBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinTime = 0.10f;
    this->MaxTime = 0.30f;
    this->BoxComp = NULL;
}

void AMapLocationBox::TimerOverlapTick() {
}




