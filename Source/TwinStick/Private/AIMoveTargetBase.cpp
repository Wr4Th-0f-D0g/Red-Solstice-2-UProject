#include "AIMoveTargetBase.h"
#include "Components/SceneComponent.h"

AAIMoveTargetBase::AAIMoveTargetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Monster = NULL;
    this->MonsterController = NULL;
    this->MinimumDistance = 120.00f;
    this->bDisableNewPositionAfterEQSRun = false;
    this->CircleQuery = NULL;
    this->bEnableTick = false;
    this->bEnableDebug = false;
    this->bDisableNewTick = false;
    this->TraceZOffset = -100.00f;
    this->bClockwise = false;
    this->Angle = 0.00f;
    this->Radius = 0.00f;
    this->bFeintOnFailedEQS = true;
    this->DefaultRadius = 650.00f;
}

void AAIMoveTargetBase::StartTick() {
}

void AAIMoveTargetBase::SetupQuery(AMonsterCharacterBase* Querier) {
}

void AAIMoveTargetBase::NewPosition() {
}

void AAIMoveTargetBase::ActivateCircling(AActor* InAttackTarget, AActor* InMonster) {
}


