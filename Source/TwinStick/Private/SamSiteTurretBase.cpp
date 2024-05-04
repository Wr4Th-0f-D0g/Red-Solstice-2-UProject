#include "SamSiteTurretBase.h"
#include "Components/BoxComponent.h"
#include "AttributeComponent.h"
#include "DamageComponent.h"
#include "HealthComponent.h"

ASamSiteTurretBase::ASamSiteTurretBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Tags.AddDefaulted(2);
    this->AttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("AttributeComponent"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->ArmorComponent = NULL;
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->DamagableArea = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageBox"));
    this->DamageComponent->SetupAttachment(RootComponent);
    this->DamagableArea->SetupAttachment(DamageComponent);
}

bool ASamSiteTurretBase::IsDead() const {
    return false;
}

void ASamSiteTurretBase::HandleActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void ASamSiteTurretBase::HandleActorDamaged(AActor* DamagedActor, const FDamage& DamageInfo) {
}

float ASamSiteTurretBase::GetHealthPercent() const {
    return 0.0f;
}

float ASamSiteTurretBase::GetHealthMax() const {
    return 0.0f;
}

float ASamSiteTurretBase::GetHealth() const {
    return 0.0f;
}

float ASamSiteTurretBase::GetArmorPercent() const {
    return 0.0f;
}

float ASamSiteTurretBase::GetArmorMax() const {
    return 0.0f;
}

int32 ASamSiteTurretBase::GetArmorBlocksMax() const {
    return 0;
}

int32 ASamSiteTurretBase::GetArmorBlocks() const {
    return 0;
}

float ASamSiteTurretBase::GetArmor() const {
    return 0.0f;
}


