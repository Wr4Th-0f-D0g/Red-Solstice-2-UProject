#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EBossType.h"
#include "EMonsterType.h"
#include "MarineBotSettings.h"
#include "MonsterSettings.h"
#include "SpawnSystemStaticLibrary.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API USpawnSystemStaticLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpawnSystemStaticLibrary();

protected:
    UFUNCTION(BlueprintCallable)
    static FMonsterSettings K2_GetMonsterSettingsByTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    static FMarineBotSettings K2_GetFollowerSettingsByTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    static FMarineBotSettings K2_GetEnemyMarineSettingsByTag(const FGameplayTag& Tag);
    
public:
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetMonstersByType(EMonsterType MonsterType, bool bIncludeBosses, bool bBossesOnly, EBossType BossType);
    
};

