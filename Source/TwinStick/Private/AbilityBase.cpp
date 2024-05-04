#include "AbilityBase.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UAbilityBase::UAbilityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableMoveToLocation = false;
    this->bOverrideTickDisable = false;
    this->PawnInstigator = NULL;
    this->bAbilityRunning = false;
    this->CooldownTime = 0.00f;
    this->bCooldownReady = true;
    this->CooldownTimeRemaining = 0.00f;
    this->InitialCooldown = 0.00f;
    this->bIsTemporaryGrantedAbility = false;
    this->OverrideFilter = NULL;
    this->bUseCachedLocationOnly = false;
    this->ActivationObject = NULL;
    this->bShouldServerSimulateActivation = false;
    this->EnterCooldownCondition = EActivationStatus::EAS_Fired;
    this->DamageType = EDamageGroup::EDT_None;
    this->ActivationLocationMode = EActivationLocation::EAL_Self;
    this->ActivationRange = 0.00f;
    this->ActivationCost = 0.00f;
    this->EndPolicy = EAbilityEndPolicy::Automatic;
    this->BotAbilityDefinitionTable = NULL;
    this->AbilityDescriptionDataTable = NULL;
    this->BotSkillOverride = NULL;
    this->Level = 0;
    this->FModAbilityAC = NULL;
    this->SkillLoadSound = NULL;
    this->SkillFireSound = NULL;
    this->SkillFailLoadSound = NULL;
    this->UseFailedCooldownSound = NULL;
    this->CooldownFinishedSound = NULL;
}

void UAbilityBase::UpdateActivationRange() {
}

void UAbilityBase::StartCooldown(float OverrideCooldownTime) {
}

AAbilityProjectileActorBase* UAbilityBase::SpawnProjectileActor(TSubclassOf<AAbilityProjectileActorBase> ProjectileActorClass, const FTransform& SpawnTransform, const FVector& TargetLocation, const FPredictProjectilePathResult& ProjectilePath, float HorizontalVelocity, bool bSetTeamToInstigator) {
    return NULL;
}

AAbilityActorBase* UAbilityBase::SpawnAbilityActor(TSubclassOf<AAbilityActorBase> AbilityActorClass, const FTransform& SpawnTransform, const FVector TargetLocation, bool bSetTeamToInstigator) {
    return NULL;
}

bool UAbilityBase::ShouldPredictProjectilePath_Implementation() const {
    return false;
}

void UAbilityBase::SetPawnInstigator(APawn* InPawn, bool bQueueIfNoController) {
}

void UAbilityBase::SetCooldownTimeRemaining(float Value) {
}

void UAbilityBase::SetCooldownTime(float Value) {
}

void UAbilityBase::SetCooldownReadyClient_Implementation(bool bReady) {
}

void UAbilityBase::ServerResetAbility_Implementation(uint8 PredictionKey, float ClientTimeStamp) {
}

void UAbilityBase::ServerFireAbility_Implementation(const FVector_NetQuantize10& Vector, uint16 PredictionKey, float ClientTimeStamp, float PercentCharged) {
}

void UAbilityBase::ServerDoForceAbort_Implementation(bool bRollback) {
}

void UAbilityBase::ServerDeactivateAbility_Implementation(const FVector_NetQuantize10& TargetLocation, uint16 PredictionKey, float ClientTimeStamp, float PercentCharged) {
}

void UAbilityBase::ServerConfirmAbility_Implementation(const FVector_NetQuantize10& TargetLocation, uint16 PredictionKey, float ClientTimeStamp, float PercentCharged) {
}

void UAbilityBase::ServerClearGrantedAbility_Implementation() {
}

void UAbilityBase::ServerActivateAbility_Implementation(const FVector_NetQuantize10& TargetLocation, uint16 PredictionKey, float ClientTimeStamp) {
}

bool UAbilityBase::RequiresResourcesToActivate_Implementation() const {
    return false;
}

void UAbilityBase::RemoveAbilityBuff(AActor* TargetActor, TSubclassOf<USolsticeBuffBase> BuffClass, int32 Stacks) {
}

bool UAbilityBase::PawnInstigatorHasTag(const FGameplayTag& TagToCheck) const {
    return false;
}


void UAbilityBase::OnRep_PawnInstigator() {
}

void UAbilityBase::OnRep_Level(int32 OldLevel) {
}

void UAbilityBase::OnRep_InitialCooldown(float OldValue) {
}

void UAbilityBase::OnRep_GrantedPayload() {
}








FTransform UAbilityBase::MakeAbilityActorSpawnTransform(const FVector& TargetLocation, const FVector& SpawnLocationOffset, float SpawnPitchOffset) {
    return FTransform{};
}

