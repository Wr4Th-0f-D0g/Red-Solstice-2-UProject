#include "QueryTest_AggroOptions.h"

UQueryTest_AggroOptions::UQueryTest_AggroOptions() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


