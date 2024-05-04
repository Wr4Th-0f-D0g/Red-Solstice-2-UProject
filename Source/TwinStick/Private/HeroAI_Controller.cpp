#include "HeroAI_Controller.h"
#include "MoveTargetActorBase.h"
#include "Net/UnrealNetwork.h"
#include "PlayerFollowingComponent.h"

AHeroAI_Controller::AHeroAI_Controller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UPlayerFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->MoveToActorClass = AMoveTargetActorBase::StaticClass();
    this->PlayerOwner = NULL;
}

void AHeroAI_Controller::SetPlayerOwner(APlayerController* PC) {
}

ARTS_PlayerState* AHeroAI_Controller::GetPlayerState() {
    return NULL;
}

void AHeroAI_Controller::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHeroAI_Controller, PlayerOwner);
}


