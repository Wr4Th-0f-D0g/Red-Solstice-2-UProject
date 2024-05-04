#include "SolsticeWeaponBase.h"
#include "Components/ArrowComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FMODAudioComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "WeaponAttributeComponent.h"
#include "WeaponRootComponent.h"

ASolsticeWeaponBase::ASolsticeWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UWeaponRootComponent>(TEXT("WeaponRoot"));
    this->WeaponRoot = (UWeaponRootComponent*)RootComponent;
    this->bCanHitTarget = false;
    this->WeaponDataTable = NULL;
    this->FireComponentDataTable = NULL;
    this->LocomotionMode = ELocomotionMode::ELM_None;
    this->WeaponType = EWeaponGameplayType::EWGT_Invalid;
    this->WeaponInventorySize = 0;
    this->WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->MuzzleDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("MuzzleDirection"));
    this->AimDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("AimDirection"));
    this->BulletShellDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("BulletShellDirection"));
    this->AttributeComponent = CreateDefaultSubobject<UWeaponAttributeComponent>(TEXT("AttributeComponent"));
    this->MaximumMuzzleYawCorrection = 3.00f;
    this->MaximumMuzzlePitchCorrection = 3.00f;
    this->bAttachOtherWeaponToHandWhileActive = false;
    this->PrimaryFireComponent = NULL;
    this->SecondaryFireComponent = NULL;
    this->ActiveFireComponent = NULL;
    this->bIsActiveWeapon = false;
    this->AimingBuff = NULL;
    this->bDisableBulletFXTick = false;
    this->DesiredState = EFiringState::EFS_Idle;
    this->AttackTarget = NULL;
    this->bFiring = false;
    this->ActiveFiringState = EFiringState::EFS_Idle;
    this->CurrentWeaponSpread = 0.00f;
    this->HitObjectClass = NULL;
    this->HitObject = NULL;
    this->AimComponent = NULL;
    this->MuzzleFlashComponent = NULL;
    this->BulletEjectionComponent = NULL;
    this->ChargeParticles = NULL;
    this->BulletShellFX = NULL;
    this->MagazineEjectFX = NULL;
    this->StartFireAC = NULL;
    this->FireAC = NULL;
    this->FireEffectAC = NULL;
    this->ReloadAC = NULL;
    this->OutOfAmmoAC = NULL;
    this->AimAC = NULL;
    this->HitAC = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("HitAC"));
    this->ChargeAC = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("ChargeAudioComponent"));
    this->ChargeAC->SetupAttachment(RootComponent);
    this->WeaponMesh->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->MuzzleDirection->SetupAttachment(SkeletalMesh);
    this->AimDirection->SetupAttachment(SkeletalMesh);
    this->BulletShellDirection->SetupAttachment(RootComponent);
}

void ASolsticeWeaponBase::UpdateWeaponPrimitiveData() {
}

void ASolsticeWeaponBase::ToggleFireComponent() {
}

void ASolsticeWeaponBase::ToggleDebug() {
}

bool ASolsticeWeaponBase::SpecializedRequiresFriendlyCheck() const {
    return false;
}

bool ASolsticeWeaponBase::ShouldFireOnTarget() {
    return false;
}

void ASolsticeWeaponBase::SetStencilValue(int32 NewValue, bool bRenderCustomDepth) {
}

void ASolsticeWeaponBase::SetIsActiveWeapon(bool bNewActive, bool bForceSetter) {
}

void ASolsticeWeaponBase::SetActiveFireComponent(UFireComponentBase* NewActiveFireComponent, bool bFromReplicationCallback) {
}

void ASolsticeWeaponBase::ServerResolveDamage_Implementation(const TArray<FHitscanPayload>& HitPayloads, const FVector_NetQuantize& Origin, uint16 PredictionKey) {
}

void ASolsticeWeaponBase::ServerReload_Implementation() {
}

void ASolsticeWeaponBase::ServerFinishReload_Implementation() {
}

void ASolsticeWeaponBase::SaveReloadState() {
}


void ASolsticeWeaponBase::OnRep_SpecializedWeaponClip(FSecondaryWeaponClip OldClip) {
}

