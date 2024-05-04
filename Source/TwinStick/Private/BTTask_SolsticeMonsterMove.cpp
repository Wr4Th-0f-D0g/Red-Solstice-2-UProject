#include "BTTask_SolsticeMonsterMove.h"

UBTTask_SolsticeMonsterMove::UBTTask_SolsticeMonsterMove() {
    this->NodeName = TEXT("Move To");
    this->AcceptableRadius = 5.00f;
    this->FilterClass = NULL;
    this->ObservedBlackboardValueTolerance = 4.75f;
    this->bObserveBlackboardValue = false;
    this->bAllowStrafe = false;
    this->bUseControllerRadius = true;
    this->bAllowPartialPath = true;
    this->bTrackMovingGoal = true;
    this->bProjectGoalLocation = true;
    this->bReachTestIncludesAgentRadius = true;
    this->bReachTestIncludesGoalRadius = true;
    this->bStopOnOverlap = true;
    this->bStopOnOverlapNeedsUpdate = true;
}


