#include "SolsticeTechData.h"

FSolsticeTechData::FSolsticeTechData() {
    this->TechTier = 0;
    this->bResearchedAtGameStart = false;
    this->SupplyCost = 0;
    this->ResearchTimeHours = 0;
    this->RequiredSpecialists = 0;
    this->ResearchSpecializedRequirement = NULL;
    this->RequiredDLCCode = 0;
    this->bResearchIsRepeatable = false;
}

