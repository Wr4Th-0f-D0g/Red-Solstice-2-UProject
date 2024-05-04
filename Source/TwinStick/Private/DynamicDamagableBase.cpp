#include "DynamicDamagableBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "AttributeComponent.h"
#include "DamageComponent.h"
#include "HealthComponent.h"

ADynamicDamagableBase::ADynamicDamagableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Tags.AddDefaulted(2);
    this->AttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("AttributeComponent"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->ArmorComponent = NULL;
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->Root = (USceneComponent*)RootComponent;
    this->DamagableArea = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageBox"));
    this->DamageComponent->SetupAttachment(RootComponent);
    this->DamagableArea->SetupAttachment(DamageComponent);
}

void ADynamicDamagableBase::SetTeam(ESolsticeTeam NewTeam) {
}

bool ADynamicDamagableBase::IsDead() const {
    return false;
}

void ADynamicDamagableBase::HandleActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void ADynamicDamagableBase::HandleActorDamaged(AActor* DamagedActor, const FDamage& DamageInfo) {
}

float ADynamicDamagableBase::GetHealthPercent() const {
    return 0.0f;
}

float ADynamicDamagableBase::GetHealthMax() const {
    return 0.0f;
}

float ADynamicDamagableBase::GetHealth() const {
    return 0.0f;
}

float ADynamicDamagableBase::GetArmorPercent() const {
    return 0.0f;
}

float ADynamicDamagableBase::GetArmorMax() const {
    return 0.0f;
}

int32 ADynamicDamagableBase::GetArmorBlocksMax() const {
    return 0;
}

int32 ADynamicDamagableBase::GetArmorBlocks() const {
    return 0;
}

float ADynamicDamagableBase::GetArmor() const {
    return 0.0f;
}


