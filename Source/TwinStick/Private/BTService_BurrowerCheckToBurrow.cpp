#include "BTService_BurrowerCheckToBurrow.h"

UBTService_BurrowerCheckToBurrow::UBTService_BurrowerCheckToBurrow() {
    this->NodeName = TEXT("Burrower check to Burrow");
    this->BurrowDistance = 2000.00f;
    this->bDoBuildingCheck = true;
    this->MonsterCharacter = NULL;
    this->MonsterController = NULL;
}


