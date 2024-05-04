#include "SolsticeWeaponComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

USolsticeWeaponComponent::USolsticeWeaponComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverwatchRange = 1200.00f;
    this->OverwatchTargetingInterval = 2.00f;
    this->OverwatchRetargetCooldown = 0.50f;
    this->OverwatchOnSound = NULL;
    this->OverwatchOffSound = NULL;
    this->OverwatchTargetingEffect = NULL;
    this->FiringTresholdHalfAngle = 15.00f;
    this->AimingTresholdHalfAngle = 25.00f;
    this->ManuallWindupSeconds = 0.20f;
    this->OverwatchWindupSeconds = 0.15f;
    this->SecondsForLongAimingBuffApplication = 4.00f;
    this->LongAimingBuff = NULL;
    this->PrimaryAmmoClips = 0;
    this->SpecializedAmmoClips = 0;
    this->PrimaryAmmoCapacity = 0;
    this->PrimaryAmmoRegeneration = 0.00f;
    this->SpecializedAmmoCapacity = 0;
    this->SpecializedAmmoRegeneration = 0.00f;
    this->StartingPrimaryAmmoPercentage = 0.40f;
    this->StartingSpecializedAmmoPercentage = 0.20f;
    this->StartingLoadedSpecializedClips = 1;
    this->AmmoClipsDropped = 3;
    this->AmmoClipsDroppedPercentage = 0.50f;
    this->PrimaryWeapon = NULL;
    this->SecondaryWeapon = NULL;
    this->ActiveWeapon = NULL;
    this->AttackTarget = NULL;
    this->bFireEnabled = false;
    this->LaserColorIntensity = 10.00f;
    this->LaserColorIntensityManual = 10.00f;
    this->LaserIntensityMultiplierRemoteHero = 0.15f;
    this->SwapWeaponDuration = 0.30f;
    this->InstantReloadSound = NULL;
}

void USolsticeWeaponComponent::TryExpendSecondaryWeaponBullets(int32 InBullets, int32& OutSpent) {
}

void USolsticeWeaponComponent::ToggleFireComponent() {
}

void USolsticeWeaponComponent::SetLaserColor(FColor NewColor, float Intensity) {
}

void USolsticeWeaponComponent::ServerResetPreviewWeapon_Implementation(const FCharacterWeaponData& WeaponData, bool bPrimary) {
}
bool USolsticeWeaponComponent::ServerResetPreviewWeapon_Validate(const FCharacterWeaponData& WeaponData, bool bPrimary) {
    return true;
}

void USolsticeWeaponComponent::ServerDropAmmo_Implementation() {
}
bool USolsticeWeaponComponent::ServerDropAmmo_Validate() {
    return true;
}

void USolsticeWeaponComponent::ServerAddSecondaryFireMod_Implementation(const FDataTableRowHandle& FireModDataHandle) {
}

void USolsticeWeaponComponent::ServerAddAdvancedAmmoMod_Implementation(const FDataTableRowHandle& AdvancedAmmoDataHandle) {
}

void USolsticeWeaponComponent::RemoveWeaponBuff(TSubclassOf<UWeaponPassiveBuffBase> BuffClass, int32 NumberOfStacks) {
}

void USolsticeWeaponComponent::ReloadWeapon() {
}

void USolsticeWeaponComponent::OpenFire() {
}

void USolsticeWeaponComponent::OnRep_SecondaryWeapon() {
}

void USolsticeWeaponComponent::OnRep_PrimaryWeapon() {
}

void USolsticeWeaponComponent::OnRep_PrimaryAmmoClips(int32 PreviousClips) {
}

void USolsticeWeaponComponent::OnRep_ActiveWeaponData(const FSwapWeaponData& OldData) {
}

void USolsticeWeaponComponent::OnRep_ActiveWeapon() {
}

void USolsticeWeaponComponent::LoadPrimaryWeaponBullets(int32 Bullets) {
}

