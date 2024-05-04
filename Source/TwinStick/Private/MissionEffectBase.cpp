#include "MissionEffectBase.h"

UMissionEffectBase::UMissionEffectBase() {
}

ARegion* UMissionEffectBase::GetRegion() const {
    return NULL;
}

ARegion* UMissionEffectBase::GetRandomRegion() const {
    return NULL;
}

ARegion* UMissionEffectBase::GetRandomAdjacentRegion() const {
    return NULL;
}

AStrategyMission* UMissionEffectBase::GetMission() const {
    return NULL;
}

FText UMissionEffectBase::GetDisplayText_Implementation(float Value) const {
    return FText::GetEmpty();
}

TArray<ARegion*> UMissionEffectBase::GetAdjacentRegions() const {
    return TArray<ARegion*>();
}

void UMissionEffectBase::Execute_Implementation(float Value) {
}


