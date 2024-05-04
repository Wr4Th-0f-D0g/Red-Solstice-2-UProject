#include "UseTerminalParameters.h"

FUseTerminalParameters::FUseTerminalParameters() {
    this->RequiredItems = 0;
    this->bForceClosestItem = false;
    this->GameplayContainerMatchingType = EGameplayContainerMatchType::Any;
    this->Range = ELocationDistance::ELD_Any;
    this->bCompleteIfLinkedObjectDestroyed = false;
    this->bDeactivateTerminal = false;
    this->bSkipTerminalsAlreadyActivated = false;
    this->bPowerOnTerminal = false;
}

