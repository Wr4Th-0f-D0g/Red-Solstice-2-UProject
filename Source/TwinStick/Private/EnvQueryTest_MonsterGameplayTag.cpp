#include "EnvQueryTest_MonsterGameplayTag.h"

UEnvQueryTest_MonsterGameplayTag::UEnvQueryTest_MonsterGameplayTag() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bUpdatedToUseQuery = false;
    this->TagsToMatch = EGameplayContainerMatchType::Any;
}


