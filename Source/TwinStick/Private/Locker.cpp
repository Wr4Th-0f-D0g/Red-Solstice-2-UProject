#include "Locker.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FMODAudioComponent.h"
#include "InteractableComponent.h"

ALocker::ALocker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Tags.AddDefaulted(2);
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("InteractableComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->LockerAC = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("LockerAudioComponent"));
    this->LockerSound = NULL;
    this->LockerFailedSound = NULL;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->LockerType = ELockerType::ELT_None;
    this->LockerResolvedClass = NULL;
    this->InteractableComponent->SetupAttachment(RootComponent);
    this->MeshComponent->SetupAttachment(RootComponent);
    this->LockerAC->SetupAttachment(RootComponent);
}

void ALocker::RollLockerLoot() {
}


bool ALocker::LootLocker(APawn* InteractionInstigator) {
    return false;
}



FText ALocker::GetPickupNameText() const {
    return FText::GetEmpty();
}


