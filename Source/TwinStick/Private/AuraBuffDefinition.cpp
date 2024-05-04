#include "AuraBuffDefinition.h"

FAuraBuffDefinition::FAuraBuffDefinition() {
    this->AppliedBuffClass = NULL;
    this->bIgnoreInstigator = false;
    this->AllowedTargetClass = NULL;
    this->IgnoredTargetClass = NULL;
    this->Stacks = 0;
}

