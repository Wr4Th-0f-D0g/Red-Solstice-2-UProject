#include "AIMarineMoveTarget.h"
#include "Components/SceneComponent.h"

AAIMarineMoveTarget::AAIMarineMoveTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->AIMarineComp = NULL;
    this->AIHero = NULL;
    this->NPCController = NULL;
    this->TraceZOffset = 0.00f;
    this->bEnableDebug = false;
    this->MarineEQSQuery = NULL;
}

void AAIMarineMoveTarget::SetupQuery(AHeroCharacterBase* Querier) {
}

void AAIMarineMoveTarget::SetupMoveTarget(AHeroCharacterBase* InAIMarine) {
}

void AAIMarineMoveTarget::HandleAssignedHeroChanged(AHeroCharacterBase* NewHero, AHeroCharacterBase* OldHero) {
}


