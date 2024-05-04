#include "SolsticeVehiclePlayerSeat.h"

FSolsticeVehiclePlayerSeat::FSolsticeVehiclePlayerSeat() {
    this->AssignedCharacter = NULL;
    this->PreviousAssignCharacter = NULL;
    this->SeatWeapon = NULL;
    this->EntryTime = 0.00f;
    this->SeatIndex = 0;
    this->SkillsComponent = NULL;
    this->WeaponComponent = NULL;
}

