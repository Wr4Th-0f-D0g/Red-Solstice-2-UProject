#include "ArmoryHostButton.h"

UArmoryHostButton::UArmoryHostButton() {
    this->HostCheckBox = NULL;
    this->CooldownPassedTime = 3.00f;
    this->bRankedChecked = true;
}




void UArmoryHostButton::HandleSessionDestroyed(bool bSuccessful) {
}

void UArmoryHostButton::HandleHostCheckChanged(bool bIsChecked) {
}


