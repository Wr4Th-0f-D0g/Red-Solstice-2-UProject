#include "UseItemAdditionalParams.h"

FUseItemAdditionalParams::FUseItemAdditionalParams() {
    this->bSkipTerminalsAlreadyActivated = false;
    this->bPowerOnTerminal = false;
    this->bDeactivateTerminal = false;
    this->bPowerOnTerminalRelayIfOff = false;
    this->bSkipPowerRelaysAlreadyActivated = false;
}

