#include "PlayerProgress.h"

FPlayerProgress::FPlayerProgress() {
    this->PrestigeXP = 0;
    this->PrestigeLevel = 0;
    this->LongestDeploymentVictory = 0.00f;
    this->BotManager = NULL;
    this->EarnedRequisitionHash = 0;
    this->SpentRequisitionHash = 0;
}

