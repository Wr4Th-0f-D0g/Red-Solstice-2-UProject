#include "ColonyData.h"

UColonyData::UColonyData() {
    this->ColonyDescriptionsTable = NULL;
    this->InfestedModifierPerRegionPointOfInfestation = 0.00f;
    this->CasualtyModifierPerInfestedKilled = 1.00f;
}

void UColonyData::GetSolarCasualtiesForRegion(ARegion* InRegion, int32 InDamage, int32& OutInfestedCasualties, int32& OutCivilianCasualties) {
}

ARegion* UColonyData::GetRegionFromColonyInfo(FColonyInfo InInfo, UObject* ContextObject) const {
    return NULL;
}

int32 UColonyData::GetRegionCasualtyCount(ARegion* InRegion, int32 InInfestationDamage) const {
    return 0;
}

int32 UColonyData::GetPopulationCount(int32 InPopulation, int32 InInfestationCount) const {
    return 0;
}

int32 UColonyData::GetInfestedCount(int32 InPopulation, int32 InInfestationCount) const {
    return 0;
}

int32 UColonyData::GetGlobalPopulationCount(UObject* ContextObject) const {
    return 0;
}

int32 UColonyData::GetGlobalInfestedCount(UObject* ContextObject) const {
    return 0;
}

int32 UColonyData::GetColonyInfestationLevel(FColonyInfo InColonyInfo, UObject* ContextObject) const {
    return 0;
}

FColonyDescription UColonyData::GetColonyDescriptionForRegionByName(const FString& InRegionName) const {
    return FColonyDescription{};
}

FColonyDescription UColonyData::GetColonyDescriptionForRegion(ARegion* InRegion) const {
    return FColonyDescription{};
}

FColonyDescription UColonyData::GetColonyDescriptionByName(const FString& InColonyName) const {
    return FColonyDescription{};
}

FColonyDescription UColonyData::GetColonyDescription(AColony* InColony) const {
    return FColonyDescription{};
}

FColonyInfo UColonyData::GetColonyDataForRegionByName(const FString& InRegionName) const {
    return FColonyInfo{};
}

FColonyInfo UColonyData::GetColonyDataForRegion(ARegion* InRegion) const {
    return FColonyInfo{};
}

TMap<FColonyInfo, FMissionEffect> UColonyData::GetColonyBonuses() const {
    return TMap<FColonyInfo, FMissionEffect>();
}

int32 UColonyData::GetCasualtyCount(int32 InPopulation, int32 InDamage) const {
    return 0;
}


