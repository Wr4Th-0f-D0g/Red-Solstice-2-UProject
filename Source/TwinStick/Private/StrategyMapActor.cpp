#include "StrategyMapActor.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PaperSpriteComponent.h"
#include "Components/WidgetComponent.h"
#include "AttributeComponent.h"
#include "Net/UnrealNetwork.h"

AStrategyMapActor::AStrategyMapActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bPendingDestruction = false;
    this->Root = (USceneComponent*)RootComponent;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->PaperSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("PaperSprite"));
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
    this->AttributeComponent = CreateDefaultSubobject<UAttributeComponent>(TEXT("AttributeComponent"));
    this->bInteractableWithClick = false;
    this->MapActorWidgetClass = NULL;
    this->InteractionSound = NULL;
    this->InteractionState = EStrategyInteractionState::None;
    this->StaticMesh->SetupAttachment(RootComponent);
    this->PaperSprite->SetupAttachment(RootComponent);
    this->SpringArm->SetupAttachment(RootComponent);
    this->Camera->SetupAttachment(SpringArm);
    this->WidgetComponent->SetupAttachment(RootComponent);
}

void AStrategyMapActor::Unselect() {
}

void AStrategyMapActor::TravelTo() {
}

void AStrategyMapActor::StopInteraction() {
}

void AStrategyMapActor::StartInteraction() {
}

void AStrategyMapActor::SetInteractionState(EStrategyInteractionState InState) {
}

void AStrategyMapActor::Select() {
}

void AStrategyMapActor::RequestSelection() {
}

void AStrategyMapActor::OnRep_InteractionState() {
}

bool AStrategyMapActor::MapActorIsViewTarget() const {
    return false;
}

bool AStrategyMapActor::IsInteractable() const {
    return false;
}

bool AStrategyMapActor::IsInContactedRegion() const {
    return false;
}

bool AStrategyMapActor::IsDropshipPresent() const {
    return false;
}

bool AStrategyMapActor::HasBeenContacted() const {
    return false;
}

void AStrategyMapActor::HandleSafeToBeDestroyed(EDropshipStatus DropshipStatus) {
}


ARegion* AStrategyMapActor::GetRegion() const {
    return NULL;
}

FVector AStrategyMapActor::GetPlanetaryNormal() const {
    return FVector{};
}

FVector AStrategyMapActor::GetLocation() const {
    return FVector{};
}

EStrategyInteractionState AStrategyMapActor::GetInteractionState() const {
    return EStrategyInteractionState::None;
}

float AStrategyMapActor::GetInteractionSecondsRemaining() const {
    return 0.0f;
}

float AStrategyMapActor::GetInteractionPercentCompleted() const {
    return 0.0f;
}

FVector AStrategyMapActor::GetInteractionNormal() const {
    return FVector{};
}

FVector AStrategyMapActor::GetInteractionLocation_Implementation() const {
    return FVector{};
}

float AStrategyMapActor::GetInteractionDaysRemaining() const {
    return 0.0f;
}

USceneComponent* AStrategyMapActor::GetAttachPoint() const {
    return NULL;
}

bool AStrategyMapActor::DropshipCanInteractWith() const {
    return false;
}

void AStrategyMapActor::Abort() {
}

void AStrategyMapActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStrategyMapActor, InteractionState);
}


