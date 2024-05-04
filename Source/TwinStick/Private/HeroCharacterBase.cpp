#include "HeroCharacterBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "FMODAudioComponent.h"
#include "MapDynamicActorComponent.h"
#include "ArmorComponent.h"
#include "ClientUXComponent.h"
#include "HeroMovementComponent.h"
#include "HeroSkillsComponent.h"
#include "Net/UnrealNetwork.h"
#include "PowerSuitComponent.h"
#include "SolsticeWeaponComponent.h"
#include "Templates/SubclassOf.h"

AHeroCharacterBase::AHeroCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UHeroMovementComponent>(TEXT("CharMoveComp"))) {
    this->Tags.AddDefaulted(1);
    this->ArmorComponent = CreateDefaultSubobject<UArmorComponent>(TEXT("ArmorComponent"));
    this->EnergyComponent = CreateDefaultSubobject<UPowerSuitComponent>(TEXT("EnergyComponent"));
    this->ActiveWeaponComponent = CreateDefaultSubobject<USolsticeWeaponComponent>(TEXT("TRS_WeaponComponent"));
    this->WeaponComponent = (USolsticeWeaponComponent*)ActiveWeaponComponent;
    this->bCharacterNamePermanentHidden = false;
    this->PlayerLocatorMesh = NULL;
    this->bOverlapBarricades = false;
    this->BarricadeOverlapRadius = 0.00f;
    this->NavFilter = NULL;
    this->VaultBoxDetect = NULL;
    this->VaultDistance = 250.00f;
    this->MechLeaveQueryTemplate = NULL;
    this->HeroMissionArrow = NULL;
    this->HeroMainArrow = NULL;
    this->HeroMissionArrowText = NULL;
    this->VehicleMissionArrow = NULL;
    this->VehicleMainArrow = NULL;
    this->VehicleMissionArrowText = NULL;
    this->MechExitQueryNavFilter = NULL;
    this->PlayerDetectedRoof = NULL;
    this->FrozenMaterial = NULL;
    this->ConcealedMaterial = NULL;
    this->bHasConcealedMaterial = false;
    this->bHasFrozenMaterial = false;
    this->MonsterProximityRadius = 2500.00f;
    this->FOWComponent = NULL;
    this->DeathInstigator = NULL;
    this->CharacterNameWidgetClass = NULL;
    this->ObserverModeTime = 4.00f;
    this->MarineDeadSound = NULL;
    this->bDisableInfiniteRevives = false;
    this->bIsArmoryCharacter = false;
    this->PremadeCharacters = NULL;
    this->SuitModulesTable = NULL;
    this->FlashLightAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("FlashLightAttachment"));
    this->FlashLightClass = NULL;
    this->MutatedMarineComponent = NULL;
    this->FlashLight = NULL;
    this->MeleeWeapon = NULL;
    this->bFlashLightHidden = false;
    this->PlayerOwner = NULL;
    this->HeroPlayerState = NULL;
    this->bHideWeapons = false;
    this->MarineAnimBP = NULL;
    this->ReviveShockEffect = NULL;
    this->TeleportArriveEffect = NULL;
    this->ReviveStartSound = NULL;
    this->TeleportStopSound = NULL;
    this->ReviveFailedSound = NULL;
    this->RevivedParticleEffect = NULL;
    this->RevivedSoundEffect = NULL;
    this->LocalInteractionBoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("LocalInteractionBoxComp"));
    this->PowerSuit = NULL;
    this->ZiplineComp = NULL;
    this->TakeDamageSound = NULL;
    this->DamageSoundComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("StartFire AC"));
    this->ThreatLevel = EEnemyThreatLevel::Medium;
    this->MapDynamicActorComponent = CreateDefaultSubobject<UMapDynamicActorComponent>(TEXT("MapDynamicActorComponenet"));
    this->ClientUXComponent = CreateDefaultSubobject<UClientUXComponent>(TEXT("ClientUXComponent"));
    this->SkillsComponent = CreateDefaultSubobject<UHeroSkillsComponent>(TEXT("Skills"));
    this->LevelUpParticle = NULL;
    this->bIsInDoors = false;
    this->LocalInteractionBoxComp->SetupAttachment(RootComponent);
    this->DamageSoundComponent->SetupAttachment(RootComponent);
    this->FlashLightAttachment->SetupAttachment(RootComponent);
}

void AHeroCharacterBase::Vault() {
}

void AHeroCharacterBase::SpawnFlashLight() {
}

void AHeroCharacterBase::SetWeaponsHidden(bool bNewHidden) {
}

void AHeroCharacterBase::SetupPremade(const FPowerSuitModel& InSuitModel) {
}

void AHeroCharacterBase::SetupHeroMeshes(const FPowerSuitModel& InSuitModel, bool bSequencer) {
}


void AHeroCharacterBase::SetSecondaryColor(const FVector& InColor) {
}



void AHeroCharacterBase::SetPrimaryColor(const FVector& InColor) {
}

void AHeroCharacterBase::SetHeroPlayerState(ASolsticePlayerState* PS) {
}

