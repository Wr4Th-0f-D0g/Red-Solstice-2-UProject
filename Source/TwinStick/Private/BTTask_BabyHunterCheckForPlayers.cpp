#include "BTTask_BabyHunterCheckForPlayers.h"

UBTTask_BabyHunterCheckForPlayers::UBTTask_BabyHunterCheckForPlayers() {
    this->NodeName = TEXT("Baby Hunter Check For Players");
    this->WaitBeforeChecking = 0.00f;
    this->CheckInterval = 0.00f;
    this->ExitElapsedTime = 120.00f;
    this->bExitVentAfterElapsedTime = false;
    this->Monster = NULL;
    this->DropdownActor = NULL;
    this->CheckDistance = 0.00f;
    this->MyOwnerComp = NULL;
}


