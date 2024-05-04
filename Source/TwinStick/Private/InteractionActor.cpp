#include "InteractionActor.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AInteractionActor::AInteractionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->InteractionActorRoot = (USceneComponent*)RootComponent;
    this->InteractionWidgetComponent = NULL;
    this->InteractionWheelComponent = NULL;
    this->InteractionTarget = NULL;
}

void AInteractionActor::SetInteractionTarget(AActor* InTarget) {
}

void AInteractionActor::OnRep_InteractionTarget(AActor* OldTarget) {
}

void AInteractionActor::OnRep_Hero() {
}





void AInteractionActor::HandleInteractionStarted(APawn* InteractionInstigator) {
}

void AInteractionActor::HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool Success) {
}

void AInteractionActor::HandleInteractionAborted(APawn* InteractionInstigator) {
}

FVector AInteractionActor::GetInteractionWidgetLocation() const {
    return FVector{};
}

void AInteractionActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInteractionActor, Hero);
    DOREPLIFETIME(AInteractionActor, InteractionTarget);
}


