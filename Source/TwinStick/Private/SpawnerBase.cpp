#include "SpawnerBase.h"
#include "Components/BillboardComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"

ASpawnerBase::ASpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->BillboardComp = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComp"));
    this->TextRenderer = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderer"));
    this->NumberOfTriggersBeforeDestroying = 1;
    this->NumMonstersPerTrigger = 0;
    this->ActiveMinDistance = 3000.00f;
    this->ActiveMaxDistance = 0.00f;
    this->bSpawnerDisabled = false;
    this->SpawnerType = ESpawnerType::EST_Default;
    this->SpawnerBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnerBounds"));
    this->BillboardComp->SetupAttachment(RootComponent);
    this->TextRenderer->SetupAttachment(RootComponent);
    this->SpawnerBounds->SetupAttachment(RootComponent);
}

void ASpawnerBase::SetSpawnerType(ESpawnerType InType) {
}

void ASpawnerBase::SetSpawnerState(ESpawnerState InState) {
}

void ASpawnerBase::SetSpawnerEnabled() {
}

void ASpawnerBase::SetSpawnerDisabled() {
}

bool ASpawnerBase::IsSpawnerDisabled() const {
    return false;
}

ESpawnerType ASpawnerBase::GetSpawnerType() const {
    return ESpawnerType::EST_Default;
}

ESpawnerState ASpawnerBase::GetSpawnerState() const {
    return ESpawnerState::ESS_Disabled;
}


