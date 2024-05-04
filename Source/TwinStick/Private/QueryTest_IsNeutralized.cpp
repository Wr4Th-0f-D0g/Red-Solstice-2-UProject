#include "QueryTest_IsNeutralized.h"

UQueryTest_IsNeutralized::UQueryTest_IsNeutralized() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