TScriptInterface<IResource> UAbilityBase::K2_GetResource(bool& bSuccess) {
    return NULL;
}

bool UAbilityBase::K2_CanDeactivate_Implementation() const {
    return false;
}

bool UAbilityBase::K2_CanConfirm_Implementation(FVector TargetLocation, bool bOnDeactivation) const {
    return false;
}

bool UAbilityBase::K2_CanActivate_Implementation() const {
    return false;
}

bool UAbilityBase::K2_CanAbort_Implementation() const {
    return false;
}

bool UAbilityBase::IsToggleAbility() const {
    return false;
}

bool UAbilityBase::IsTargetedLocationInRange() const {
    return false;
}

bool UAbilityBase::IsOutsideMinimumRange(float Tolerance) const {
    return false;
}

bool UAbilityBase::IsCooldownReady() const {
    return false;
}

bool UAbilityBase::IsAbilityRunning() const {
    return false;
}

bool UAbilityBase::IsAbilityActive() const {
    return false;
}

bool UAbilityBase::HasResourcesToActivate() const {
    return false;
}

bool UAbilityBase::HasAuthority() const {
    return false;
}

void UAbilityBase::HandleMoveToFailed(TEnumAsByte<EPathFollowingResult::Type> Result) {
}

void UAbilityBase::HandleMoveTargetReached(bool AtGoal) {
}

void UAbilityBase::HandleMoveTargetChanged() {
}

void UAbilityBase::HandleAttributeAspectChanged(FName InAspectName) {
}

void UAbilityBase::HandleActivationStatusChanged(EActivationStatus Status) {
}

FVector UAbilityBase::GetTargetLocation_Implementation() const {
    return FVector{};
}

int32 UAbilityBase::GetRemainingUses() const {
    return 0;
}

UClass* UAbilityBase::GetRealDamageSource_Implementation() const {
    return NULL;
}

float UAbilityBase::GetRadius_Implementation() const {
    return 0.0f;
}

APawn* UAbilityBase::GetPawnInstigator() const {
    return NULL;
}

TEnumAsByte<ENetRole> UAbilityBase::GetNetRole() const {
    return ROLE_None;
}

float UAbilityBase::GetMinimumRange_Implementation() const {
    return 0.0f;
}

int32 UAbilityBase::GetMaximumLevel() const {
    return 0;
}

bool UAbilityBase::GetIsActive() const {
    return false;
}

float UAbilityBase::GetHeal_Implementation() const {
    return 0.0f;
}

float UAbilityBase::GetDuration_Implementation() const {
    return 0.0f;
}

float UAbilityBase::GetDoT_Implementation() const {
    return 0.0f;
}

float UAbilityBase::GetDamage_Implementation() const {
    return 0.0f;
}

float UAbilityBase::GetCooldownTimeRemaining() const {
    return 0.0f;
}

float UAbilityBase::GetCooldownTime() const {
    return 0.0f;
}

bool UAbilityBase::GetCooldownReady() const {
    return false;
}

float UAbilityBase::GetCooldownProgress() const {
    return 0.0f;
}

float UAbilityBase::GetAspectValueForNextLevel(FName AspectName, bool& bSuccess) const {
    return 0.0f;
}

float UAbilityBase::GetAspectValueForLevel(FName InAspectName, int32 InLevel, bool& bOutSuccess) const {
    return 0.0f;
}

float UAbilityBase::GetAspectValueForCurrentLevel(FName AspectName, bool& bSuccess) const {
    return 0.0f;
}

FText UAbilityBase::GetAspectTextForNextLevel() const {
    return FText::GetEmpty();
}

FText UAbilityBase::GetAspectTextForLevel(int32 InLevel) const {
    return FText::GetEmpty();
}

FText UAbilityBase::GetAspectTextForCurrentLevel() const {
    return FText::GetEmpty();
}

TArray<FString> UAbilityBase::GetAspectStringsForNextLevel() const {
    return TArray<FString>();
}

TArray<FString> UAbilityBase::GetAspectStringsForLevel(int32 InLevel) const {
    return TArray<FString>();
}

TArray<FString> UAbilityBase::GetAspectStringsForCurrentLevel() const {
    return TArray<FString>();
}

FAspectValueSet UAbilityBase::GetAspectSetForCurrentLevel() const {
    return FAspectValueSet{};
}

FVector UAbilityBase::GetAreaMarkerLocation_Implementation() const {
    return FVector{};
}

AAoE_MarkerBase* UAbilityBase::GetAreaMarker() const {
    return NULL;
}

float UAbilityBase::GetAmount_Implementation() const {
    return 0.0f;
}