void ASolsticeWeaponBase::OnRep_SecondaryFireComponent() {
}

void ASolsticeWeaponBase::OnRep_SecondaryClipDefaults() {
}

void ASolsticeWeaponBase::OnRep_PrimaryWeaponClip(FPrimaryWeaponClip OldClip) {
}

void ASolsticeWeaponBase::OnRep_PrimaryFireComponent() {
}

void ASolsticeWeaponBase::OnRep_PrimaryClipDefaults() {
}

void ASolsticeWeaponBase::OnRep_OwningCharacter() {
}

void ASolsticeWeaponBase::OnRep_IsActiveWeapon() {
}

void ASolsticeWeaponBase::OnRep_HitObjectClass(TSubclassOf<UHitObjectBase> OldClass) {
}

void ASolsticeWeaponBase::OnRep_ActiveFireComponent(UFireComponentBase* OldFireComponent) {
}


void ASolsticeWeaponBase::MulticastStopReload_Implementation() {
}

void ASolsticeWeaponBase::MulticastReload_Implementation() {
}

FDamage ASolsticeWeaponBase::ModifySuppression_Implementation(const FDamage& InDamage, const TScriptInterface<IDamagable>& Target) {
    return FDamage{};
}

FDamage ASolsticeWeaponBase::ModifyHealthDamage_Implementation(const FDamage& InDamage, const TScriptInterface<IDamagable>& Target) {
    return FDamage{};
}

FDamage ASolsticeWeaponBase::ModifyArmorDamage_Implementation(const FDamage& InDamage, const TScriptInterface<IDamagable>& Target) {
    return FDamage{};
}

bool ASolsticeWeaponBase::IsUsingSpecializedMod() const {
    return false;
}

bool ASolsticeWeaponBase::IsUsingLoopedFireSound() const {
    return false;
}

bool ASolsticeWeaponBase::IsTargetInRange_Implementation() const {
    return false;
}

bool ASolsticeWeaponBase::IsTargetInCone_Implementation() const {
    return false;
}

bool ASolsticeWeaponBase::IsSpecializedWeapon() const {
    return false;
}

bool ASolsticeWeaponBase::IsShooting() const {
    return false;
}

bool ASolsticeWeaponBase::IsSecondaryWeapon() const {
    return false;
}

bool ASolsticeWeaponBase::IsSecondaryFireComponentActive() {
    return false;
}

bool ASolsticeWeaponBase::IsReloading() const {
    return false;
}

bool ASolsticeWeaponBase::IsPrimaryWeapon() const {
    return false;
}

bool ASolsticeWeaponBase::IsPrimaryFireComponentActive() {
    return false;
}

bool ASolsticeWeaponBase::IsInCombatState() const {
    return false;
}

bool ASolsticeWeaponBase::IsFullyLoaded() {
    return false;
}

bool ASolsticeWeaponBase::IsFiring() const {
    return false;
}

bool ASolsticeWeaponBase::IsEquipping() const {
    return false;
}

bool ASolsticeWeaponBase::IsEmpty() {
    return false;
}

bool ASolsticeWeaponBase::IsAiming_Implementation() const {
    return false;
}

bool ASolsticeWeaponBase::HasValidTarget() const {
    return false;
}

bool ASolsticeWeaponBase::HasEnergyToFire() const {
    return false;
}

bool ASolsticeWeaponBase::HasAmmunitionToFire() const {
    return false;
}

void ASolsticeWeaponBase::HandleWeaponClipEmptied(EAmmoType InAmmoType) {
}

void ASolsticeWeaponBase::HandleShotFired(UFireComponentBase* FiringComponent) {
}

void ASolsticeWeaponBase::HandleProjectileFired(TArray<FHitscanPayloadLocal>& InOutHitPayload) {
}

void ASolsticeWeaponBase::HandleMontageAnimNotify(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void ASolsticeWeaponBase::HandleFiringPackageChanged(FFiringInput NewFiringPackage) {
}

void ASolsticeWeaponBase::HandleFiringModeChanged(FFiringMode NewFiringMode) {
}

void ASolsticeWeaponBase::HandleFireEnabledChanged(bool bNewEnabled) {
}

void ASolsticeWeaponBase::HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue) {
}

