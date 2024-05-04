#include "ISM_ConverterActor.h"
#include "Components/SceneComponent.h"

AISM_ConverterActor::AISM_ConverterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ISM Root"));
    this->Tags.AddDefaulted(1);
    this->MinNumberOfActorsToConvert = 8;
}

void AISM_ConverterActor::ToggleISMs() {
}

void AISM_ConverterActor::ToggleConvertedActors() {
}

void AISM_ConverterActor::ReplaceISMsWithStaticMeshActors() {
}

bool AISM_ConverterActor::AddInstancedMesh(AStaticMeshActor* StaticMeshActor, const FTransform& InstanceTransform) {
    return false;
}


