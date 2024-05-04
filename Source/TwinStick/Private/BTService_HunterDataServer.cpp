#include "BTService_HunterDataServer.h"

UBTService_HunterDataServer::UBTService_HunterDataServer() {
    this->NodeName = TEXT("Hunter Data Grabbing Service");
    this->MonsterController = NULL;
    this->MonsterCharacter = NULL;
    this->HunterComponent = NULL;
}


