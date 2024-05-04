#include "BTService_LookAtPlayer.h"

UBTService_LookAtPlayer::UBTService_LookAtPlayer() {
    this->NodeName = TEXT("Look at Actor(Player)");
    this->bUseNodeLookDistance = false;
    this->LookAtDistance = 0.00f;
    this->bNotWhenMoving = true;
    this->bUseWeaponLOSCheck = false;
    this->bUseVisionCone = true;
}


