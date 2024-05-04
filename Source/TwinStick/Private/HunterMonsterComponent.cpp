#include "HunterMonsterComponent.h"
#include "Net/UnrealNetwork.h"

UHunterMonsterComponent::UHunterMonsterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bHunterIsRightOfDoor = false;
    this->RepositionDelayMin = 0.00f;
    this->RepositionDelayMax = 0.00f;
    this->RepositionDelaySuppressedMin = 0.00f;
    this->RepositionDelaySuppressedMax = 0.00f;
    this->bDoorHunter = false;
    this->BoostIntervals = 0;
    this->BoostIntervalTime = 0;
    this->BoostSpeedIncreasePerInterval = 5.00f;
    this->BoostAnimationIncreaseInterval = 0.03f;
    this->BaseAggroIncreasePerInterval = 10.00f;
    this->DecayTimerTime = 0.10f;
    this->BoostBuff = NULL;
    this->bDisableAggro = false;
    this->ClearAggroCooldownTime = 1.00f;
    this->bUseNoiseAggro = false;
    this->bUseDamageAggro = false;
    this->CurrentHunterState = EHunterMainState::None;
    this->PrevHunterState = EHunterMainState::None;
    this->CurrentHuntingState = EHunterHunting::None;
    this->PrevHuntingState = EHunterHunting::None;
    this->CurrentEvadeState = EHunterEvade::None;
    this->PrevEvadeState = EHunterEvade::None;
    this->HunterAttack = EHunterAttack::None;
    this->HunterIdleState = EHunterIdleState::None;
    this->MarineObjectChannel = ObjectTypeQuery1;
    this->MaxDistanceFar = 0.00f;
    this->MaxDistanceMedium = 0.00f;
    this->MaxDistanceClose = 0.00f;
    this->MinDistanceFar = 0.00f;
    this->MinDistanceMedium = 0.00f;
    this->MinDistanceClose = 0.00f;
    this->HunterLocationTolerance = 0.00f;
    this->DoorHideHunterDistance = 0.00f;
    this->CurrentRoomAggro = 0.00f;
    this->CurrentDamageAggro = 0.00f;
    this->CurrentHearingAggro = 0.00f;
    this->HunterBaseAggro = 0.00f;
    this->RoomAggroMultiplier = 0.00f;
    this->SoundAggroMultiplier = 0.00f;
    this->DamageAggroMultiplier = 0.00f;
    this->RoomAggroDecayAmount = 0.00f;
    this->DamageAggroDecayAmount = 0.00f;
    this->HearingAggroDecayAmount = 0.00f;
    this->CurrentCustomAggro = 0.00f;
    this->CustomAggroDecayAmount = 0.00f;
    this->MaxHunterAggro = 10000.00f;
    this->bHunterSpotted = false;
    this->HunterVanishParticle = NULL;
    this->bHunterAttachedToDoor = false;
    this->AttachedDoor = NULL;
    this->SuppressionIncrease = 0.00f;
    this->SuppressionBuff = NULL;
    this->SuppressionBuffClass = NULL;
    this->CurrentSearchDistance = EHunterSearchDistance::Far;
    this->bUseAggroForSpotting = false;
    this->ChosenVent = NULL;
    this->ChosenExit = NULL;
    this->ReplicatedFlags = 0;
}

void UHunterMonsterComponent::ToggleHunterMesh(bool bNewHidden, bool bShowParticle) {
}

void UHunterMonsterComponent::ToggleHunterCollisions(bool bEnabled) {
}

void UHunterMonsterComponent::SpottedCheck() {
}

void UHunterMonsterComponent::SetHunterInVentilation(bool bInVentilation) {
}

void UHunterMonsterComponent::SetHunterInsideVent(bool bInsideVent) {
}

void UHunterMonsterComponent::SetHunterIdleState(EHunterIdleState NewIdle) {
}

void UHunterMonsterComponent::SetHunterAttack(EHunterAttack NewAttack) {
}

void UHunterMonsterComponent::SetHunterAtDoor(ADoorBase* Door) {
}

void UHunterMonsterComponent::SetHunterAggroMaxClamp(float InMaxAggro) {
}

void UHunterMonsterComponent::SetGravityScaleDisabled(bool bNewDisabled, bool bMulticast) {
}

void UHunterMonsterComponent::ServerSetLocation_Implementation(FVector_NetQuantize Location) {
}
bool UHunterMonsterComponent::ServerSetLocation_Validate(FVector_NetQuantize Location) {
    return true;
}

bool UHunterMonsterComponent::SelectBestLocation(FVector& OutLoc) {
    return false;
}

