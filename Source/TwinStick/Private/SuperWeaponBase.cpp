#include "SuperWeaponBase.h"
#include "Net/UnrealNetwork.h"

ASuperWeaponBase::ASuperWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ColonyDataAsset = NULL;
    this->StrategyMissionGenerationTable = NULL;
    this->TimesFired = 0;
    this->bSuperWeaponActivated = false;
}


void ASuperWeaponBase::SuperWeaponFireCompleted(ARegion* TargetRegion) {
}

void ASuperWeaponBase::SetCooldownPercent(float CooldownPercent) {
}

void ASuperWeaponBase::OnRep_SuperWeaponActivated() {
}

void ASuperWeaponBase::MulticastFireSuperWeapon_Implementation(const TArray<ARegion*>& TargetRegions) {
}

bool ASuperWeaponBase::IsReadyToFire() const {
    return false;
}

bool ASuperWeaponBase::HasPrerequisitesToFire() const {
    return false;
}

int32 ASuperWeaponBase::GetTotalCooldownHours() const {
    return 0;
}

void ASuperWeaponBase::GetTargetingCasualtyEstimation(const TArray<FSuperWeaponInfestationDamage>& InTargetingData, int32& CivilianCasualties, int32& InfestedCasualties) const {
}

TArray<FSuperWeaponInfestationDamage> ASuperWeaponBase::GetSuperWeaponTargetSolutions(bool bOnlyContacted) const {
    return TArray<FSuperWeaponInfestationDamage>();
}

int32 ASuperWeaponBase::GetMaximumTargets() const {
    return 0;
}

TArray<FSuperWeaponInfestationDamage> ASuperWeaponBase::GetEstimatedInfestationDamage(ARegion* InRegion) const {
    return TArray<FSuperWeaponInfestationDamage>();
}

int32 ASuperWeaponBase::GetCooldownHours() const {
    return 0;
}

TArray<ARegion*> ASuperWeaponBase::GetAllRegions() const {
    return TArray<ARegion*>();
}

void ASuperWeaponBase::FireSuperWeapon(const TArray<ARegion*>& TargetRegions, bool bPlayEffects) {
}

void ASuperWeaponBase::ExitSuperweaponDisplay_Implementation() {
}

bool ASuperWeaponBase::CooldownReady() const {
    return false;
}

void ASuperWeaponBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASuperWeaponBase, LastFiringTime);
    DOREPLIFETIME(ASuperWeaponBase, bSuperWeaponActivated);
}


