#include "BurrowingMonsterComponentBase.h"

UBurrowingMonsterComponentBase::UBurrowingMonsterComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableBurrowResonator = false;
    this->bGrabClosestBiomass = false;
    this->HomeBiomass = NULL;
    this->UnBurrowingDelay = -1.00f;
    this->BurrowMontage = NULL;
    this->UnburrowMontage = NULL;
    this->MonsterFloorZ = 0.00f;
    this->bSpawnBurrowed = false;
    this->bCanBurrowUnburrow = false;
    this->MontageFinishTime = 0.00f;
    this->UnburrowParticle = NULL;
    this->BurrowParticle = NULL;
    this->UnburrowZOffset = 0.00f;
    this->bDebugBurrowing = false;
    this->TraceDebugType = ESolsticeDebugTraceType::Duration;
    this->DebugLineDuration = 1.00f;
}

bool UBurrowingMonsterComponentBase::Unburrow() {
    return false;
}

bool UBurrowingMonsterComponentBase::TraceToFindSurface(FVector& OutSurfacePoint, FHitResult& TraceResult) const {
    return false;
}



void UBurrowingMonsterComponentBase::NetMulticast_ToggleBurrowedParticle_Implementation(bool bEnabled) {
}

void UBurrowingMonsterComponentBase::NetMulticast_ShowHoleParticle_Implementation(bool bUnburrowing, const FVector& HoleLocation) {
}

void UBurrowingMonsterComponentBase::MonsterKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}


bool UBurrowingMonsterComponentBase::HasClearUnburrowRadius(const FVector& Location) const {
    return false;
}

EBurrowingState UBurrowingMonsterComponentBase::GetBurrowingState() const {
    return EBurrowingState::UnBurrowed;
}

bool UBurrowingMonsterComponentBase::CanUnburrowSafely() const {
    return false;
}

bool UBurrowingMonsterComponentBase::CanEnterUnBurrowState_Implementation() const {
    return false;
}

bool UBurrowingMonsterComponentBase::CanEnterBurrowState_Implementation() const {
    return false;
}

bool UBurrowingMonsterComponentBase::Burrow() {
    return false;
}


