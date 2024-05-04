#include "RTS_PlayerController.h"
#include "GamepadTraceComponent.h"
#include "InteractionDetectionGamepad.h"
#include "InteractionDetectionRTS.h"
#include "InteractionDetectionWASD.h"
#include "MouseAndKeyboardTraceComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

ARTS_PlayerController::ARTS_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoManageActiveCameraTarget = false;
    this->ClickEventKeys.AddDefaulted(1);
    this->InteractionDetectionRTS = CreateDefaultSubobject<UInteractionDetectionRTS>(TEXT("InteractionDetectionRTS"));
    this->InteractionDetectionWASD = CreateDefaultSubobject<UInteractionDetectionWASD>(TEXT("InterationDetectionWASD"));
    this->InteractionDetectionGamepad = CreateDefaultSubobject<UInteractionDetectionGamepad>(TEXT("InterationDetectionGamepad"));
    this->MouseAndKeyboardTraceComponent = CreateDefaultSubobject<UMouseAndKeyboardTraceComponent>(TEXT("MouseAndKeyboardTraceComponent"));
    this->GamepadTraceComponent = CreateDefaultSubobject<UGamepadTraceComponent>(TEXT("GamepadTraceComponent"));
    this->HeroInputComponent = NULL;
    this->VehicleInputComponent = NULL;
    this->ObserverInputComponent = NULL;
    this->ControlMode = ESolsticeControlMode::RTS;
    this->CachedControlMode = ESolsticeControlMode::RTS;
    this->ControlledVehicle = NULL;
    this->VehicleMovementController = NULL;
    this->VehicleMovementControllerClass = NULL;
    this->ActiveInteractionDetectionComponent = NULL;
    this->ActiveTraceComponent = NULL;
    this->bWantsWASD = false;
    this->MechInputComponent = NULL;
    this->bIsTutorialCinematic = false;
    this->bMatchEnded = false;
    this->HoverTarget = NULL;
    this->InteractionContext = NULL;
    this->TracePositionUpdateFrequency = 40.00f;
    this->bBreakpoint = false;
    this->SphereRadiusForInteractables = 0.00f;
    this->SphereRadiusForDestructables = 0.00f;
    this->ControllerCameraSphereRadius = 250.00f;
    this->bIsUseOnlyInteractablesInFow = true;
    this->OverwatchEffect = NULL;
    this->OverwatchEffectComponent = NULL;
    this->OverWatchParticleRangeMultiplier = 1.00f;
    this->Hero = NULL;
    this->OldHero = NULL;
    this->Observer = NULL;
    this->InteractionActor = NULL;
    this->HeroController = NULL;
    this->NPCCachedHeroController = NULL;
    this->HeroPlayerState = NULL;
    this->OldHeroPlayerState = NULL;
    this->bIsShowingInteractableInfo = false;
    this->LocalInteractionWidgetActorClass = NULL;
    this->LocalInteractionWidgetActor = NULL;
    this->HoldMoveTimerTick = 0.50f;
}

void ARTS_PlayerController::TurnRecoveryOff() {
}

void ARTS_PlayerController::TracesCompleted(bool bHitUnderMouse) {
}


void ARTS_PlayerController::ToggleOverwatch() {
}


void ARTS_PlayerController::ToggleInputMode() {
}

void ARTS_PlayerController::ToggleFireComponent() {
}

void ARTS_PlayerController::ToggledShowInteractableWidgets(bool bShow) {
}

void ARTS_PlayerController::SwitchPawnToFollower(AFollowerHeroCharacterBase* FollowerPawn, bool bHideHero) {
}

void ARTS_PlayerController::SwitchPawnBackToPlayer() {
}

void ARTS_PlayerController::SwapWeapons(bool bSendRPC) {
}

void ARTS_PlayerController::SpinUp(float Axis) {
}

void ARTS_PlayerController::SpinRight(float Axis) {
}

void ARTS_PlayerController::ShowGameHUD() {
}

bool ARTS_PlayerController::ShouldBeIgnoredAsInteractable(AActor* Actor) const {
    return false;
}

bool ARTS_PlayerController::ShouldBeIgnoredAsDestructable(AActor* Actor) const {
    return false;
}


void ARTS_PlayerController::SetLastInteractionTarget(AActor* NewTarget) {
}

void ARTS_PlayerController::SetInteractionTarget(AActor* NewTarget) {
}

