#include "MapSystemActorBounds.h"
#include "Components/BoxComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"

AMapSystemActorBounds::AMapSystemActorBounds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MainScene"));
    this->MapTexture = NULL;
    this->BoundingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundingBox"));
    this->Collection = NULL;
    this->MapSystemManager = NULL;
    this->SceneCapComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture"));
    this->bCreateSnapshotOnBeginPlay = false;
    this->SnapshotDelay = 0.00f;
    this->SnapshotRenderTarget = NULL;
    this->BoundsSize = 0.00f;
    this->MainScene = (USceneComponent*)RootComponent;
    this->LevelBoundsX = 40.00f;
    this->LevelBoundsY = 40.00f;
    this->LevelBoundsZ = 10.00f;
    this->BoundingBox->SetupAttachment(RootComponent);
    this->SceneCapComponent->SetupAttachment(RootComponent);
}

void AMapSystemActorBounds::CreateMapSnapshot(bool bNoDelay, TEnumAsByte<ESceneCaptureSource> CaptureSource) {
}


