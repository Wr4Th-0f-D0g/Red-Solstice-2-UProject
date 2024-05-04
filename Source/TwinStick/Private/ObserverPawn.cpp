#include "ObserverPawn.h"
#include "Net/UnrealNetwork.h"

AObserverPawn::AObserverPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraGamepadScrollSpeed = 10000.00f;
    this->CameraZoomOutMaxDistance = 3300.00f;
    this->CameraAdjustAtMaxDistance = false;
    this->CameraInterpCurve = NULL;
    this->HeroController = NULL;
    this->CameraDistanceInterpTime = 0.00f;
    this->CameraInterpCurrentDistance = 0.00f;
    this->CameraInterpMaxDistance = 250.00f;
    this->CameraLockedInterpolationSpeed = 0.40f;
    this->CameraVehicleInterpolationSpeed = 0.20f;
    this->CursorModeInteropolationSpeed = 0.50f;
    this->CameraMechInterpolationSpeed = 0.20f;
    this->AdditionalVehicleHeight = 300.00f;
    this->MinSpeedInterpolationMargin = 50.00f;
    this->MaxSpeedInterpolationMargin = 300.00f;
    this->MinSpeedAimInterpolationMargin = 50.00f;
    this->MaxSpeedAimInterpolationMargin = 300.00f;
    this->CameraInterpolationStopSpeed = 0.40f;
    this->bAllowMechCameraAiming = true;
    this->MechAimingMaxDistance = 1000.00f;
    this->VehicleAimingMaxDisatnce = 1600.00f;
    this->MechAimInterpolationSpeed = 0.40f;
    this->VehicleAimInterpolationSpeed = 0.60f;
    this->DisableManualCameraScreenArea = 0.50f;
    this->bManualCameraEnabled = false;
    this->bCameraInterpolationEnabled = true;
    this->ManualModeVelocityInterpolationStrength = 1.00f;
    this->ManualModeAimInterpolationStrength = 1.00f;
    this->ManualModeAimingMaxDistance = 700.00f;
    this->bAdjustUnlockedCameraHeightByFloor = false;
    this->MapManager = NULL;
    this->bObserverMode = false;
    this->MouseXPositive = 0.99f;
    this->MouseYNegative = -0.99f;
    this->MouseXNegative = -0.99f;
    this->MouseYPositive = 0.98f;
    this->Hero = NULL;
    this->RTS_Controller = NULL;
    this->ObserverSpringArm = NULL;
    this->ObserverRoot = NULL;
    this->ObserverCamera = NULL;
    this->ObserverMovement = NULL;
    this->SpringArmTargetLength = 2250.00f;
    this->bLockCamera = false;
    this->bCanMoveCameraBounds = false;
    this->bManualCameraAllowed = true;
    this->bUnlockEnabled = true;
    this->AimCameraArmLength = 5000.00f;
    this->AimCameraArmPitch = 0.00f;
    this->TimeToAimCameraSwitch = 1.00f;
    this->SpringarmDefaultLength = 2150.00f;
    this->SpringarmLengthChangePerSec = 0.00f;
    this->SpringarmPitchChangePerSec = 0.00f;
}

void AObserverPawn::ZoomCamera(float AxisValue) {
}

void AObserverPawn::SyncLoc() {
}

void AObserverPawn::SwitchAimingCamera(bool bIsEnabled, float InAdditionalSpringOffset) {
}

FVector AObserverPawn::SpringDampVector(FVector Current, FVector Target, FVector& CurrentVelocity, float SmoothTime, float DeltaTIme, float MaxSpeed) {
    return FVector{};
}

float AObserverPawn::SpringDampFloat(float Current, float Target, float& CurrentVelocity, float SmoothTime, float DeltaTIme, float MaxSpeed) {
    return 0.0f;
}

void AObserverPawn::SnapToTarget(AActor* TargetActor, bool bLock) {
}

bool AObserverPawn::ShouldEnableManualCamera_Implementation() const {
    return false;
}

bool AObserverPawn::ShouldDisableManualCamera_Implementation() const {
    return false;
}

void AObserverPawn::SetSpringarmDefaultRotation(FRotator InRotation) {
}

void AObserverPawn::SetSpringarmDefaultLength(float InLength) {
}


void AObserverPawn::SetObservedSpecificTarget(AHeroCharacterBase* InNewObserved) {
}

void AObserverPawn::OrbitCamera(float AxisValue) {
}

void AObserverPawn::MoveRight(float AxisValue) {
}

void AObserverPawn::MoveForward(float AxisValue) {
}

bool AObserverPawn::MoveCameraToKeepPositionsInFrame(FVector& InOutTargetPosition, FVector OriginPosition, FVector TargetPosition, float AngularMargin, float MaxDistance) {
    return false;
}


float AObserverPawn::LimitYAxis(float InAxisValue) {
    return 0.0f;
}

float AObserverPawn::LimitXAxis(float InAxisValue) {
    return 0.0f;
}



bool AObserverPawn::IsMouseOnScreen() const {
    return false;
}

bool AObserverPawn::IsInManualMode() const {
    return false;
}

bool AObserverPawn::IsCameraInFreeMode() const {
    return false;
}


FVector AObserverPawn::InterpolateCameraTowardsVelocity(float DeltaTIme, float MinSpeedMargin, float MaxSpeedMargin, float MaxDistance, float InterpolationSpeed) {
    return FVector{};
}

FVector AObserverPawn::InterpolateCameraTowardsCursor(float DeltaTIme, FMargin DeadZonePercentage, float MaxDistance, float InterpolationSpeed) {
    return FVector{};
}

UParticleSystemComponent* AObserverPawn::GetWeatherCameraPCS_Implementation() const {
    return NULL;
}

FRotator AObserverPawn::GetSpringarmDefaultRotation() {
    return FRotator{};
}

float AObserverPawn::GetSpringarmDefaultLength() {
    return 0.0f;
}

UParticleSystemComponent* AObserverPawn::GetParticleSystem_Implementation() const {
    return NULL;
}

float AObserverPawn::GetMoveSpeedModifier() {
    return 0.0f;
}

bool AObserverPawn::GetIsInAimingCameraMode() const {
    return false;
}

bool AObserverPawn::GetIsAimingCameraTransitionComplete() const {
    return false;
}

AHeroAI_Controller* AObserverPawn::GetHeroController() const {
    return NULL;
}



void AObserverPawn::CycleObserverTargets() {
}

bool AObserverPawn::CanScrollCamera_Implementation() const {
    return false;
}

bool AObserverPawn::CanMoveCamera_Implementation() const {
    return false;
}



void AObserverPawn::AdjustManualModeCamera(float DeltaTIme, bool InManualMode) {
}

void AObserverPawn::AdjustHeightAccordingToFloor(float DeltaTIme) {
}

void AObserverPawn::AddFOWDistanceToZHeight(FVector& ObserverLocation) {
}

void AObserverPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AObserverPawn, Hero);
}