void ASolsticeWeaponBase::HandleAttackTargetChanged(AActor* OldTarget, AActor* NewTarget) {
}

void ASolsticeWeaponBase::HandleActorHit(const FHitscanPayload& HitPayload, bool bLastHit, bool bFromServerRPC) {
}

TEnumAsByte<ECollisionChannel> ASolsticeWeaponBase::GetWeaponTraceChannel() const {
    return ECC_WorldStatic;
}

UFMODEvent* ASolsticeWeaponBase::GetWeaponStartFireSound() const {
    return NULL;
}

UFMODEvent* ASolsticeWeaponBase::GetWeaponReloadSoundLooped() const {
    return NULL;
}

UFMODEvent* ASolsticeWeaponBase::GetWeaponReloadSound() const {
    return NULL;
}

UFMODEvent* ASolsticeWeaponBase::GetWeaponReloadCompleteSound() const {
    return NULL;
}

EWeaponPenetrationMode ASolsticeWeaponBase::GetWeaponPenetrationMode() const {
    return EWeaponPenetrationMode::EWPM_None;
}

UFMODEvent* ASolsticeWeaponBase::GetWeaponOutOfAmmoSound() const {
    return NULL;
}

UFMODEvent* ASolsticeWeaponBase::GetWeaponFireSound() const {
    return NULL;
}

UFMODEvent* ASolsticeWeaponBase::GetWeaponFireEffectSound() const {
    return NULL;
}

UFMODEvent* ASolsticeWeaponBase::GetWeaponEndFireSound() const {
    return NULL;
}

EDamageGroup ASolsticeWeaponBase::GetWeaponDamageType() const {
    return EDamageGroup::EDT_None;
}

UFMODEvent* ASolsticeWeaponBase::GetWeaponAimSound() const {
    return NULL;
}

float ASolsticeWeaponBase::GetUIAttributeValue(EAttribute Attribute, float& Base, bool bForPrimaryFireComponent) const {
    return 0.0f;
}

AActor* ASolsticeWeaponBase::GetTarget() const {
    return NULL;
}

float ASolsticeWeaponBase::GetSuppression() const {
    return 0.0f;
}

UWeaponStateBase* ASolsticeWeaponBase::GetStateObject(EFiringState State) const {
    return NULL;
}

float ASolsticeWeaponBase::GetSpreadRegeneration() const {
    return 0.0f;
}

float ASolsticeWeaponBase::GetSpreadPerShot() const {
    return 0.0f;
}

int32 ASolsticeWeaponBase::GetShotsPerStandardClip() const {
    return 0;
}

int32 ASolsticeWeaponBase::GetShotsPerSpecializedClip() const {
    return 0;
}

void ASolsticeWeaponBase::GetSecondaryAmmo(int32& Current, int32& Max) const {
}

ERotationMode ASolsticeWeaponBase::GetRotationMode() const {
    return ERotationMode::ERM_Invalid;
}

float ASolsticeWeaponBase::GetReloadTime() const {
    return 0.0f;
}

float ASolsticeWeaponBase::GetReloadProgress() {
    return 0.0f;
}

float ASolsticeWeaponBase::GetRange() const {
    return 0.0f;
}

float ASolsticeWeaponBase::GetProjectileSpeed() const {
    return 0.0f;
}

void ASolsticeWeaponBase::GetPrimaryAmmo(int32& Current, int32& Max) const {
}

bool ASolsticeWeaponBase::GetOwningCharacter(ASolsticeCharacterBase*& CharacterOwner) {
    return false;
}

float ASolsticeWeaponBase::GetOverwatchWindupSeconds() const {
    return 0.0f;
}

int32 ASolsticeWeaponBase::GetNumberOfProjectiles() const {
    return 0;
}

UArrowComponent* ASolsticeWeaponBase::GetMuzzleDirection_Implementation() {
    return NULL;
}

int32 ASolsticeWeaponBase::GetMaxStandardClips() const {
    return 0;
}

int32 ASolsticeWeaponBase::GetMaxSpecializedClips() const {
    return 0;
}