void ARTS_PlayerController::SetInteractionContext(AActor* NewInteractionContext) {
}

void ARTS_PlayerController::SetHoverTarget(AActor* NewHoverTarget) {
}

void ARTS_PlayerController::SetHero(AHeroCharacterBase* InHero) {
}

void ARTS_PlayerController::SetGamepadCursorModeSpeed(float NewCursorModeSpeed) {
}

void ARTS_PlayerController::SetGamepadCursorMode(bool SetCursorMode) {
}

void ARTS_PlayerController::SetFiringModeMode(EFiringMode NewFiringMode) {
}

void ARTS_PlayerController::SetFiringMode(FFiringMode NewFiringMode) {
}

void ARTS_PlayerController::SetControlMode(ESolsticeControlMode InControlMode) {
}

void ARTS_PlayerController::SetAttackTarget(AActor* NewTarget) {
}

void ARTS_PlayerController::ServerUpdateMousePosition_Implementation(FVector_NetQuantize CameraTracePos, FVector_NetQuantize WeaponTracePos) {
}

void ARTS_PlayerController::ServerToggleFireMode_Implementation() {
}

void ARTS_PlayerController::ServerSwapWeapons_Implementation(bool ToSecondary, float Timestamp, USolsticeWeaponComponent* TargetWeaponComponent) {
}

void ARTS_PlayerController::ServerRevive_Implementation() {
}

void ARTS_PlayerController::ServerRequestWorldTime_Implementation(float ClientTimeStamp) {
}

void ARTS_PlayerController::ServerReloadWeapon_Implementation() {
}

void ARTS_PlayerController::ServerOpenFire_Implementation() {
}

void ARTS_PlayerController::ServerNotifyRandomizerDone_Implementation() {
}

void ARTS_PlayerController::ServerNotifyPlayerPromoted_Implementation(int32 NewPlayerRank) {
}

void ARTS_PlayerController::ServerNotifyLoadedPrefab_Implementation(APrefabActor* PrefabActor) {
}

void ARTS_PlayerController::ServerEnableOverwatch_Implementation(bool bEnable, float Timestamp) {
}

void ARTS_PlayerController::ServerEnableManualAim_Implementation(bool bEnable) {
}

void ARTS_PlayerController::ServerConfirmActiveAbility_Implementation() {
}

void ARTS_PlayerController::ServerCeaseFire_Implementation() {
}

void ARTS_PlayerController::ServerAbortInteraction_Implementation() {
}

void ARTS_PlayerController::ServerAbortActiveAbility_Implementation() {
}

void ARTS_PlayerController::RunDestructibleDetection(FVector Center, float Radius) {
}

void ARTS_PlayerController::Revive() {
}

void ARTS_PlayerController::RequestWorldTime_Internal() {
}

void ARTS_PlayerController::RequestRecoveryMove(const FVector& RecoveryLoc) {
}

void ARTS_PlayerController::ReloadWeapon() {
}



void ARTS_PlayerController::OpenFire() {
}

void ARTS_PlayerController::OnRep_Hero() {
}

void ARTS_PlayerController::OnRep_ControlledVehicle(APawn* OldVehicle) {
}

void ARTS_PlayerController::OnOverwatchEffectChanged(UParticleSystemComponent* ParticleComponent, bool IsActive, float Range) {
}






void ARTS_PlayerController::K2_GetPlayerViewPoint(FVector& OutLocation, FRotator& OutRotation) const {
}







bool ARTS_PlayerController::IsUsingSpecializedWeaponMod() const {
    return false;
}

bool ARTS_PlayerController::IsUsingSecondaryWeapon() const {
    return false;
}

bool ARTS_PlayerController::IsSecondaryWeaponActive() const {
    return false;
}

bool ARTS_PlayerController::IsPrimaryWeaponActive() const {
    return false;
}

bool ARTS_PlayerController::IsInTargetedMode() const {
    return false;
}

bool ARTS_PlayerController::IsInOverwatchMode() const {
    return false;
}

bool ARTS_PlayerController::IsInManualMode() const {
    return false;
}

bool ARTS_PlayerController::IsInIdleMode() const {
    return false;
}

bool ARTS_PlayerController::IsControllingVehicle() const {
    return false;
}





void ARTS_PlayerController::HideGameHUD() {
}

bool ARTS_PlayerController::HasInteractionTarget() const {
    return false;
}

