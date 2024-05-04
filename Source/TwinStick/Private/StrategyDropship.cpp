#include "StrategyDropship.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FMODAudioComponent.h"
#include "PaperSpriteComponent.h"
#include "Net/UnrealNetwork.h"

AStrategyDropship::AStrategyDropship(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Dropship_Root"));
    this->DropshipStatus = EDropshipStatus::HQ;
    this->Dropship_Root = (USceneComponent*)RootComponent;
    this->Dropship_MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Dropship_MeshComponent"));
    this->Dropship_SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Dropship_SpriteComponent"));
    this->Dropship_SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Dropship_SpringArm"));
    this->Dropship_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Dropship_Camera"));
    this->Dropship_Audio = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("Dropship_Audio"));
    this->DropshipTravelSound = NULL;
    this->DropshipScanSound = NULL;
    this->DropshipBuildSound = NULL;
    this->DropshipSplineActorClass = NULL;
    this->PreviewSplineActorClass = NULL;
    this->DropshipSplineActor = NULL;
    this->PreviewSplineActor = NULL;
    this->bDropshipInUse = false;
    this->bDropshipAtTarget = false;
    this->DropshipSpeed = 200.00f;
    this->DistanceTravelled = 0.00f;
    this->Dropship_MeshComponent->SetupAttachment(RootComponent);
    this->Dropship_SpriteComponent->SetupAttachment(RootComponent);
    this->Dropship_SpringArm->SetupAttachment(RootComponent);
    this->Dropship_Camera->SetupAttachment(Dropship_SpringArm);
    this->Dropship_Audio->SetupAttachment(RootComponent);
}

void AStrategyDropship::UpdateDropshipSound() {
}

void AStrategyDropship::TravelToMission(AStrategyMission* TargetMission) {
}

void AStrategyDropship::ShowPreviewPath(AStrategyMapActor* TargetActor) {
}

void AStrategyDropship::SetDropshipStatus(EDropshipStatus NewStatus) {
}

void AStrategyDropship::ReturnToHQ() {
}

void AStrategyDropship::OnRep_NetworkMovementHelper() {
}

void AStrategyDropship::OnRep_HQ() {
}

bool AStrategyDropship::IsTravelling() const {
    return false;
}

bool AStrategyDropship::IsScanning() const {
    return false;
}

bool AStrategyDropship::IsOnTarget() const {
    return false;
}

bool AStrategyDropship::IsInRange(AStrategyMapActor* TargetActor) const {
    return false;
}

bool AStrategyDropship::IsAtHQ() const {
    return false;
}

void AStrategyDropship::HidePreviewPath() {
}

void AStrategyDropship::HandleMissionStatusChanged(const FStrategyMissionTimer& Status) {
}

void AStrategyDropship::HandleInteractionChanged(AStrategyMapActor* MapActor, EStrategyInteractionState InteractionState) {
}

void AStrategyDropship::HandleDropshipSpeedChanged(EAttribute InAttribute, float OldValue, float NewValue) {
}

float AStrategyDropship::GetTravelTimeSeconds(FVector ToLocation) const {
    return 0.0f;
}

FMarsTime AStrategyDropship::GetRemainingTravelTime() const {
    return FMarsTime{};
}

ARegion* AStrategyDropship::GetRegion() const {
    return NULL;
}

FMarsTime AStrategyDropship::GetPreviewPathTravelTime(AStrategyMapActor* TargetActor) const {
    return FMarsTime{};
}

float AStrategyDropship::GetPreviewPathLength(AStrategyMapActor* TargetActor) const {
    return 0.0f;
}

float AStrategyDropship::GetDropshipSpeedInUnitsPerSecond() const {
    return 0.0f;
}

float AStrategyDropship::GetDropshipSpeedInUnitsPerHour() const {
    return 0.0f;
}

AStrategyMapActor* AStrategyDropship::FindNearestOutpost() const {
    return NULL;
}



void AStrategyDropship::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStrategyDropship, HQ);
    DOREPLIFETIME(AStrategyDropship, NetworkMovementHelper);
}


