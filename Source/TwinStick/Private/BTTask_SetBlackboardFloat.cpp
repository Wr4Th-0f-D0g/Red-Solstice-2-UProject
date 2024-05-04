#include "BTTask_SetBlackboardFloat.h"

UBTTask_SetBlackboardFloat::UBTTask_SetBlackboardFloat() {
    this->NodeName = TEXT("Set Blackboard Float");
    this->FloatValue = 0.00f;
    this->bFailOnComplete = false;
}


