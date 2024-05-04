#include "SafeZoneBase.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ASafeZoneBase::ASafeZoneBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TimerDuration = 6.00f;
    this->Supply1 = NULL;
    this->Supply2 = NULL;
    this->SupplyClass = NULL;
    this->RopeClass = NULL;
    this->HeightCheck = 500.00f;
    this->bSafeZoneCheckedIn = false;
    this->bActivated = false;
    this->bBlueprintTestActivationOverride = false;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->ArrowDropshipFlare = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowDropshipFlare"));
    this->RopeArrowUpParent = CreateDefaultSubobject<UArrowComponent>(TEXT("RopeArrowUpParent"));
    this->RopeArrowBottom = CreateDefaultSubobject<UArrowComponent>(TEXT("RopeArrowBottom"));
    this->RopeArrowUpHelper = CreateDefaultSubobject<UArrowComponent>(TEXT("RopeArrowUpHelper"));
    this->SupplySpawn1 = CreateDefaultSubobject<UArrowComponent>(TEXT("SupplySpawn1"));
    this->SupplySpawn2 = CreateDefaultSubobject<UArrowComponent>(TEXT("SupplySpawn2"));
    this->SpawnPoint1 = CreateDefaultSubobject<UChildActorComponent>(TEXT("SpawnPoint1"));
    this->SpawnPoint2 = CreateDefaultSubobject<UChildActorComponent>(TEXT("SpawnPoint2"));
    this->SpawnPoint3 = CreateDefaultSubobject<UChildActorComponent>(TEXT("SpawnPoint3"));
    this->SpawnPoint4 = CreateDefaultSubobject<UChildActorComponent>(TEXT("SpawnPoint4"));
    this->IsOnSafeZoneVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("IsOnSafeZoneVolume"));
    this->MeshComponent->SetupAttachment(RootComponent);
    this->ArrowDropshipFlare->SetupAttachment(RootComponent);
    this->RopeArrowUpParent->SetupAttachment(MeshComponent);
    this->RopeArrowBottom->SetupAttachment(RopeArrowUpParent);
    this->RopeArrowUpHelper->SetupAttachment(RopeArrowUpParent);
    this->SupplySpawn1->SetupAttachment(MeshComponent);
    this->SupplySpawn2->SetupAttachment(SupplySpawn1);
    this->SpawnPoint1->SetupAttachment(MeshComponent);
    this->SpawnPoint2->SetupAttachment(MeshComponent);
    this->SpawnPoint3->SetupAttachment(MeshComponent);
    this->SpawnPoint4->SetupAttachment(MeshComponent);
    this->IsOnSafeZoneVolume->SetupAttachment(RootComponent);
}

void ASafeZoneBase::SpawnSupplies() {
}


void ASafeZoneBase::PrepareSafeZone() {
}

void ASafeZoneBase::OnRep_bBlueprintTestActivationOverride() {
}

void ASafeZoneBase::OnRep_bActivated() {
}

bool ASafeZoneBase::IsLocationOnSafeZone(const FVector Point) {
    return false;
}

int32 ASafeZoneBase::GetAlivePlayerCount() {
    return 0;
}

void ASafeZoneBase::AdjustVisibility() {
}

void ASafeZoneBase::AdjustSafeZoneLocation() {
}

void ASafeZoneBase::ActivateSafeZone() {
}

void ASafeZoneBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASafeZoneBase, bActivated);
    DOREPLIFETIME(ASafeZoneBase, bBlueprintTestActivationOverride);
}