void UHunterMonsterComponent::RemoveHunterAggro(float AggroToRemove) {
}

bool UHunterMonsterComponent::ProjectLocationNavMesh(const FVector& InLocation, FVector& OutLocation) {
    return false;
}

void UHunterMonsterComponent::OnRep_ReplicatedFlags(uint8 OldFlags) {
}

void UHunterMonsterComponent::OnRep_HunterRightOfDoor() {
}

void UHunterMonsterComponent::OnRep_AttachedDoor() {
}

void UHunterMonsterComponent::OnPerceptionDetectedTarget(AActor* Actor, FAIStimulus Stimulus) {
}




void UHunterMonsterComponent::MulticastSetLocation_Implementation(FVector_NetQuantize Location) {
}

void UHunterMonsterComponent::MulticastSetGravityScaleDisabled_Implementation(bool bNewDisabled) {
}

void UHunterMonsterComponent::MulticastParticleLocation_Implementation(UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod) {
}

// void UHunterMonsterComponent::MulticastParticleAttached_Implementation(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod) {
// }

void UHunterMonsterComponent::IncreaseSuppression() {
}

void UHunterMonsterComponent::HunterDoorCheck() {
}

void UHunterMonsterComponent::GotoHuntingState(EHunterHunting NewHuntingState) {
}

void UHunterMonsterComponent::GotoHunterMainState(EHunterMainState NewMainState) {
}

void UHunterMonsterComponent::GotoEvadeState(EHunterEvade NewEvadeState) {
}

FVector UHunterMonsterComponent::GetRandomPointInMarkerExtents(const FLocationInfo& LocInfo) {
    return FVector{};
}

EHunterHunting UHunterMonsterComponent::GetPrevHuntingState() const {
    return EHunterHunting::None;
}

EHunterMainState UHunterMonsterComponent::GetPrevHunterMainState() const {
    return EHunterMainState::None;
}

EHunterEvade UHunterMonsterComponent::GetPrevEvadeState() const {
    return EHunterEvade::None;
}

bool UHunterMonsterComponent::GetLocInfoFromZones(const TArray<AZoneActor*>& Zones, const FName& Tag, FLocationInfo& OutLocInfo, EHunterSearchDistance SearchDistance, bool bSort, bool bWithPawns) {
    return false;
}

float UHunterMonsterComponent::GetHunterTotalAggro() const {
    return 0.0f;
}

EHunterIdleState UHunterMonsterComponent::GetHunterIdleState() const {
    return EHunterIdleState::None;
}

EHunterAttack UHunterMonsterComponent::GetHunterAttack() const {
    return EHunterAttack::None;
}

EHunterHunting UHunterMonsterComponent::GetCurrentHuntingState() const {
    return EHunterHunting::None;
}

EHunterMainState UHunterMonsterComponent::GetCurrentHunterMainState() const {
    return EHunterMainState::None;
}

EHunterEvade UHunterMonsterComponent::GetCurrentEvadeState() const {
    return EHunterEvade::None;
}

TArray<FLocationInfo> UHunterMonsterComponent::GetAllCorridors() const {
    return TArray<FLocationInfo>();
}

bool UHunterMonsterComponent::FindLocationForReposition(bool& bNoOneInZones) {
    return false;
}

void UHunterMonsterComponent::DecayAggro() {
}

void UHunterMonsterComponent::ClearPlayersTarget() {
}

void UHunterMonsterComponent::ClearAllHunterAggro() {
}

EHunterHunting UHunterMonsterComponent::ChooseReposition() {
    return EHunterHunting::None;
}

EHunterEvade UHunterMonsterComponent::ChooseEvadeType() {
    return EHunterEvade::None;
}

EHunterAttack UHunterMonsterComponent::ChooseAttack(bool bRanged, bool bExecute) {
    return EHunterAttack::None;
}



void UHunterMonsterComponent::BoostInterval() {
}

void UHunterMonsterComponent::AllowAggro() {
}

void UHunterMonsterComponent::AddHunterAggro(float InAggro) {
}

void UHunterMonsterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHunterMonsterComponent, bHunterIsRightOfDoor);
    DOREPLIFETIME(UHunterMonsterComponent, CurrentHunterState);
    DOREPLIFETIME(UHunterMonsterComponent, HunterAttack);
    DOREPLIFETIME(UHunterMonsterComponent, HunterIdleState);
    DOREPLIFETIME(UHunterMonsterComponent, AttachedDoor);
    DOREPLIFETIME(UHunterMonsterComponent, ReplicatedFlags);
}


