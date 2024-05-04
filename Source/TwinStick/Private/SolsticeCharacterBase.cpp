#include "SolsticeCharacterBase.h"
#include "Components/SceneComponent.h"
#include "GameplayTasksComponent.h"
#include "AttributeComponent.h"
#include "BrutalExplodeComponent.h"
#include "EnvironmentInteractionComponent.h"
#include "GameplayTagComponent.h"
#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "SolsticeSkeletalMeshComponent.h"
#include "Templates/SubclassOf.h"

ASolsticeCharacterBase::ASolsticeCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USolsticeSkeletalMeshComponent>(TEXT("CharacterMesh0"))) {
    this->bOverrideCMCTickRate = false;
    this->OverrideCMCTickRateMin = 0.25f;
    this->OverrideCMCTickRateMax = 0.35f;
    this->bShouldDisableTickAfterMontage = false;
    this->ShotOriginBone = TEXT("spine_03");
    this->CharacterType = ECharacterType::ECT_Hero;
    this->PickupAndDropObjectMontage = NULL;
    this->PickupAndThrowObjectMontage = NULL;
    this->PerceptionTargetComponent = NULL;
    this->GenericFootstepSound = NULL;
    this->GenericFootstepSoundRun = NULL;
    this->FootstepDecal = NULL;
    this->FootstepSoundDeliveryActor = NULL;
    this->FootstepDecalLifeSpan = 5.00f;
    this->FootstepDecalFadeoutStartTime = 3.50f;
    this->BrutalExplodeComponent = CreateDefaultSubobject<UBrutalExplodeComponent>(TEXT("BrutalExplodeComponent"));
    this->AITargetAttachPoint = CreateDefaultSubobject<USceneComponent>(TEXT("AITargetAttachPoint"));
    this->bHideMesh = false;
    this->bDisableCollisions = false;
    this->RotationMode = ERotationMode::ERM_Movement;
    this->DesiredYaw = 0.00f;
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->IncapacitationState = 0;
    this->KilledScore = 0;
    this->SuppressionComponent = NULL;
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
    this->ArmorComponent = NULL;
    this->GameplayTasksComponent = CreateDefaultSubobject<UGameplayTasksComponent>(TEXT("GameplayTasksComponent"));
    this->EnergyComponent = NULL;
    this->AttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("AttributeComponent"));
    this->ActiveWeaponComponent = NULL;
    this->WeaponComponent = NULL;
    this->EnvironmentInteractionComponent = CreateDefaultSubobject<UEnvironmentInteractionComponent>(TEXT("EnvironmentInteractionComponent"));
    this->ControllingVehicle = NULL;
    this->SignificanceType = ESolsticeSignificanceType::Player;
    const FProperty* p_Mesh = GetClass()->FindPropertyByName("Mesh");
    (*p_Mesh->ContainerPtrToValuePtr<USkeletalMeshComponent*>(this))->SetupAttachment(RootComponent);
}

void ASolsticeCharacterBase::UnGrantAllAbilities() {
}

void ASolsticeCharacterBase::UnGrantAbility(TSubclassOf<UAbilityBase> AbilityClass) {
}

bool ASolsticeCharacterBase::TraceAndDoJump(FVector GroundDestination, float JumpArc, float PathTracePercent, FVector& OutLaunchVelocity, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float DrawDebugDuration) {
    return false;
}

void ASolsticeCharacterBase::Suicide() {
}

void ASolsticeCharacterBase::StopReplicatedMontage(UAnimMontage* StopMontage, float OverrideBlendOutTime) {
}

void ASolsticeCharacterBase::SetTeam(ESolsticeTeam NewTeam) {
}

void ASolsticeCharacterBase::SetMeshHidden(bool bNewHidden) {
}

void ASolsticeCharacterBase::SetKilledScore(int32 InScore) {
}

void ASolsticeCharacterBase::SetFocalPoint(const FVector& FP) {
}

void ASolsticeCharacterBase::SetFocalActor(AActor* FocalActor) {
}

void ASolsticeCharacterBase::SetCollisionsDisabled(bool bLeaveRootCompStatic) {
}

void ASolsticeCharacterBase::SetCharacterRotation(FRotator CharDesiredRotation, ERotationMode NewRotationMode) {
}

void ASolsticeCharacterBase::ServerStopReplicatedMontage_Implementation(UAnimMontage* StopMontage, float OverrideBlend) {
}

