#include "QueryTest_FilterTaunts.h"

UQueryTest_FilterTaunts::UQueryTest_FilterTaunts() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


