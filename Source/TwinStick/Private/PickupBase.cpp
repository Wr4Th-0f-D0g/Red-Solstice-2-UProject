#include "PickupBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

APickupBase::APickupBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bIsHovered = false;
    this->InteractionWidgetClass = NULL;
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->PickupSound = NULL;
    this->PickupFailedSound = NULL;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBoxComponent"));
    this->InteractableComponent = NULL;
    this->InteractionAbortRange = 300.00f;
    this->InteractionStartRange = 100.00f;
    this->MeshComponent->SetupAttachment(RootComponent);
    this->CollisionBox->SetupAttachment(RootComponent);
}

void APickupBase::WidgetDiscovery(AController* Controller, EIndicatorType IndicatorType) {
}

void APickupBase::RemoveGameplayTags(FGameplayTagContainer InTags, bool bRemoveChildren, bool bAllowClientRemove) {
}

void APickupBase::RemoveGameplayTag(FGameplayTag InTag, bool bRemoveChildren, bool bAllowClientRemove) {
}

void APickupBase::HandleInteractionCompleted(AActor* UsableObject, const TArray<APawn*>& Instigators, bool bSuccess) {
}

void APickupBase::GetActorGameplayTags(FGameplayTagContainer& TagContainer) const {
}

void APickupBase::AddGameplayTags(FGameplayTagContainer InTags, bool bAllowClientAdd) {
}

void APickupBase::AddGameplayTag(FGameplayTag InTag, bool bAllowClientAdd) {
}


