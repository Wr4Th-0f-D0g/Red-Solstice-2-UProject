#include "CorsairLightsManager.h"

UCorsairLightsManager::UCorsairLightsManager() {
    this->ExplosionMinDamage = 1000.00f;
    this->ExplosionMinRadius = 500.00f;
    this->MinTimeBetweenExplosions = 2.00f;
}

void UCorsairLightsManager::SetState(FGameplayTag InStateGameplayTag) {
}

void UCorsairLightsManager::SetEvent(FGameplayTag InEventGameplayTag) {
}

TArray<FGameplayTag> UCorsairLightsManager::GetStates() {
    return TArray<FGameplayTag>();
}

void UCorsairLightsManager::ClearState(FGameplayTag InStateGameplayTag) {
}

void UCorsairLightsManager::ClearAllStates() {
}

void UCorsairLightsManager::CallExplosion(float InRadius, float InDamage) {
}


