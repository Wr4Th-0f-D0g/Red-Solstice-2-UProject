#include "MinimapElementInfo.h"

FMinimapElementInfo::FMinimapElementInfo() {
    this->ElementIcon = NULL;
    this->ElementPointerIcon = NULL;
    this->RadiusIcon = NULL;
    this->bFixedRotation = false;
    this->bAllowPointerRotationChange = false;
    this->bAllowRotationChange = false;
    this->bAlwaysVisible = false;
    this->bHasRadiusShown = false;
    this->bShowIconOnMinimap = false;
    this->Radius = 0.00f;
    this->VisibilityRadius = 0.00f;
    this->OverrideWidget = NULL;
}

