#include "EnvironmentObjectBase.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NavModifierComponentSolstice.h"

AEnvironmentObjectBase::AEnvironmentObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Root"));
    this->Tags.AddDefaulted(2);
    this->InteractableComponent = NULL;
    this->bIsHovered = false;
    this->InteractionWidgetClass = NULL;
    this->InteractionAbortRange = 300.00f;
    this->InteractionStartRange = 50.00f;
    this->Root = (UCapsuleComponent*)RootComponent;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->NavModifier = CreateDefaultSubobject<UNavModifierComponentSolstice>(TEXT("NavModifierComponent"));
    this->StaticMesh->SetupAttachment(RootComponent);
}

void AEnvironmentObjectBase::WidgetDiscovery(AController* Controller, EIndicatorType IndicatorType) {
}

void AEnvironmentObjectBase::HandleInteractionStarted(APawn* InteractionInstigator) {
}

void AEnvironmentObjectBase::HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& InteractionInstigators, bool Success) {
}


