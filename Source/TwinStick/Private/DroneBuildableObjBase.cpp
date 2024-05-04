#include "DroneBuildableObjBase.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FMODAudioComponent.h"

ADroneBuildableObjBase::ADroneBuildableObjBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->TotalUnitsRequiredToBuild = 0;
    this->BuiltUnits = 0.00f;
    this->MeshComponent = (UStaticMeshComponent*)RootComponent;
    this->CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollisionComponent"));
    this->BuildObjectAC = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("DroneAC"));
    this->BuildCompleteSound = NULL;
    this->CollisionBox->SetupAttachment(RootComponent);
    this->BuildObjectAC->SetupAttachment(RootComponent);
}


void ADroneBuildableObjBase::UpdateBuildProgress() {
}

void ADroneBuildableObjBase::SetMeshComponent(UStaticMeshComponent* Val) {
}

void ADroneBuildableObjBase::SetBuiltObjectName(FText Val) {
}



void ADroneBuildableObjBase::HandleBuildComplete() {
}

int32 ADroneBuildableObjBase::GetTotalUnitsRequiredToBuild() const {
    return 0;
}

UStaticMeshComponent* ADroneBuildableObjBase::GetMeshComponent() const {
    return NULL;
}

bool ADroneBuildableObjBase::GetIsBuilt() const {
    return false;
}

FVector ADroneBuildableObjBase::GetCollisionSize() {
    return FVector{};
}

float ADroneBuildableObjBase::GetBuiltUnits() const {
    return 0.0f;
}

FText ADroneBuildableObjBase::GetBuiltObjectName() const {
    return FText::GetEmpty();
}

bool ADroneBuildableObjBase::Build(float aUnits) {
    return false;
}


