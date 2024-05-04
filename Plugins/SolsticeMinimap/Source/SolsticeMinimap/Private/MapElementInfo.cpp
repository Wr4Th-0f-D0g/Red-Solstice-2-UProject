#include "MapElementInfo.h"

FMapElementInfo::FMapElementInfo() {
    this->bCanHover = false;
    this->bShowDistance = false;
    this->bAllowRotationChange = false;
    this->ElementIcon = NULL;
    this->ElementHoveredIcon = NULL;
    this->ElementHoverSizeRatio = 0.00f;
    this->bAlwaysVisible = false;
    this->VisibilityRadius = 0.00f;
    this->bToolTipAlwaysDisplayed = false;
    this->ToolTipWidgetClass = NULL;
    this->OverrideWidget = NULL;
}

