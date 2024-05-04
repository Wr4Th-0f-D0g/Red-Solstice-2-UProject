#include "AggroDetails.h"

FAggroDetails::FAggroDetails() {
    this->bEnableAggroTick = false;
    this->bIsBiomassAI = false;
    this->bIgnorePlayersInBuilding = false;
    this->bDisableNoPerceptedAggro = false;
    this->GoalEvaluationSeconds = 0.00f;
    this->GoalEvaluationSecondsRandomDeviation = 0.00f;
    this->SecondsBetweenAllQuery = 0.00f;
    this->SecondsBetweenAllQueryRandomDeviation = 0.00f;
    this->PerceivedEnemiesQuery = NULL;
    this->AllEnemiesQuery = NULL;
    this->DelayAfterChangingTarget = 0.00f;
    this->GoalScoreDifferenceToChangeTarget = 0.00f;
}

