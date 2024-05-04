#include "DisconnectedCharacterData.h"

FDisconnectedCharacterData::FDisconnectedCharacterData() {
    this->SuitXP = 0;
    this->PrimaryClips = 0;
    this->SecondaryAmmo = 0;
    this->bIsDead = false;
    this->Health = 0.00f;
    this->DisconnectPointActor = NULL;
}

