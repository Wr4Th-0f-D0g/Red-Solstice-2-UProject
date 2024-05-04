#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "HeroSummaryInfo.h"
#include "PlayerMatchSummary.h"
#include "PlayerStatLibrary.generated.h"

UCLASS(Blueprintable)
class UPlayerStatLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayerStatLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetHighestStat(FGameplayTag Stat, const TArray<FPlayerMatchSummary>& InStats, FHeroSummaryInfo& OutPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCombinedStat(FGameplayTag Stat, const TArray<FPlayerMatchSummary>& InStats);
    
};

