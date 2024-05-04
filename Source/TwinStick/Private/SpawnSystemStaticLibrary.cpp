#include "SpawnSystemStaticLibrary.h"

USpawnSystemStaticLibrary::USpawnSystemStaticLibrary() {
}

FMonsterSettings USpawnSystemStaticLibrary::K2_GetMonsterSettingsByTag(const FGameplayTag& Tag) {
    return FMonsterSettings{};
}

FMarineBotSettings USpawnSystemStaticLibrary::K2_GetFollowerSettingsByTag(const FGameplayTag& Tag) {
    return FMarineBotSettings{};
}

FMarineBotSettings USpawnSystemStaticLibrary::K2_GetEnemyMarineSettingsByTag(const FGameplayTag& Tag) {
    return FMarineBotSettings{};
}

FGameplayTagContainer USpawnSystemStaticLibrary::GetMonstersByType(EMonsterType MonsterType, bool bIncludeBosses, bool bBossesOnly, EBossType BossType) {
    return FGameplayTagContainer{};
}


