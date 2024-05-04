#include "MarineJetpackSkill.h"

UMarineJetpackSkill::UMarineJetpackSkill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DurationRangeA = 1.40f;
    this->DurationRangeB = 2.30f;
    this->CloseCurve = NULL;
    this->FarCurve = NULL;
    this->FarCurveDistance = 500.00f;
    this->SplineMesh = NULL;
    this->SplineMat = NULL;
    this->bDebugPath = false;
}