void ASolsticeCharacterBase::ServerSetRotationUnreliable_Implementation(FRotator InRot, bool bTeleport, bool bMulticast) {
}
bool ASolsticeCharacterBase::ServerSetRotationUnreliable_Validate(FRotator InRot, bool bTeleport, bool bMulticast) {
    return true;
}

void ASolsticeCharacterBase::ServerSetRotation_Implementation(FRotator InRot, bool bTeleport, bool bMulticast) {
}
bool ASolsticeCharacterBase::ServerSetRotation_Validate(FRotator InRot, bool bTeleport, bool bMulticast) {
    return true;
}

void ASolsticeCharacterBase::ServerSetLocationUnreliable_Implementation(FVector InLoc, bool bTeleport, bool bMulticast) {
}
bool ASolsticeCharacterBase::ServerSetLocationUnreliable_Validate(FVector InLoc, bool bTeleport, bool bMulticast) {
    return true;
}

void ASolsticeCharacterBase::ServerSetLocation_Implementation(FVector InLoc, bool bTeleport, bool bMulticast) {
}
bool ASolsticeCharacterBase::ServerSetLocation_Validate(FVector InLoc, bool bTeleport, bool bMulticast) {
    return true;
}

void ASolsticeCharacterBase::ServerSetFocalPoint_Implementation(const FVector& FP) {
}

void ASolsticeCharacterBase::ServerSetFocalActor_Implementation(AActor* FocalActor) {
}

void ASolsticeCharacterBase::ServerRemoveGameplayTag_Implementation(FGameplayTag Tag, bool bRemoveChildren) {
}

void ASolsticeCharacterBase::ServerPlayReplicatedMontage_Implementation(UAnimMontage* MontageToPlay, FMontageInfoTags MontageTags, float InPlayRate, float StartPosition, FName StartSection, UObject* Payload) {
}

void ASolsticeCharacterBase::ServerPlayMontage_Implementation(UAnimMontage* Montage, float PlayRate, FName StartSection, bool bMulticast) {
}
bool ASolsticeCharacterBase::ServerPlayMontage_Validate(UAnimMontage* Montage, float PlayRate, FName StartSection, bool bMulticast) {
    return true;
}

void ASolsticeCharacterBase::ServerClearFocalPoint_Implementation() {
}

void ASolsticeCharacterBase::ServerAddTemporaryTag_Implementation(const FGameplayTag& InTag, float Duration) {
}

void ASolsticeCharacterBase::ServerAddGameplayTag_Implementation(FGameplayTag Tag) {
}

void ASolsticeCharacterBase::RemoveGameplayTags(FGameplayTagContainer InTags, bool bRemoveChildren, bool bAllowClientRemove) {
}

void ASolsticeCharacterBase::RemoveGameplayTag(FGameplayTag InTag, bool bRemoveChildren, bool bAllowClientRemove) {
}



float ASolsticeCharacterBase::PlayReplicatedMontage(UAnimMontage* MontageToPlay, FMontageInfoTags MontageTags, float InPlayRate, float StartPosition, FName StartSection, UObject* Payload, bool bFromServerRPC, bool bFromAbility) {
    return 0.0f;
}

void ASolsticeCharacterBase::OnTemporaryAbilityFinished(UAbilityBase* Ability) {
}

void ASolsticeCharacterBase::OnRep_ReplicatedMontage() {
}

void ASolsticeCharacterBase::OnRep_IncapacitationState(uint8 OldValue) {
}

void ASolsticeCharacterBase::OnRep_HideMesh() {
}

void ASolsticeCharacterBase::OnRep_DisableCollisions() {
}

void ASolsticeCharacterBase::OnRep_DesiredYaw() {
}

void ASolsticeCharacterBase::OnRep_ControllingVehicle(APawn* PrevVehicle) {
}

void ASolsticeCharacterBase::MulticastRotationUnreliable_Implementation(FRotator InRot, bool bTeleport) {
}

void ASolsticeCharacterBase::MulticastRotation_Implementation(FRotator InRot, bool bTeleport) {
}

void ASolsticeCharacterBase::MulticastMontage_Implementation(USkeletalMeshComponent* InMesh, UAnimMontage* Montage, float PlayRate, FName StartSection, float StartTime) {
}

void ASolsticeCharacterBase::MulticastLocationUnreliable_Implementation(FVector InLoc, bool bTeleport) {
}

