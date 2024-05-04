#include "StrategyViewConfiguration.h"

FStrategyViewConfiguration::FStrategyViewConfiguration() {
    this->ViewTarget = NULL;
    this->ViewBlendTime = 0.00f;
    this->bShowPlanetaryCompactWidgets = false;
    this->bShowMainWidget = false;
    this->bVisibleInSkirmish = false;
    this->bVisibleInStandalone = false;
    this->bVisibleInMultiplayer = false;
    this->TabControlWidgetIndex = 0;
}

