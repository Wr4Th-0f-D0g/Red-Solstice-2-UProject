#include "VaultActor.h"
#include "Components/BoxComponent.h"
#include "Components/SplineComponent.h"
#include "AttributeComponent.h"
#include "DamageComponent.h"
#include "HealthComponent.h"

AVaultActor::AVaultActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("VaultSpline"));
    this->Tags.AddDefaulted(2);
    this->bShouldRegisterWithNetworkManager = true;
    this->bDebugNavlinks = false;
    this->SplineComp = (USplineComponent*)RootComponent;
    this->NavlinkDirection = ENavLinkDirection::BothWays;
    this->NavlinkInterval = 1.00f;
    this->NavlinkMargin = 1.00f;
    this->BroadcastRadius = 1.00f;
    this->CooldownTime = 1.00f;
    this->BroadcastInterval = 1.00f;
    this->LinkNavigationArea = NULL;
    this->DisabledNavigationArea = NULL;
    this->VaultType = EVaultableType::EVaultType_None;
    this->bIsVaultable = true;
    this->AttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("AttributeComponent"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->ArmorComponent = NULL;
    this->DamageComp = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage"));
    this->DamagableArea = CreateDefaultSubobject<UBoxComponent>(TEXT("DamageBox"));
    this->DamageComp->SetupAttachment(RootComponent);
    this->DamagableArea->SetupAttachment(DamageComp);
}

void AVaultActor::ToggleLinks(bool bEnabled) {
}

void AVaultActor::SetTeam(ESolsticeTeam NewTeam) {
}

bool AVaultActor::IsDead() const {
    return false;
}

void AVaultActor::HandleActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void AVaultActor::HandleActorDamaged(AActor* DamagedActor, const FDamage& DamageInfo) {
}

float AVaultActor::GetHealthPercent() const {
    return 0.0f;
}

float AVaultActor::GetHealthMax() const {
    return 0.0f;
}

float AVaultActor::GetHealth() const {
    return 0.0f;
}

float AVaultActor::GetArmorPercent() const {
    return 0.0f;
}

float AVaultActor::GetArmorMax() const {
    return 0.0f;
}

int32 AVaultActor::GetArmorBlocksMax() const {
    return 0;
}

int32 AVaultActor::GetArmorBlocks() const {
    return 0;
}

float AVaultActor::GetArmor() const {
    return 0.0f;
}