void AHeroCharacterBase::SetHeroName(FText Value) {
}

void AHeroCharacterBase::SetHeroControlsEnabled(bool bIsEnabled) {
}

void AHeroCharacterBase::SetFlashHidden(bool bNewHidden) {
}


void AHeroCharacterBase::SetCharacterNameWidgetHidden(bool bNewHidden) {
}

void AHeroCharacterBase::SetCharacterNamePermanentHidden(bool bNewHidden) {
}

void AHeroCharacterBase::RemoveAllIncapacitationStates() {
}


void AHeroCharacterBase::OnRep_PlayerOwner() {
}

void AHeroCharacterBase::OnRep_HideWeapons() {
}

void AHeroCharacterBase::OnRep_HeroPlayerState() {
}

void AHeroCharacterBase::OnRep_FlashLightHidden() {
}

void AHeroCharacterBase::OnRep_bCharacterNamePermanentHidden() {
}

void AHeroCharacterBase::NetMulticast_LeaveMechAtLocation_Implementation(const FVector& Vector) {
}

void AHeroCharacterBase::MutateHero() {
}

void AHeroCharacterBase::MulticastRevivedEffects_Implementation() {
}




void AHeroCharacterBase::LogPlayerMovement() {
}






bool AHeroCharacterBase::IsFollowerBot() const {
    return false;
}




bool AHeroCharacterBase::HasZeroIntegrity() const {
    return false;
}

void AHeroCharacterBase::HandleTagRemoved(ASolsticeCharacterBase* Char, FGameplayTag RemovedTag) {
}

void AHeroCharacterBase::HandleTagAdded(ASolsticeCharacterBase* Char, FGameplayTag AddedTag) {
}

void AHeroCharacterBase::HandleSuitLevelChanged(int32 NewLevel, const FString& LevelUpMessage) {
}

void AHeroCharacterBase::HandleExperienceReward_Implementation(float AccountXP, float MatchXP, FVector Location, AActor* Awardee, float Range) {
}

ESuitTier AHeroCharacterBase::GetSuitTier() const {
    return ESuitTier::Unspecified;
}

bool AHeroCharacterBase::GetShouldRevealFOW_Implementation() const {
    return false;
}

TSubclassOf<AAbilityDroneBase> AHeroCharacterBase::GetSaffronDroneClass() const {
    return NULL;
}

FPowerSuitModel AHeroCharacterBase::GetPowerSuitModel() const {
    return FPowerSuitModel{};
}

ASolsticePlayerState* AHeroCharacterBase::GetPlayerState() const {
    return NULL;
}

FVector AHeroCharacterBase::GetPlayerPositionAdjustedZ() const {
    return FVector{};
}

APlayerController* AHeroCharacterBase::GetPlayerOwner() const {
    return NULL;
}

UMeshComponent* AHeroCharacterBase::GetMeshComponentWithTag(FName InTag) const {
    return NULL;
}

ESolsticeHeroClass AHeroCharacterBase::GetMarineClass() const {
    return ESolsticeHeroClass::ESHC_Invalid;
}

UInventoryComponent* AHeroCharacterBase::GetInventoryComponent() const {
    return NULL;
}

FText AHeroCharacterBase::GetHeroName() const {
    return FText::GetEmpty();
}

UFOWComponent* AHeroCharacterBase::GetFOWComponent_Implementation() const {
    return NULL;
}

AHeroControllerBase* AHeroCharacterBase::GetAIController() const {
    return NULL;
}

ASolsticeWeaponBase* AHeroCharacterBase::GetActiveWeapon() const {
    return NULL;
}

void AHeroCharacterBase::DoRevive(bool bTeleportToSafeZone, APawn* ReviveInstigator) {
}

void AHeroCharacterBase::DiscoverCharacterName(AController* InController, EIndicatorType IndicatorType) {
}

void AHeroCharacterBase::DamageRandomSkill() {
}

void AHeroCharacterBase::ClientRevived_Implementation() {
}

void AHeroCharacterBase::ClientRejoinDead_Implementation() {
}

void AHeroCharacterBase::CharacterRevivedTagChanged(FGameplayTag Tag, int32 Count) {
}

bool AHeroCharacterBase::CanRevive_Implementation() const {
    return false;
}

void AHeroCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHeroCharacterBase, bCharacterNamePermanentHidden);
    DOREPLIFETIME(AHeroCharacterBase, DynamicMeshes);
    DOREPLIFETIME(AHeroCharacterBase, bFlashLightHidden);
    DOREPLIFETIME(AHeroCharacterBase, PlayerOwner);
    DOREPLIFETIME(AHeroCharacterBase, HeroPlayerState);
    DOREPLIFETIME(AHeroCharacterBase, PowerSuitModel);
    DOREPLIFETIME(AHeroCharacterBase, bHideWeapons);
    DOREPLIFETIME(AHeroCharacterBase, HeroName);
    DOREPLIFETIME(AHeroCharacterBase, bIsInDoors);
}