bool ARTS_PlayerController::HasInteractionContext() const {
    return false;
}

bool ARTS_PlayerController::HasHoverTarget() const {
    return false;
}

bool ARTS_PlayerController::HasAttackTarget() const {
    return false;
}



void ARTS_PlayerController::HandleOverwatchTargetChanged(AActor* NewTarget) {
}

void ARTS_PlayerController::HandleOutOfAmmo() {
}


void ARTS_PlayerController::HandleManualChangeRequested(bool bManual) {
}

void ARTS_PlayerController::HandleInputMethodChanged(ECommonInputType InInputType) {
}

void ARTS_PlayerController::HandleHeroIncapacitated(FGameplayTag Tag, int32 Count) {
}

void ARTS_PlayerController::HandleHeroDied(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

UHeroSkillsComponent* ARTS_PlayerController::GetSkillsComponent() const {
    return NULL;
}

float ARTS_PlayerController::GetServerWorldTimeDelta() const {
    return 0.0f;
}

float ARTS_PlayerController::GetServerWorldTime() const {
    return 0.0f;
}

AObserverPawn* ARTS_PlayerController::GetObserver() const {
    return NULL;
}

AActor* ARTS_PlayerController::GetLastInteractionTarget() const {
    return NULL;
}

AActor* ARTS_PlayerController::GetLastAttackTarget() const {
    return NULL;
}

AActor* ARTS_PlayerController::GetInteractionTarget() const {
    return NULL;
}

TArray<AActor*> ARTS_PlayerController::GetInteractableTargets() {
    return TArray<AActor*>();
}

bool ARTS_PlayerController::GetHoverInfoTarget(TScriptInterface<IInteractionInterface>& HoverInfoTarget, AActor*& InteractableActor) {
    return false;
}

ARTS_PlayerState* ARTS_PlayerController::GetHeroPlayerState() const {
    return NULL;
}

bool ARTS_PlayerController::GetGamepadCursorScreenPosition(float& LocationX, float& LocationY) {
    return false;
}

bool ARTS_PlayerController::GetGamepadCursorMode() const {
    return false;
}

EFiringMode ARTS_PlayerController::GetFiringModeMode() const {
    return EFiringMode::EFS_Idle;
}

FFiringMode ARTS_PlayerController::GetFiringMode() {
    return FFiringMode{};
}

TArray<AActor*> ARTS_PlayerController::GetDestructableTargets() {
    return TArray<AActor*>();
}

ESolsticeControlMode ARTS_PlayerController::GetControlMode() const {
    return ESolsticeControlMode::RTS;
}

bool ARTS_PlayerController::GetBestInteractableTarget(TScriptInterface<IInteractionInterface>& InteractionTarget, AActor*& InteractableActor) {
    return false;
}

bool ARTS_PlayerController::GetBestDestructableTarget(TScriptInterface<IDamagable>& DestructableTarget, AActor*& DestructableActor) {
    return false;
}

AActor* ARTS_PlayerController::GetAttackTarget() const {
    return NULL;
}

USolsticeWeaponComponent* ARTS_PlayerController::GetActiveWeaponComponent() const {
    return NULL;
}

ASolsticeWeaponBase* ARTS_PlayerController::GetActiveWeapon() const {
    return NULL;
}



bool ARTS_PlayerController::GamepadCameraControlActive() {
    return false;
}


void ARTS_PlayerController::FastSwapWeapons() {
}

void ARTS_PlayerController::EnableManualAim() {
}

void ARTS_PlayerController::DropAmmo() {
}

void ARTS_PlayerController::DrawTraceResults() {
}

void ARTS_PlayerController::DisableManualAim() {
}

bool ARTS_PlayerController::ConfirmActiveAbility() {
    return false;
}

void ARTS_PlayerController::ClientUpdateWorldTime_Implementation(float ClientTimeStamp, float ServerTimeStamp) {
}

void ARTS_PlayerController::ClientUpdateLocalPlayerProgress_Implementation(const FPlayerRank& PlayerStats) {
}

void ARTS_PlayerController::ClientToggleGameInput_Implementation(bool bDisable) {
}

void ARTS_PlayerController::ClientTestPickup_Implementation(AInventoryPickup* InventoryPickup) {
}

void ARTS_PlayerController::ClientSetupVehicleControls_Implementation(APawn* OldVehicle, APawn* Vehicle) {
}

void ARTS_PlayerController::ClientSetPlayerTasksCompleted_Implementation(const FGameplayTagContainer& CompletedTasks) {
}

void ARTS_PlayerController::ClientSetPlayerTaskBonusesCompleted_Implementation(const FGameplayTag& CompletedBonus) {
}

void ARTS_PlayerController::ClientSetObserverLocation_Implementation(const FVector& Location) {
}

void ARTS_PlayerController::ClientSetHUDHidden_Implementation(bool bNewHidden, bool bDisableClientEnable) {
}

void ARTS_PlayerController::ClientSetControlMode_Implementation(ESolsticeControlMode InControlMode) {
}

void ARTS_PlayerController::ClientSetAttackTarget_Implementation(AActor* NewAttackTarget) {
}

void ARTS_PlayerController::ClientPlayerMedalReceived_Implementation(const FGameplayTag& MedalTag, EDifficulty AwardedDifficulty) {
}

void ARTS_PlayerController::ClientPlayCameraShakeInRange(const FVector& InLocation, const float InRange, TSubclassOf<UCameraShakeBase> InCameraShake, float InScale) {
}

void ARTS_PlayerController::ClientNotifyManualUnavailable_Implementation() {
}

void ARTS_PlayerController::ClientNotifyFinalCountdownStarted_Implementation(float ServerTimeStamp, float CountdownTime) {
}

void ARTS_PlayerController::ClientLogOffense_Implementation(const FGameplayTag& InTag) {
}

void ARTS_PlayerController::ClientHandlePlayerPromotion_Implementation(AHeroCharacterBase* InPlayer, int32 NewRank) {
}

void ARTS_PlayerController::ClientHandleOwnedPlayerPromotion_Implementation(AHeroCharacterBase* InPlayer, int32 NewRank, FPlayerRank InStats) {
}

void ARTS_PlayerController::ClientHandleDeploymentCompleted_Implementation(bool Victory, const TArray<FPlayerMatchSummary>& PlayerStats, EStrategyMissionResult Result, int32 PlayersEvacuated) {
}

void ARTS_PlayerController::ClientAwardRequisition_Implementation(int32 Value) {
}

void ARTS_PlayerController::ClientAwardAchievements_Implementation(const FGameplayTagContainer& AchievementTags, const FGameplayTagContainer& AchievementRequiredTags, const FGameplayTagContainer& AchievementIgnoreTags) {
}

void ARTS_PlayerController::ClientAwardAchievement_Implementation(const FGameplayTag& AchievementTag, const FGameplayTagContainer& AchievementRequiredTags, const FGameplayTagContainer& AchievementIgnoreTags) {
}

void ARTS_PlayerController::ClientAbortInteraction_Implementation() {
}

void ARTS_PlayerController::Client_MonsterExecutionCamera_Implementation(AMonsterCharacterBase* Monster) {
}

void ARTS_PlayerController::Client_ExecutionFinished_Implementation() {
}



void ARTS_PlayerController::Cleanup() {
}

void ARTS_PlayerController::CeaseFire() {
}

bool ARTS_PlayerController::CanTransitionToTargeted() {
    return false;
}

bool ARTS_PlayerController::CanTransitionToOverwatch() {
    return false;
}

bool ARTS_PlayerController::CanTransitionToManual() {
    return false;
}

bool ARTS_PlayerController::CanTransitionFiringMode() const {
    return false;
}

bool ARTS_PlayerController::CanMoveToInteract() const {
    return false;
}

bool ARTS_PlayerController::CanInteract() const {
    return false;
}

bool ARTS_PlayerController::CancelActiveAbility() {
    return false;
}

void ARTS_PlayerController::BackupProfile() {
}

void ARTS_PlayerController::AwardProfileTag_Implementation(const FGameplayTag& InProfileTag) {
}


bool ARTS_PlayerController::AreControlsBlockedByCinematic() const {
    return false;
}

bool ARTS_PlayerController::AreActionControlsIgnored() const {
    return false;
}





void ARTS_PlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARTS_PlayerController, ControlledVehicle);
    DOREPLIFETIME(ARTS_PlayerController, VehicleMovementController);
    DOREPLIFETIME(ARTS_PlayerController, Hero);
    DOREPLIFETIME(ARTS_PlayerController, InteractionActor);
    DOREPLIFETIME(ARTS_PlayerController, HeroController);
}


