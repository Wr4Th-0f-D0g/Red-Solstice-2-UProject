#include "ForceOfNature.h"
#include "Components/SceneComponent.h"

AForceOfNature::AForceOfNature(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ForceOfNatureRoot"));
    this->ForceOfNatureRoot = (USceneComponent*)RootComponent;
}


