#include "CommonLoadingScreenSettings.h"

UCommonLoadingScreenSettings::UCommonLoadingScreenSettings() {
    this->LoadingScreenZOrder = 10000;
    this->LoadingScreenHeartbeatHangDuration = 0.00f;
    this->LogLoadingScreenHeartbeatInterval = 5.00f;
    this->HoldLoadingScreenAdditionalSecsEvenInEditor = false;
    this->ForceTickLoadingScreenEvenInEditor = true;
}


