#include "MarsSplineActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

AMarsSplineActor::AMarsSplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->StartingMapActor = NULL;
    this->EndingMapActor = NULL;
    this->StartingSceneComponent = NULL;
    this->EndingSceneComponent = NULL;
    this->HeightOffsetAtEndpoints = 0.00f;
    this->HeightOffsetAtPeak = 30.00f;
    this->AngleStep = 4.00f;
    this->bDrawSpline = true;
    this->SplineComponent->SetupAttachment(RootComponent);
}

void AMarsSplineActor::GenerateSpline(float InAngleStep, float InStartHeight, float InPeakHeight, bool bDrawDebug) {
}

void AMarsSplineActor::GenerateDefaultSpline() {
}

void AMarsSplineActor::GenerateComponentSpline(float InAngleStep, float InStartHeight, float InPeakHeight, bool bDrawDebug) {
}


