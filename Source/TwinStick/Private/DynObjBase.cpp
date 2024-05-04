#include "DynObjBase.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "FMODAudioComponent.h"
#include "AttributeComponent.h"
#include "DamageComponent.h"
#include "HealthComponent.h"

ADynObjBase::ADynObjBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Root"));
    this->AttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("AttributeComponent"));
    this->ArmorComponent = NULL;
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->Health = 0.00f;
    this->IsDead = false;
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->DamageableArea = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageArea"));
    this->DeathFx = NULL;
    this->ObjectAC = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FireAC"));
    this->DeathSound = NULL;
    this->DeathForceFeedbackEffect = NULL;
    this->RootComponentRef = (USceneComponent*)RootComponent;
    this->DamageComponent->SetupAttachment(RootComponent);
    this->DamageableArea->SetupAttachment(DamageComponent);
    this->ObjectAC->SetupAttachment(RootComponent);
}

void ADynObjBase::HandleActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}


