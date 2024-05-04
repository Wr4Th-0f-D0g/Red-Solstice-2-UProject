#include "LocalInteractionWidgetActor.h"
#include "Components/SceneComponent.h"
#include "InteractableWidgetComponent.h"

ALocalInteractionWidgetActor::ALocalInteractionWidgetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->InteractableWidgetComponent = CreateDefaultSubobject<UInteractableWidgetComponent>(TEXT("InteractableWidgetComp"));
    this->ExplosivePreviewWidgetComponent = CreateDefaultSubobject<UInteractableWidgetComponent>(TEXT("ExplosivePreviewWidget"));
    this->CurrentExplosivePreview = NULL;
    this->CurrentHoveredActor = NULL;
    this->InteractableWidgetComponent->SetupAttachment(RootComponent);
    this->ExplosivePreviewWidgetComponent->SetupAttachment(RootComponent);
}

void ALocalInteractionWidgetActor::UnHoveredInteractable(AActor* OldInteractable) {
}

void ALocalInteractionWidgetActor::ToggleExplosivePreview(AActor* ExplosiveActor, bool bEnable) {
}

void ALocalInteractionWidgetActor::HoveredInteractable(AActor* InteractableActor) {
}

void ALocalInteractionWidgetActor::HandleInteractionComplete(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool bSuccess) {
}

void ALocalInteractionWidgetActor::HandleExplosiveDestroyed(AExplosiveActorBase* ExplosiveActor) {
}