EActivationStatus UAbilityBase::GetActivationStatus() const {
    return EActivationStatus::EAS_Inactive;
}

float UAbilityBase::GetActivationRangeModifier_Implementation() const {
    return 0.0f;
}

float UAbilityBase::GetActivationRange() const {
    return 0.0f;
}

FActivationParameters UAbilityBase::GetActivationParameters() const {
    return FActivationParameters{};
}

float UAbilityBase::GetActivationCost() const {
    return 0.0f;
}

float UAbilityBase::GetAbilityActorCollisionRadius(TSubclassOf<AAbilityActorBase> AbilityActorClass) const {
    return 0.0f;
}

void UAbilityBase::EndTaskByInstanceName(FName InstanceName) {
}

void UAbilityBase::DrawProjectilePath(USplineComponent* InSpline, UStaticMesh* StaticMesh, UMaterialInterface* Material, bool GoodArc) {
}

void UAbilityBase::DoForceAbort(bool bRollback) {
}

void UAbilityBase::DoEndAbility(bool bReplicateEndToServer) {
}

void UAbilityBase::DoDeactivate() {
}

void UAbilityBase::DoActivateAtLocation(const FVector& TargetLocation, bool bAutoActivateConfirms) {
}

void UAbilityBase::DoActivate() {
}



TScriptInterface<IResource> UAbilityBase::CreateResource_Implementation() {
    return NULL;
}

void UAbilityBase::ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask) {
}

FVector UAbilityBase::CoerceTargetOutsideMinimumRange(FVector InLocation) const {
    return FVector{};
}

FVector UAbilityBase::CoerceTargetIntoMaximumRange(FVector InLocation) const {
    return FVector{};
}

void UAbilityBase::ClientToggleSkillDeactivated_Implementation() {
}

void UAbilityBase::ClientAcknowledgeFire_Implementation(uint16 PredictionKey, float ClientTimeStamp, float ServerTimeStamp, float AvailableResources, bool bSuccessful) {
}

void UAbilityBase::ClientAcknowledgeDeactivation_Implementation(uint16 PredictionKey, float ClientTimeStamp, float ServerTimeStamp, float AvailableResources, bool Successful) {
}

void UAbilityBase::ClientAcknowledgeConfirmation_Implementation(uint16 PredictionKey, float ClientTimeStamp, float ServerTimeStamp, bool Successful) {
}

void UAbilityBase::ClientAcknowledgeActivation_Implementation(uint16 PredictionKey, float ClientTimeStamp, float ServerTimeStamp, bool Successful) {
}

void UAbilityBase::ClientAcknowledgeAbort_Implementation(uint16 PredictionKey, float ServerTimeStamp, float AvailableResources, bool bRollback) {
}

void UAbilityBase::ClearProjectilePath(USplineComponent* InSpline) {
}

bool UAbilityBase::CanDeactivate() const {
    return false;
}

bool UAbilityBase::CanConfirm(const FVector& TargetLocation, bool bOnDeactivation) const {
    return false;
}

void UAbilityBase::CancelTaskByInstanceName(FName InstanceName) {
}

bool UAbilityBase::CanActivate() const {
    return false;
}

bool UAbilityBase::CanAbort() const {
    return false;
}

bool UAbilityBase::CalculateProjectilePath(float PreferredPitch, float MaximumPitch, const FVector& Start, const FVector& End, TSubclassOf<AAbilityActorBase> AbilityActorClass, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, FPredictProjectilePathResult& PredictResult, FVector& LaunchVelocity, float& FlightTime, float CollisionRadiusOverride, float Gravity) const {
    return false;
}

bool UAbilityBase::CalculateArcPath(float PreferredPitch, float MaximumPitch, const FVector& Start, const FVector& End, bool bTraceWithChannel, const TEnumAsByte<ECollisionChannel> TraceChannel, TSubclassOf<AAbilityActorBase> AbilityActorClass, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, FPredictProjectilePathResult& PredictResult, FVector& LaunchVelocity, float& FlightTime, float CollisionRadiusOverride, float Gravity) const {
    return false;
}

void UAbilityBase::CacheTargetLocation(const FVector& InLocation, bool bOnlyUseCachedLocation) {
}





USolsticeBuffBase* UAbilityBase::AddAbilityBuff(AActor* TargetActor, TSubclassOf<USolsticeBuffBase> BuffClass, int32 Stacks) {
    return NULL;
}


void UAbilityBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAbilityBase, PawnInstigator);
    DOREPLIFETIME(UAbilityBase, InitialCooldown);
    DOREPLIFETIME(UAbilityBase, GrantedPayload);
    DOREPLIFETIME(UAbilityBase, Level);
}


