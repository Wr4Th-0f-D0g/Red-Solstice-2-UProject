#include "HeroControllerBase.h"
#include "Net/UnrealNetwork.h"

AHeroControllerBase::AHeroControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SolsticeChar = NULL;
    this->ExitVehicleEQSQuery = NULL;
    this->LastAttackTarget = NULL;
    this->AttackTarget = NULL;
    this->TargetParticleEffect = NULL;
    this->bFirePressed = false;
    this->InteractionRadius = 0.00f;
    this->bCanInteract = true;
    this->bDrawInteractionDebug = false;
    this->PlayerNavFilter = NULL;
    this->PlayerNavFilterNoVault = NULL;
    this->LastInteractionTarget = NULL;
    this->InteractionTarget = NULL;
    this->RotationMode = ERotationMode::ERM_Invalid;
    this->AimingTurnRateMultiplier = 2.00f;
}

void AHeroControllerBase::VerifyOverwatchTarget() {
}

void AHeroControllerBase::UnbindFromTargetKilled(TScriptInterface<IDamagable> Target) {
}

void AHeroControllerBase::ToggleFireMode() {
}

bool AHeroControllerBase::SwapWeapons(bool bToSecondaryWeapon, float Timestamp, USolsticeWeaponComponent* TargetWeaponComponent) {
    return false;
}

void AHeroControllerBase::StopHeroMovement() {
}

void AHeroControllerBase::StopForInteraction() {
}

void AHeroControllerBase::SetSecondaryWeaponActive(bool bNewActive, bool bForceSetter) {
}

void AHeroControllerBase::SetRotationMode() {
}

void AHeroControllerBase::SetInteractionTarget(AActor* NewInteractionTarget) {
}

void AHeroControllerBase::SetFiringModeMode(EFiringMode NewFiringMode, bool bForceSetter) {
}

void AHeroControllerBase::SetFiringMode(FFiringMode NewFiringMode, bool bForceSetter) {
}

void AHeroControllerBase::SetFirePressed(bool NewPressed) {
}

void AHeroControllerBase::SetAttackTarget(AActor* NewAttackTarget, bool bForceSetter) {
}

void AHeroControllerBase::ServerSetOverwatchTarget_Implementation(AActor* NewAttackTarget) {
}
bool AHeroControllerBase::ServerSetOverwatchTarget_Validate(AActor* NewAttackTarget) {
    return true;
}

void AHeroControllerBase::ServerFocusOnInteractable_Implementation(const FVector& Location, const FGameplayTagContainer& TagsToAdd, float Duration) {
}


void AHeroControllerBase::RotateToFaceInteractable() {
}

void AHeroControllerBase::ResumePathfollowing() {
}


void AHeroControllerBase::ReloadWeapon() {
}

void AHeroControllerBase::PausePathfollowing() {
}

void AHeroControllerBase::OpenFire() {
}

void AHeroControllerBase::OnRep_InteractionTarget(AActor* OldInteractionTarget) {
}

void AHeroControllerBase::OnRep_FiringMode() {
}

void AHeroControllerBase::OnRep_FirePressed() {
}

void AHeroControllerBase::OnRep_AttackTarget(AActor* OldTarget) {
}

void AHeroControllerBase::MoveToInteractLocation(FVector Location, float Range) {
}

void AHeroControllerBase::MoveCharacterTo(FVector Location) {
}

void AHeroControllerBase::MarkAttackTarget(AActor* OldTarget, AActor* NewTarget) {
}

bool AHeroControllerBase::IsWeaponFiring() const {
    return false;
}

bool AHeroControllerBase::IsWeaponActive() const {
    return false;
}

bool AHeroControllerBase::IsSecondaryWeaponActive() const {
    return false;
}

bool AHeroControllerBase::IsPrimaryWeaponActive() const {
    return false;
}

bool AHeroControllerBase::IsInInteractionRange() const {
    return false;
}

bool AHeroControllerBase::IsHeroWithinDistanceOf(FVector Location, float Range) const {
    return false;
}





void AHeroControllerBase::Interact_Implementation(AActor* Target, const FVector& Location) {
}

bool AHeroControllerBase::HasValidInteractionTarget() const {
    return false;
}

bool AHeroControllerBase::HasActiveTarget() {
    return false;
}

void AHeroControllerBase::HandleWeaponSwapReplicated(bool SecondaryWeaponActive) {
}

void AHeroControllerBase::HandleTargetKilled(AActor* KilledTarget, APawn* PawnInstigator) {
}

void AHeroControllerBase::HandleTagAdded(ASolsticeCharacterBase* InCharacter, FGameplayTag InTag) {
}

void AHeroControllerBase::HandleOverwatchTargetKilled(AActor* KilledActor, APawn* PawnInstigator) {
}

void AHeroControllerBase::HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool bSuccess) {
}

void AHeroControllerBase::HandleGameplayTagCountChanged(const FGameplayTag InTag, int32 Count) {
}

void AHeroControllerBase::HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue) {
}

USolsticeWeaponComponent* AHeroControllerBase::GetWeaponComponent() const {
    return NULL;
}

ASolsticeWeaponBase* AHeroControllerBase::GetSecondaryWeapon() const {
    return NULL;
}

ASolsticeWeaponBase* AHeroControllerBase::GetPrimaryWeapon() const {
    return NULL;
}

AHeroCharacterBase* AHeroControllerBase::GetHero() const {
    return NULL;
}

EFiringMode AHeroControllerBase::GetFiringModeMode() const {
    return EFiringMode::EFS_Idle;
}

FRotator AHeroControllerBase::GetDesiredWeaponRotation() const {
    return FRotator{};
}

ERotationMode AHeroControllerBase::GetDesiredRotationMode() const {
    return ERotationMode::ERM_Invalid;
}

FRotator AHeroControllerBase::GetDesiredHeroRotation() const {
    return FRotator{};
}

ESolsticeControlMode AHeroControllerBase::GetControlMode() const {
    return ESolsticeControlMode::RTS;
}

ASolsticeWeaponBase* AHeroControllerBase::GetActiveWeapon() const {
    return NULL;
}

void AHeroControllerBase::FocusOnInteractable(const FVector& Location, const FGameplayTagContainer& TagsToAdd, float Duration) {
}

void AHeroControllerBase::FinishUsingNavlink() {
}

void AHeroControllerBase::FindOverwatchTarget() {
}

void AHeroControllerBase::ClientAttackTargetKilled_Implementation() {
}

void AHeroControllerBase::ClearMonsterTarget(AMonsterCharacterBase* InMonster) {
}

void AHeroControllerBase::ClearFocusOnInteractable(const FGameplayTagContainer TagsToRemove) {
}

void AHeroControllerBase::CeaseFire() {
}

bool AHeroControllerBase::CanRotateToFaceInteractable() const {
    return false;
}

bool AHeroControllerBase::CanMoveToInteract() const {
    return false;
}

void AHeroControllerBase::BindToTargetKilled(TScriptInterface<IDamagable> Target) {
}


void AHeroControllerBase::AlreadyAtInteractLocation() {
}

void AHeroControllerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHeroControllerBase, ActiveFiringMode);
    DOREPLIFETIME(AHeroControllerBase, AttackTarget);
    DOREPLIFETIME(AHeroControllerBase, bFirePressed);
    DOREPLIFETIME(AHeroControllerBase, CameraTracePosition);
    DOREPLIFETIME(AHeroControllerBase, WeaponTracePosition);
    DOREPLIFETIME(AHeroControllerBase, LastInteractionTarget);
    DOREPLIFETIME(AHeroControllerBase, InteractionTarget);
}