void ASolsticeCharacterBase::MulticastLocation_Implementation(FVector InLoc, bool bTeleport) {
}

APlayerController* ASolsticeCharacterBase::K2_GetPlayerController() const {
    return NULL;
}

UPerceptionTargetComponent* ASolsticeCharacterBase::K2_GetPerceptionTargetComponent() const {
    return NULL;
}

UAnimInstance* ASolsticeCharacterBase::K2_GetAnimInstance() const {
    return NULL;
}

bool ASolsticeCharacterBase::IsSuppressed() const {
    return false;
}

bool ASolsticeCharacterBase::IsStunned() const {
    return false;
}

bool ASolsticeCharacterBase::IsStandingOnTrain() const {
    return false;
}

bool ASolsticeCharacterBase::IsRooted() const {
    return false;
}

bool ASolsticeCharacterBase::IsLocalPlayerPawn() const {
    return false;
}

bool ASolsticeCharacterBase::IsIncapacitated() const {
    return false;
}

bool ASolsticeCharacterBase::IsGrabbed() const {
    return false;
}

bool ASolsticeCharacterBase::IsDead() const {
    return false;
}

bool ASolsticeCharacterBase::IsAllowedInsideBuildings_Implementation() {
    return false;
}

bool ASolsticeCharacterBase::HasMatchingGameplayTag(FGameplayTag InTag) const {
    return false;
}

bool ASolsticeCharacterBase::HasAnyMatchingGameplayTags(const FGameplayTagContainer& InTagContainer) const {
    return false;
}

bool ASolsticeCharacterBase::HasAllMatchingGameplayTags(const FGameplayTagContainer& InTagContainer) const {
    return false;
}

void ASolsticeCharacterBase::HandleSuppressed(bool bSuppressed) {
}

void ASolsticeCharacterBase::HandleIncapacitationStateChanged() {
}

void ASolsticeCharacterBase::HandleCharacterDied(AActor* Character, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void ASolsticeCharacterBase::HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue) {
}

void ASolsticeCharacterBase::HandleAbilityUsed_Implementation(UAbilityBase* Ability, const FGameplayTag& AbilityTag) {
}

void ASolsticeCharacterBase::HandleAbilityFinished_Implementation(UAbilityBase* Ability, const FGameplayTag& AbilityTag) {
}

bool ASolsticeCharacterBase::GrantAndActivateAbility(TSubclassOf<UAbilityBase> Ability, FGrantAndActivatePayload Payload) {
    return false;
}

UAbilityBase* ASolsticeCharacterBase::GrantAbility(TSubclassOf<UAbilityBase> AbilityClass, int32 AbilityLevel) {
    return NULL;
}

USolsticeWeaponComponent* ASolsticeCharacterBase::GetWeaponComponent() const {
    return NULL;
}

float ASolsticeCharacterBase::GetTopArmorBlockPercent() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetTopArmorBlockArmor() const {
    return 0.0f;
}

ESolsticeTeam ASolsticeCharacterBase::GetTeamEnum() const {
    return ESolsticeTeam::HeroMarine;
}

float ASolsticeCharacterBase::GetSuppressionRegenerationMultiplier() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetSuppressionRegeneration() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetSuppressionPercent() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetSuppressionMax() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetSuppression() const {
    return 0.0f;
}

USolsticeSkeletalMeshComponent* ASolsticeCharacterBase::GetSolsticeSkeletalMesh() const {
    return NULL;
}

UHeroSkillsComponent* ASolsticeCharacterBase::GetSkillsComponent() const {
    return NULL;
}

ARTS_PlayerController* ASolsticeCharacterBase::GetRTSController() const {
    return NULL;
}

UObject* ASolsticeCharacterBase::GetMontagePayload() const {
    return NULL;
}

ELocomotionMode ASolsticeCharacterBase::GetLocomotionMode() const {
    return ELocomotionMode::ELM_None;
}

int32 ASolsticeCharacterBase::GetKilledScore() const {
    return 0;
}

float ASolsticeCharacterBase::GetHealthRegeneration() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetHealthPercent() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetHealthMax() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetHealth() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetEnergyRegeneration() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetEnergyPercent() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetEnergyMax() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetEnergy() const {
    return 0.0f;
}

AMechCharacterBase* ASolsticeCharacterBase::GetControllingMech() const {
    return NULL;
}

