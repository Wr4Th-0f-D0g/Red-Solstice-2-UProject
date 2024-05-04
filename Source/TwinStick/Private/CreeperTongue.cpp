#include "CreeperTongue.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

ACreeperTongue::ACreeperTongue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh->SetupAttachment(RootComponent);
}


