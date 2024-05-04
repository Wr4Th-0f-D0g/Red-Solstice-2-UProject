#include "GuardPlayersInfo.h"

FGuardPlayersInfo::FGuardPlayersInfo() {
    this->bGuardExecutor = false;
    this->bShowMinimapIconForExecutor = false;
    this->bShowRadiusParticleForExecutor = false;
    this->bShowMinimapIconsForPlayers = false;
    this->GuardDuration = 0.00f;
    this->GuardRange = 0.00f;
    this->bCanEverFail = false;
    this->bStartFailureCountdownImmediately = false;
    this->FailTime = 0.00f;
    this->bTeamStartedGuarding = false;
    this->bTeamIsCurrentlyGuarding = false;
    this->FailureSecondsElapsed = 0.00f;
    this->GuardSecondsElapsed = 0.00f;
}