ASolsticeDrivableVehicle* ASolsticeCharacterBase::GetControllingDrivableVehicle() const {
    return NULL;
}

bool ASolsticeCharacterBase::GetComponentWithSocket(FName SocketName, USceneComponent*& OutComponent) {
    return false;
}

ECharacterType ASolsticeCharacterBase::GetCharacterType() const {
    return ECharacterType::ECT_Hero;
}

UBrutalExplodeComponent* ASolsticeCharacterBase::GetBrutalExplodeComponent() const {
    return NULL;
}

float ASolsticeCharacterBase::GetAttributeValueUnchecked(EAttribute Attribute) const {
    return 0.0f;
}

bool ASolsticeCharacterBase::GetAttributeValue(EAttribute Attribute, float& CurrentValue) const {
    return false;
}

float ASolsticeCharacterBase::GetArmorRegeneration() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetArmorPercent() const {
    return 0.0f;
}

float ASolsticeCharacterBase::GetArmorMax() const {
    return 0.0f;
}

int32 ASolsticeCharacterBase::GetArmorKineticResistance() const {
    return 0;
}

int32 ASolsticeCharacterBase::GetArmorEnergyResistance() const {
    return 0;
}

int32 ASolsticeCharacterBase::GetArmorDestructiveResistance() const {
    return 0;
}

int32 ASolsticeCharacterBase::GetArmorBlocksMax() const {
    return 0;
}

int32 ASolsticeCharacterBase::GetArmorBlocks() const {
    return 0;
}

float ASolsticeCharacterBase::GetArmor() const {
    return 0.0f;
}

FGameplayTagContainer ASolsticeCharacterBase::GetAllCharacterGameplayTags() const {
    return FGameplayTagContainer{};
}

FVector ASolsticeCharacterBase::GetActorFeetLocation() const {
    return FVector{};
}

USolsticeWeaponComponent* ASolsticeCharacterBase::GetActiveWeaponComponent() const {
    return NULL;
}

void ASolsticeCharacterBase::ExitedVehicle_Implementation(APawn* Vehicle) {
}

void ASolsticeCharacterBase::EnteredVehicle_Implementation(APawn* Vehicle) {
}

void ASolsticeCharacterBase::ClientStopMontage_Implementation(float BlendOutTime, UAnimMontage* AnimMontage) {
}

void ASolsticeCharacterBase::ClientSetFocalPoint_Implementation(const FVector& FP) {
}

void ASolsticeCharacterBase::ClientSetFocalActor_Implementation(AActor* FocalActor) {
}

void ASolsticeCharacterBase::ClientRemoveGameplayTag_Implementation(FGameplayTag Tag, bool bRemoveChildren) {
}

void ASolsticeCharacterBase::ClientClearFocalPoint_Implementation() {
}

void ASolsticeCharacterBase::ClientAddGameplayTag_Implementation(FGameplayTag Tag) {
}

void ASolsticeCharacterBase::ClearFocalPoint() {
}

void ASolsticeCharacterBase::ClearAllGameplayTags(bool bAddSpawnTags) {
}

bool ASolsticeCharacterBase::CanUseWeapons() const {
    return false;
}

bool ASolsticeCharacterBase::CanUseSkills() const {
    return false;
}

bool ASolsticeCharacterBase::CanShowFootstep_Implementation() {
    return false;
}

void ASolsticeCharacterBase::AddTemporaryGameplayTag(FGameplayTag InTag, float Duration, bool bAllowClientAdd) {
}

void ASolsticeCharacterBase::AddGameplayTags(FGameplayTagContainer InTags, bool bAllowClientAdd) {
}

void ASolsticeCharacterBase::AddGameplayTag(FGameplayTag InTag, bool bAllowClientAdd) {
}

void ASolsticeCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASolsticeCharacterBase, ReplicatedMontage);
    DOREPLIFETIME(ASolsticeCharacterBase, bHideMesh);
    DOREPLIFETIME(ASolsticeCharacterBase, bDisableCollisions);
    DOREPLIFETIME(ASolsticeCharacterBase, DesiredYaw);
    DOREPLIFETIME(ASolsticeCharacterBase, IncapacitationState);
    DOREPLIFETIME(ASolsticeCharacterBase, ActiveWeaponComponent);
    DOREPLIFETIME(ASolsticeCharacterBase, ControllingVehicle);
    DOREPLIFETIME(ASolsticeCharacterBase, MinimalReplicatedTagContainer);
}


