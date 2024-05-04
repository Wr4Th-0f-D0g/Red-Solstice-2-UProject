#include "MovableDestrVehicleBase.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SolsticeSplineComponent.h"

AMovableDestrVehicleBase::AMovableDestrVehicleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("VehicleRoot"));
    this->Tags.AddDefaulted(1);
    this->bShouldRegisterWithNetworkManager = false;
    this->VehicleMaxSpeed = 325.00f;
    this->VehicleSlowSpeedMultiplyer = 0.60f;
    this->TargetAproachSpeed = 150.00f;
    this->VehicleNormalAcceleration = 100.00f;
    this->SlowdownAcceleration = -200.00f;
    this->BreakingAcceleration = -150.00f;
    this->EmergencyBreakingAcceleration = -3000.00f;
    this->ObstacleStopDistance = 500.00f;
    this->bIgnoreBasicAI = false;
    this->VeryCloseDistance = 50.00f;
    this->LargestMonsterSizeOverrun = EMonsterSizeClass::Small;
    this->CrushableObstacleTag = TEXT("Crushable");
    this->bDebugDrawCollisionTests = false;
    this->bDebugLogObstacleNames = false;
    this->bTrainEnteredStation = false;
    this->bCarIsActivelyMoving = false;
    this->ObstacleTestWidth = 400.00f;
    this->BreakingSlack = 20.00f;
    this->NumObstacleTests = 6;
    this->TimebetweenObstacleTests = 0.10f;
    this->ServerLocationUpdateTime = 0.05f;
    this->ClientInterpSpeed = 3.00f;
    this->ClientInterpSnapDist = 500.00f;
    this->ClientInterpReverseDist = 100.00f;
    this->ClientInterpReverseAllowTime = 1.00f;
    this->CurveSlowdownLookAhead = 500.00f;
    this->VectorDiffCurveThreshold = 0.01f;
    this->bKillAllOverrunMonsters = false;
    this->bCrushSmallObstacles = false;
    this->bCrushEverythingExceptFriendly = false;
    this->bCrushEverythingOnCollision = false;
    this->bRequiresEscort = false;
    this->EscortDistance = 3000.00f;
    this->VehicleTeam = ESolsticeTeam::HeroMarine;
    this->bDrawCorrections = false;
    this->MovementState = EDestructableVehicleMovementState::StopNormal;
    this->bShouldBeMoving = false;
    this->MovementPathSpline = CreateDefaultSubobject<USolsticeSplineComponent>(TEXT("SplinePathComponent"));
    this->VehicleRoot = (USceneComponent*)RootComponent;
    this->FrontBumperLocation = CreateDefaultSubobject<USceneComponent>(TEXT("FrontBumberLocation"));
    this->FrontWheelsLocation = CreateDefaultSubobject<USceneComponent>(TEXT("FrontWheelLocation"));
    this->AttachToParrentLocation = CreateDefaultSubobject<USceneComponent>(TEXT("AttachToParrentLocation"));
    this->ChildAttachLocation = CreateDefaultSubobject<USceneComponent>(TEXT("ChildAttachLocation"));
    this->Acceleration = 0.00f;
    this->CurrentSpeed = 0.00f;
    this->SplineTravelLength = 0.00f;
    this->bReachedTarget = false;
    this->FrontRearWheelDist = 0.00f;
    this->DeltaPath = 0.00f;
    this->DeltaAngle = 0.00f;
    this->ObstacleDetected = NULL;
    this->SimulatedSmoothLocationTime = 0.04f;
    this->SimulatedSmoothRotationTime = 0.03f;
    this->BodyMesh = NULL;
    this->ReplicatedServerLastTransformUpdateTimeStamp = 0.00f;
    this->NetworkMaxSmoothUpdateDistance = 256.00f;
    this->NetworkNoSmoothUpdateDistance = 384.00f;
    this->NetworkSimulatedSmoothLocationTime = 0.10f;
    this->NetworkSimulatedSmoothRotationTime = 0.05f;
    this->RootBox = NULL;
    this->bNetworkUpdateReceived = false;
    this->ServerLastTransformUpdateTimeStamp = 0.00f;
    this->MaxClientSmoothingDeltaTime = 0.50f;
    this->MovementPathSpline->SetupAttachment(RootComponent);
    this->FrontBumperLocation->SetupAttachment(RootComponent);
    this->FrontWheelsLocation->SetupAttachment(RootComponent);
    this->AttachToParrentLocation->SetupAttachment(RootComponent);
    this->ChildAttachLocation->SetupAttachment(RootComponent);
}

void AMovableDestrVehicleBase::SetVehicleTeam(ESolsticeTeam InTeam) {
}

void AMovableDestrVehicleBase::ResetMovementVars() {
}

void AMovableDestrVehicleBase::ReplicateNavVars(const FVector& NavStartLocation, const FVector& NavEndtLocation) {
}

void AMovableDestrVehicleBase::PauseMovement() {
}

void AMovableDestrVehicleBase::OnRep_VehicleMoveState() {
}

void AMovableDestrVehicleBase::OnRep_SolsticeTeamChanged_Implementation() {
}

void AMovableDestrVehicleBase::OnRep_MovementStateVars() {
}

void AMovableDestrVehicleBase::OnRep_bReachedTarget() {
}

void AMovableDestrVehicleBase::MoveForward() {
}






bool AMovableDestrVehicleBase::HasReachedTargetLocation() {
    return false;
}

void AMovableDestrVehicleBase::HandleVehicleMovementStateChanged(EDestructableVehicleMovementState InNewState) {
}

void AMovableDestrVehicleBase::HandleVehicleMotionUpdateComplete(float InPathDelta, float InAngleDelta) {
}

void AMovableDestrVehicleBase::HandleReachedTarget() {
}

void AMovableDestrVehicleBase::HandleBodyHitObstacle(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

USplineComponent* AMovableDestrVehicleBase::GetSplineComp() {
    return NULL;
}

EDestructableVehicleMovementState AMovableDestrVehicleBase::GetServerMovementState() {
    return EDestructableVehicleMovementState::FullSpeed;
}

AActor* AMovableDestrVehicleBase::GetObstacleDetected() {
    return NULL;
}

FGameplayTag AMovableDestrVehicleBase::GetKilledTag() const {
    return FGameplayTag{};
}

void AMovableDestrVehicleBase::DestroyActorWithChildrenRecursive(AActor* InActor) {
}

void AMovableDestrVehicleBase::DestroyActorEncountered_Implementation() {
}

void AMovableDestrVehicleBase::ContinueMovement() {
}

void AMovableDestrVehicleBase::CancelMovement() {
}

void AMovableDestrVehicleBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMovableDestrVehicleBase, VehicleTeam);
    DOREPLIFETIME(AMovableDestrVehicleBase, bShouldBeMoving);
    DOREPLIFETIME(AMovableDestrVehicleBase, PathRepParams);
    DOREPLIFETIME(AMovableDestrVehicleBase, bReachedTarget);
    DOREPLIFETIME(AMovableDestrVehicleBase, ReplicatedServerLastTransformUpdateTimeStamp);
}


