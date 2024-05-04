#include "EmergencyOrderSystem.h"
#include "Components/SceneComponent.h"

AEmergencyOrderSystem::AEmergencyOrderSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HasrocRoot"));
    this->EmergencyOrderSystemRoot = (USceneComponent*)RootComponent;
}


