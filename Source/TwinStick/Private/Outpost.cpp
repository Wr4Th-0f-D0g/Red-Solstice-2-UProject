#include "Outpost.h"
#include "FMODAudioComponent.h"
#include "Net/UnrealNetwork.h"
#include "StrategyUpgradeComponent.h"

AOutpost::AOutpost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpgradeComponent = CreateDefaultSubobject<UStrategyUpgradeComponent>(TEXT("UpgradeComponent"));
    this->BuildAC = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("BuildAC"));
    this->BuildCompletedAC = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("BuildCompletedAC"));
    this->BuildSound = NULL;
    this->BuildCompletedSound = NULL;
    this->ReplicatedRegion = NULL;
    this->bOutpostInPreview = true;
    this->OutpostLevel = 0;
}

void AOutpost::OnRep_ReplicatedRegion() {
}

void AOutpost::OnRep_OutpostName() {
}

void AOutpost::OnRep_OutpostLevel() {
}

void AOutpost::OnRep_BuildTimer(const FStrategyTimer& Oldtimer) {
}

bool AOutpost::IsUnderConstruction() const {
    return false;
}

bool AOutpost::IsOperational() const {
    return false;
}

bool AOutpost::IsFullyUpgraded() const {
    return false;
}

void AOutpost::InvalidateBuildTimer() {
}

int32 AOutpost::GetUpgradeLevelFor(const FGameplayTag& InTag) const {
    return 0;
}

TMap<EAttribute, float> AOutpost::GetOutpostBaseAttributes(int32 InOutpostLevel) {
    return TMap<EAttribute, float>();
}

float AOutpost::GetIntelPerHourAdjacentRegion() const {
    return 0.0f;
}

float AOutpost::GetIntelPerHour() const {
    return 0.0f;
}

float AOutpost::GetIntelPerDayAdjacentRegion() const {
    return 0.0f;
}

float AOutpost::GetIntelPerDay() const {
    return 0.0f;
}

float AOutpost::GetConstructionProgress() const {
    return 0.0f;
}


bool AOutpost::CanHarvestDeployment() const {
    return false;
}

bool AOutpost::CanBuildOrUpgrade() const {
    return false;
}


void AOutpost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOutpost, ReplicatedRegion);
    DOREPLIFETIME(AOutpost, BuildTimer);
    DOREPLIFETIME(AOutpost, OutpostLevel);
}


