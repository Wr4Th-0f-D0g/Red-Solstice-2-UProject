#include "DestructibleActorBase.h"
#include "AttributeComponent.h"
#include "HealthComponent.h"

ADestructibleActorBase::ADestructibleActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Tags.AddDefaulted(2);
    this->bShouldRegisterWithNetworkManager = true;
    this->InteractableComp = NULL;
    this->bDisableIndicatorWidget = false;
    this->AttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("AttributeComponent"));
    this->bIsHovered = false;
    this->InteractionWidgetClass = NULL;
    this->bDoNotRegisterStatic = false;
    this->ArmorComponent = NULL;
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
}

void ADestructibleActorBase::WidgetDiscovery(AController* Controller, EIndicatorType IndicatorType) {
}

void ADestructibleActorBase::SetTeam(ESolsticeTeam NewTeam) {
}

void ADestructibleActorBase::HandleActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void ADestructibleActorBase::HandleActorDamaged(AActor* DamagedActor, const FDamage& DamageInfo) {
}

ESolsticeTeam ADestructibleActorBase::GetTeamEnum() const {
    return ESolsticeTeam::HeroMarine;
}



