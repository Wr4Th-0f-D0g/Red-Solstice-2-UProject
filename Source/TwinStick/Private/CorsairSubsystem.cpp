#include "CorsairSubsystem.h"

UCorsairSubsystem::UCorsairSubsystem() {
}

void UCorsairSubsystem::SetState(FGameplayTag InStateGameplayTag) {
}

void UCorsairSubsystem::SetEvent(FGameplayTag InEventGameplayTag) {
}

void UCorsairSubsystem::SetCorsairState(const UObject* WorldContextObject, FGameplayTag StateTag) {
}

void UCorsairSubsystem::SetCorsairExplosionEvent(const UObject* WorldContextObject, float Damage, float Radius) {
}

void UCorsairSubsystem::SetCorsairEvent(const UObject* WorldContextObject, FGameplayTag EventTag) {
}

bool UCorsairSubsystem::IsTutorialLevel() const {
    return false;
}

bool UCorsairSubsystem::IsStrategyLevel() const {
    return false;
}

bool UCorsairSubsystem::IsMenuLevel() const {
    return false;
}

bool UCorsairSubsystem::IsCombatLevel() const {
    return false;
}

void UCorsairSubsystem::HandleSolarFired(ARegion* TargetRegion) {
}

void UCorsairSubsystem::HandleHeroRevived(AHeroCharacterBase* RevivedHero) {
}

void UCorsairSubsystem::HandleHeroPromoted(AHeroCharacterBase* Hero, int32 ToRank) {
}

void UCorsairSubsystem::HandleHeroKilled(AActor* Hero, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void UCorsairSubsystem::HandleHeroHealthChanged(int32 CurrentHealth, int32 PreviousHealth) {
}

void UCorsairSubsystem::HandleHeroDamaged(AActor* Hero, const FDamage& DamageInfo) {
}

void UCorsairSubsystem::HandleGlobalInfestationChanged(float PreviousInfestation, float CurrentInfestation) {
}

TArray<FGameplayTag> UCorsairSubsystem::GetStates() const {
    return TArray<FGameplayTag>();
}

TMap<FGameplayTag, FString> UCorsairSubsystem::GetLightingStatesMap() const {
    return TMap<FGameplayTag, FString>();
}

FGameplayTagContainer UCorsairSubsystem::GetCorsairStates(const UObject* WorldContextObject) {
    return FGameplayTagContainer{};
}

void UCorsairSubsystem::ClearState(FGameplayTag InStateGameplayTag) {
}

void UCorsairSubsystem::ClearCorsairState(const UObject* WorldContextObject, FGameplayTag StateTag) {
}

void UCorsairSubsystem::ClearAllStates() {
}

void UCorsairSubsystem::ClearAllCorsairState(const UObject* WorldContextObject) {
}

void UCorsairSubsystem::CallExplosion(float InRadius, float InDamage) {
}