float ASolsticeWeaponBase::GetMaximumVerticalWeaponSpread() const {
    return 0.0f;
}

float ASolsticeWeaponBase::GetMaximumHorizontalWeaponSpread() const {
    return 0.0f;
}

float ASolsticeWeaponBase::GetManualWindupSeconds() const {
    return 0.0f;
}

float ASolsticeWeaponBase::GetInitialSpread() const {
    return 0.0f;
}

float ASolsticeWeaponBase::GetFriendlyFireMultiplier() const {
    return 0.0f;
}

float ASolsticeWeaponBase::GetFiringThresholdHalfAngle_Implementation() const {
    return 0.0f;
}

EFiringState ASolsticeWeaponBase::GetFiringState() const {
    return EFiringState::EFS_None;
}

EFiringMode ASolsticeWeaponBase::GetFiringMode() const {
    return EFiringMode::EFS_Idle;
}

float ASolsticeWeaponBase::GetFinalSpread() const {
    return 0.0f;
}

float ASolsticeWeaponBase::GetEnergyCost() const {
    return 0.0f;
}

float ASolsticeWeaponBase::GetDamage() const {
    return 0.0f;
}

float ASolsticeWeaponBase::GetCurrentWeaponSpread() const {
    return 0.0f;
}

void ASolsticeWeaponBase::GetCurrentAmmo(int32& Current, int32& Max) const {
}

float ASolsticeWeaponBase::GetCriticalMultiplier() const {
    return 0.0f;
}

float ASolsticeWeaponBase::GetCriticalChance() const {
    return 0.0f;
}

bool ASolsticeWeaponBase::GetAttributeValue(EAttribute Attribute, float& Current) const {
    return false;
}

float ASolsticeWeaponBase::GetAttributeChecked(EAttribute Attribute, bool bWarnIfZero) const {
    return 0.0f;
}

int32 ASolsticeWeaponBase::GetAmmoPerShot() const {
    return 0;
}

float ASolsticeWeaponBase::GetAimingThresholdHalfAngle() const {
    return 0.0f;
}

FWeaponClip ASolsticeWeaponBase::GetActiveWeaponClip() {
    return FWeaponClip{};
}

UWeaponStateBase* ASolsticeWeaponBase::GetActiveStateObject() const {
    return NULL;
}

UTexture2D* ASolsticeWeaponBase::GetActiveAmmoIcon() {
    return NULL;
}

bool ASolsticeWeaponBase::FireButtonPressed() const {
    return false;
}

void ASolsticeWeaponBase::ClientConfirmShot_Implementation(uint16 PredictionKey, float CurrentEnergy) {
}

bool ASolsticeWeaponBase::CanUseWeapon() const {
    return false;
}

bool ASolsticeWeaponBase::CanUseAdvancedAmmo_Implementation(TSubclassOf<UHitObjectBase> AmmoType) const {
    return false;
}

bool ASolsticeWeaponBase::CanToggleFireComponent() {
    return false;
}

void ASolsticeWeaponBase::AttachWeapon(bool bIsActive, bool bKeepInHandIfInactive) {
}



void ASolsticeWeaponBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASolsticeWeaponBase, OwningCharacter);
    DOREPLIFETIME(ASolsticeWeaponBase, WeaponSpecializations);
    DOREPLIFETIME(ASolsticeWeaponBase, WeaponData);
    DOREPLIFETIME(ASolsticeWeaponBase, PrimaryFireComponent);
    DOREPLIFETIME(ASolsticeWeaponBase, SecondaryFireComponent);
    DOREPLIFETIME(ASolsticeWeaponBase, ActiveFireComponent);
    DOREPLIFETIME(ASolsticeWeaponBase, bIsActiveWeapon);
    DOREPLIFETIME(ASolsticeWeaponBase, PrimaryClipDefaults);
    DOREPLIFETIME(ASolsticeWeaponBase, PrimaryClip);
    DOREPLIFETIME(ASolsticeWeaponBase, SpecializedClipDefaults);
    DOREPLIFETIME(ASolsticeWeaponBase, SpecializedClip);
    DOREPLIFETIME(ASolsticeWeaponBase, HitObjectClass);
}


