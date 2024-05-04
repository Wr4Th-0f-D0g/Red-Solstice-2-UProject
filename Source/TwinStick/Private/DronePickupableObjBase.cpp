#include "DronePickupableObjBase.h"
#include "Components/StaticMeshComponent.h"

ADronePickupableObjBase::ADronePickupableObjBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->MeshComponent = (UStaticMeshComponent*)RootComponent;
    this->NumUses = 0;
    this->ObjectAC = NULL;
    this->UseActivatedSound = NULL;
}

void ADronePickupableObjBase::UseObject(AHeroCharacterBase* aCallingHero) {
}

void ADronePickupableObjBase::SetNumUses(int32 Val) {
}

FText ADronePickupableObjBase::GetObjectName() const {
    return FText::GetEmpty();
}

int32 ADronePickupableObjBase::GetNumUses() const {
    return 0;
}

UStaticMeshComponent* ADronePickupableObjBase::GetMeshComponent() const {
    return NULL;
}


