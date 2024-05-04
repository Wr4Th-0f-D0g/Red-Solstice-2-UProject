#include "MonsterSpeedBoostBaseComponent.h"

UMonsterSpeedBoostBaseComponent::UMonsterSpeedBoostBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowSpeedBoost = true;
    this->bContinueSpeedBoostCheckAfterGettingInRange = false;
    this->GenericBuffName = TEXT("MonsterSpeed");
    this->SpeedCheckTime = 0.50f;
    this->DistanceFromClosestMarineToSpeedBoost = 7000.00f;
    this->MinSpeedBoostPercent = -10.00f;
    this->MaxSpeedBoostPercent = 10.00f;
    this->bIsSpeedBoostActive = false;
    this->bRandomSpeedBuff = true;
    this->RandomSpeedCheckTime = 5.00f;
    this->RandomSpeedBuffName = TEXT("RandomSpeedBuff");
    this->MinRandomSpeedPercent = -20.00f;
    this->RandomSpeedClosestDist = 1500.00f;
    this->MaxRandomSpeedPercent = 20.00f;
    this->bRandomSpeedActive = false;
    this->bIsEnranged = false;
    this->EnrageBuffName = TEXT("EnrageSpeed");
    this->SpeedBoostBuff = NULL;
    this->EnrageBoostBuff = NULL;
    this->RandomSpeedBuff = NULL;
}

void UMonsterSpeedBoostBaseComponent::StopEnrage() {
}

void UMonsterSpeedBoostBaseComponent::SpeedCheck() {
}

void UMonsterSpeedBoostBaseComponent::RandomSpeed() {
}

void UMonsterSpeedBoostBaseComponent::Enrage() {
}


