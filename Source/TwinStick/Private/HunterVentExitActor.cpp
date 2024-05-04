#include "HunterVentExitActor.h"
#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AttributeComponent.h"
#include "DamageComponent.h"
#include "HealthComponent.h"

AHunterVentExitActor::AHunterVentExitActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->MidPointArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("MidPointArrow"));
    this->ExitPointArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ExitPointArrow"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->AttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("AttributeComponent"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->ExitType = EHunterExitType::FromSide;
    this->MidPointArrow->SetupAttachment(RootComponent);
    this->ExitPointArrow->SetupAttachment(RootComponent);
    this->StaticMesh->SetupAttachment(RootComponent);
    this->Billboard->SetupAttachment(RootComponent);
    this->DamageComponent->SetupAttachment(RootComponent);
}


