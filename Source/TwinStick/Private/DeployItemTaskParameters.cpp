#include "DeployItemTaskParameters.h"

FDeployItemTaskParameters::FDeployItemTaskParameters() {
    this->ItemsRequired = 0;
    this->PossibleLocations = 0;
    this->AcceptableRadius = 0.00f;
    this->bExactLocation = false;
    this->bCanBeDestoryedByExplosion = false;
}

