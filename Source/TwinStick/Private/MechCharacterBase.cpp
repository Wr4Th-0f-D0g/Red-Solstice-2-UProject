#include "MechCharacterBase.h"
#include "Components/ArrowComponent.h"
#include "FMODAudioComponent.h"
#include "MapDynamicActorComponent.h"
#include "ArmorComponent.h"
#include "ESolsticeSignificanceType.h"
#include "HeroSkillsComponent.h"
#include "MechMovementComponent.h"
#include "MechWeaponComponent.h"
#include "Net/UnrealNetwork.h"
#include "SolsticeSkeletalMeshComponent.h"

AMechCharacterBase::AMechCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMechMovementComponent>(TEXT("CharMoveComp"))) {
    this->ArmorComponent = CreateDefaultSubobject<UArmorComponent>(TEXT("ArmorComponent"));
    this->SignificanceType = ESolsticeSignificanceType::MechSuit;
    this->bIsHovered = false;
    this->InteractionStartRange = 100.00f;
    this->bDisableOverwatchOnPerceptionDamage = false;
    this->DynamicHealthBarTimeout = 0.00f;
    this->AwakenCloseByMembersRadius = 800.00f;
    this->MechOpenMontage = NULL;
    this->InteractComp = NULL;
    this->OverwatchComponent = NULL;
    this->OverwatchTarget = NULL;
    this->PlayerFilterClass = NULL;
    this->SkillsComponent = CreateDefaultSubobject<UHeroSkillsComponent>(TEXT("SkillsComponent"));
    this->bIsRooted = false;
    this->MechWeaponComponent = CreateDefaultSubobject<UMechWeaponComponent>(TEXT("MechWeaponComponent"));
    this->TakeDamageSound = NULL;
    this->MuzzleDirectionLeft = CreateDefaultSubobject<UArrowComponent>(TEXT("MuzzleLeft"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->MuzzleDirectionRight = CreateDefaultSubobject<UArrowComponent>(TEXT("MuzzleRight"));
    this->MuzzleDirectionCenter = CreateDefaultSubobject<UArrowComponent>(TEXT("MuzzleCenter"));
    this->LastDamageGroup = EDamageGroup::EDT_None;
    this->LastDamageTime = 0.00f;
    this->HealthBarWidgetClass = NULL;
    this->DynamicMaterial = NULL;
    this->bMechHovered = false;
    this->HealthWidgetTimeout = 1.00f;
    this->ControllingPawn = NULL;
    this->DamageSoundComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("DamageSound AC"));
    this->MapDynamicActorComponent = CreateDefaultSubobject<UMapDynamicActorComponent>(TEXT("MapDynamicActorComponenet"));
    //this->MuzzleDirectionLeft->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USolsticeSkeletalMeshComponent>(this));
    //this->MuzzleDirectionRight->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USolsticeSkeletalMeshComponent>(this));
    //this->MuzzleDirectionCenter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USolsticeSkeletalMeshComponent>(this));
    this->DamageSoundComponent->SetupAttachment(RootComponent);
}

void AMechCharacterBase::SetupSkills() {
}

void AMechCharacterBase::SetupBuffs_Implementation() {
}

void AMechCharacterBase::SetCharacterNameWidgetHidden(bool bNewHidden) {
}

void AMechCharacterBase::RemoveHealthBar() {
}

void AMechCharacterBase::RemoveBuffs_Implementation() {
}

void AMechCharacterBase::OnRep_ControllingPawn(ASolsticeCharacterBase* PrevControllingPawn) {
}

void AMechCharacterBase::NotifyFinishSpawning_Implementation() {
}

void AMechCharacterBase::MoveRight(float Axis) {
}

void AMechCharacterBase::MoveForward(float Axis) {
}

bool AMechCharacterBase::MechEverEntered() const {
    return false;
}





bool AMechCharacterBase::HasControllingPawn() const {
    return false;
}

void AMechCharacterBase::HandleTagRemoved(ASolsticeCharacterBase* Char, FGameplayTag RemovedTag) {
}

void AMechCharacterBase::HandleTagAdded(ASolsticeCharacterBase* Char, FGameplayTag AddedTag) {
}

void AMechCharacterBase::HandleOverwatchTargetSelected(AActor* Target, AActor* PreviousTarget) {
}

void AMechCharacterBase::HandleOverwatchStatusChanged(bool bEnabled) {
}

void AMechCharacterBase::HandleMechEnergyChanged(float Energy, UEnergyComponent* InEnergyComponent) {
}

void AMechCharacterBase::HandleControllingPawnDied(AActor* Character, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void AMechCharacterBase::HandleCharacterEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

USkill* AMechCharacterBase::GetSkill(const FGameplayTag& SkillTag) const {
    return NULL;
}

ASolsticeCharacterBase* AMechCharacterBase::GetControllingPawn() const {
    return NULL;
}

void AMechCharacterBase::ForceControllingPawnOutOfMech() {
}

bool AMechCharacterBase::ExitMech(ASolsticeCharacterBase* SolsticeCharacter) {
    return false;
}

bool AMechCharacterBase::EnterMech(ASolsticeCharacterBase* SolsticeCharacter) {
    return false;
}

void AMechCharacterBase::DiscoverHealthbars(AController* InController, EIndicatorType IndicatorType) {
}

void AMechCharacterBase::CreateHealthBar() {
}

void AMechCharacterBase::CopyAttributesFromPawn(ASolsticeCharacterBase* OtherPawn) {
}

void AMechCharacterBase::ClientActivateMechExitSkill_Implementation() {
}

bool AMechCharacterBase::CanRemoveCharacterFromMech_Implementation(ASolsticeCharacterBase* InCharacter) {
    return false;
}

bool AMechCharacterBase::CanAttachCharacterToMech_Implementation(ASolsticeCharacterBase* InCharacter) {
    return false;
}

void AMechCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMechCharacterBase, ControllingPawn);
}


