#include "NavigationGridTestActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"

ANavigationGridTestActor::ANavigationGridTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->PathSpline = CreateDefaultSubobject<USplineComponent>(TEXT("PathSpline"));
    this->OtherTestActor = NULL;
    this->PathGenerator = NULL;
    this->PathSpline->SetupAttachment(RootComponent);
}


