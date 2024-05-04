#include "MissionMarkerActorBase.h"
#include "Components/SceneComponent.h"

AMissionMarkerActorBase::AMissionMarkerActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}


