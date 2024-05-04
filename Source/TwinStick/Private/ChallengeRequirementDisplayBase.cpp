#include "ChallengeRequirementDisplayBase.h"

UChallengeRequirementDisplayBase::UChallengeRequirementDisplayBase() : UUserWidget(FObjectInitializer::Get()) {
    this->TagDescriptions = NULL;
}

void UChallengeRequirementDisplayBase::CreateChallengeLines(TArray<FPlayerStat> DeploymentStats, TArray<FChallengeDisplayLine>& OutLines) const {
}


