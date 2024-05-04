#include "ArmoryReadyButton.h"

UArmoryReadyButton::UArmoryReadyButton() {
    this->EnableHotJoinTime = 3.00f;
}


void UArmoryReadyButton::UpdateButtonState() {
}



bool UArmoryReadyButton::IsHotJoining() const {
    return false;
}

void UArmoryReadyButton::HandleViewChanged(const FStrategyViewConfiguration& CurrentView, const FStrategyViewConfiguration& PreviousView) {
}

void UArmoryReadyButton::HandleSessionDestroyedHotJoin(bool bSuccess) {
}

void UArmoryReadyButton::HandlePlayerReadyChanged(bool bNewStarting) {
}

void UArmoryReadyButton::HandleMarineClassChangedHotJoin(const FPowerSuitModel& PowerSuitModel) {
}

void UArmoryReadyButton::HandleGameStartingChanged(bool bNewStarting) {
}

void UArmoryReadyButton::HandleClassRequestReceivedHotJoin() {
}

void UArmoryReadyButton::EnableHotJoin() {
}

bool UArmoryReadyButton::CheckPlayersReady() const {
    return false;
}

bool UArmoryReadyButton::CanHotJoin() const {
    return false;
}


