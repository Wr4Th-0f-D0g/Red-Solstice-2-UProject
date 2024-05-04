#include "PlayerStatLibrary.h"

UPlayerStatLibrary::UPlayerStatLibrary() {
}

float UPlayerStatLibrary::GetHighestStat(FGameplayTag Stat, const TArray<FPlayerMatchSummary>& InStats, FHeroSummaryInfo& OutPlayer) {
    return 0.0f;
}

float UPlayerStatLibrary::GetCombinedStat(FGameplayTag Stat, const TArray<FPlayerMatchSummary>& InStats) {
    return 0.0f;
}