bool USolsticeWeaponComponent::IsSecondaryWeaponActive() const {
    return false;
}

bool USolsticeWeaponComponent::IsPrimaryWeaponActive() const {
    return false;
}

bool USolsticeWeaponComponent::IsActiveWeapon(ASolsticeWeaponBase* WeaponRef) const {
    return false;
}

bool USolsticeWeaponComponent::HasSecondaryWeapon() const {
    return false;
}

bool USolsticeWeaponComponent::HasResourcesToFire() const {
    return false;
}

bool USolsticeWeaponComponent::HasPrimaryWeapon() const {
    return false;
}

void USolsticeWeaponComponent::HandleWeaponStateChanged(ASolsticeWeaponBase* InWeapon, EFiringState OldState, EFiringState NewState) {
}

void USolsticeWeaponComponent::HandleGameplayTagAdded(ASolsticeCharacterBase* Char, FGameplayTag NewTag) {
}

float USolsticeWeaponComponent::GetLaserIntensity() const {
    return 0.0f;
}

FColor USolsticeWeaponComponent::GetLaserColor() const {
    return FColor{};
}

AHeroCharacterBase* USolsticeWeaponComponent::GetHeroOwner() const {
    return NULL;
}

EFiringMode USolsticeWeaponComponent::GetFiringMode() const {
    return EFiringMode::EFS_Idle;
}

int32 USolsticeWeaponComponent::GetActiveWeaponCurrentAmmo() const {
    return 0;
}

void USolsticeWeaponComponent::CeaseFire() {
}

bool USolsticeWeaponComponent::CanUseWeapons() const {
    return false;
}

bool USolsticeWeaponComponent::CanTransitionFiringStates() const {
    return false;
}

bool USolsticeWeaponComponent::CanToggleFireComponent() const {
    return false;
}

bool USolsticeWeaponComponent::CanSwapWeapons(bool bToSecondary, float Timestamp) const {
    return false;
}

bool USolsticeWeaponComponent::CanReloadWeapon() const {
    return false;
}

bool USolsticeWeaponComponent::CanOpenFire() const {
    return false;
}

bool USolsticeWeaponComponent::CanAddSpecializedAmmo() const {
    return false;
}

bool USolsticeWeaponComponent::CanAddAdvancedAmmo(TSubclassOf<UHitObjectBase> AmmoType) const {
    return false;
}

void USolsticeWeaponComponent::AddWeaponBuff(TSubclassOf<UWeaponPassiveBuffBase> BuffClass, int32 NumberOfStacks) {
}

void USolsticeWeaponComponent::AddStandardAmmo(int32 Clips, bool bTryReload) {
}

void USolsticeWeaponComponent::AddSpecializedAmmo(int32 Clips, bool bForceSecondaryWeapon) {
}

void USolsticeWeaponComponent::AddSecondaryWeaponBullets(int32 Bullets) {
}

void USolsticeWeaponComponent::AddSecondaryFireMod(FDataTableRowHandle FireModDataHandle) {
}

void USolsticeWeaponComponent::AddPrimaryWeaponBullets(int32 Bullets) {
}

void USolsticeWeaponComponent::AddAdvancedAmmoMod(FDataTableRowHandle AdvancedAmmoDataHandle) {
}

void USolsticeWeaponComponent::AddAdvancedAmmo(TSubclassOf<UHitObjectBase> AmmoType, int32 Bullets) {
}

void USolsticeWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USolsticeWeaponComponent, ActiveWeaponData);
    DOREPLIFETIME(USolsticeWeaponComponent, PrimaryAmmoClips);
    DOREPLIFETIME(USolsticeWeaponComponent, SpecializedAmmoClips);
    DOREPLIFETIME(USolsticeWeaponComponent, PrimaryWeapon);
    DOREPLIFETIME(USolsticeWeaponComponent, SecondaryWeapon);
    DOREPLIFETIME(USolsticeWeaponComponent, ActiveWeapon);
}


