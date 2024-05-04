#include "EnvQueryTest_FilterFriendly.h"

UEnvQueryTest_FilterFriendly::UEnvQueryTest_FilterFriendly() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->QueryContext = NULL;
}


