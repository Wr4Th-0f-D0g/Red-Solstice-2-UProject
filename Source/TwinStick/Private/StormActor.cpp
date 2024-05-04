#include "StormActor.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AStormActor::AStormActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("StormRoot"));
    this->StormRoot = (USceneComponent*)RootComponent;
    this->Intensity = 0.00f;
}

void AStormActor::OnRep_Intensity() {
}


void AStormActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStormActor, Intensity);
}


