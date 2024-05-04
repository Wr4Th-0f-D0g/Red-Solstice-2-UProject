#include "BiomassCenterActorTentacleTester.h"
#include "Components/SceneComponent.h"

ABiomassCenterActorTentacleTester::ABiomassCenterActorTentacleTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->AdditionalPlayerTimeDecrease.AddDefaulted(7);
    this->TentacleTestLocationComp = CreateDefaultSubobject<USceneComponent>(TEXT("DisplayTestLocationComp"));
    this->TentacleTestLocationComp->SetupAttachment(RootComponent);
}

void ABiomassCenterActorTentacleTester::DisplayTestTentacle() {
}


