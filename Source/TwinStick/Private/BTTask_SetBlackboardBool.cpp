#include "BTTask_SetBlackboardBool.h"

UBTTask_SetBlackboardBool::UBTTask_SetBlackboardBool() {
    this->NodeName = TEXT("Set Blackboard Bool");
    this->bBoolValue = false;
    this->bFailOnComplete = false;
}


