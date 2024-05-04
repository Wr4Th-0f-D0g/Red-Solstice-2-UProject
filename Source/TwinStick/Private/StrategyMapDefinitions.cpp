#include "StrategyMapDefinitions.h"

UStrategyMapDefinitions::UStrategyMapDefinitions() {
    this->InjuryTimeDays = 10;
    this->MinimumIntelWithHQ = 2.00f;
    this->ColonyIntelAddedToOutpost = 1.00f;
    this->MinimumIntelAdjacentToHQ = 1.00f;
    this->BaseIntelDecay = 0.20f;
    this->IntelDecayPerInfestationPoint = 0.10f;
    this->IntelDecayPerStormLevel = 0.20f;
    this->DropshipActiveScanIntelPerDay = 1.00f;
    this->HQ_IntelPerDay = 0.40f;
    this->HQ_IntelAddedToAdjacentRegions = 0.10f;
    this->GlobalInfestationInterpolationSpeed = 0.10f;
    this->SolarGlobalInfestationEffect = 3;
    this->DailyGlobalInfestationPerInfestedTerraformer = 0.03f;
    this->DaysBeforeGameLossOnMaxInfestation = 14;
    this->RequiredInfestationGrowthPerBar = 60.00f;
    this->RequiredInfestationGrowthPerBarVariance = 0.30f;
    this->RegionInfestationGrowth = NULL;
    this->AdjacentRegionInfestationGrowthEffect = NULL;
    this->GlobalInfestationMultiplierForRegionGrowth = 1.00f;
    this->RegionalInfestationGrowthForInfestedTerraformer = 5.00f;
    this->DropshipSpeed = 120.00f;
    this->HQ_Speed = 20.00f;
    this->HQ_MoveDeploymentCost = 8;
    this->TimeFlowMultiplierSlow = 120.00f;
    this->TimeFlowMultiplierScan = 14400.00f;
    this->TimeFlowMultiplierTravel = 5760.00f;
    this->MissionLifetime = 72;
    this->MissionExtraLifetimePerIntelHours = 12;
    this->AdditionalPriorityPerMonth = 0.50f;
    this->MaxNumberOfRequests = 25;
    this->MaxMissionsPerRegion = 2;
    this->MissionsPerWeek = 0;
    this->PerAirSupportSliderStepCost = 0.25f;
    this->PerArtillerySupportSliderStepCost = 0.15f;
    this->PerHordeControlSliderStepCost = 0.40f;
    this->PerSecondaryMissionSliderStepCost = 0.00f;
    this->MaximumGlobalInfestation = 10;
    this->InfestationDamageTargetRegion = 0.70f;
    this->InfestationDamageAdjacentRegions = 0.30f;
    this->SolarCooldownHours = 576;
    this->InfestationDamageVariance = 0.30f;
    this->StartingSupplies = 200;
    this->StartingSpecialists = 12;
    this->StartingDeployment = 10;
    this->ResourcesLostOnDefeat = 0.00f;
    this->HQ_DeploymentGeneratedPerWeek = 10;
    this->HQ_SuppliesGeneratedPerWeek = 100;
    this->HQ_SpecialistsGeneratedPerWeek = 0;
    this->MeanRegionSupplyIncome = 60;
    this->RegionSupplyVariance = 0.50f;
    this->ColonySpecialistIncomePerConsumedSupply = 0.10f;
    this->OutpostLevelForDeploymentHarvesting = 2;
    this->ColonyDeploymentIncome = 1;
    this->MaxRegionBonuses = 12;
    this->SupplyMissionBonusPerInfestationPoint = 0.10f;
    this->GlobalResearchSpeedModifier = 1.00f;
    this->BaseResearchTimeHours = 96;
    this->BaseUpgradeTimeHours = 192;
    this->AdditionalSupplyCostPerOutpost = 100;
    this->RecentlyLostColonyDays = 45;
    this->DeploymentCost = 4;
    this->DeploymentAdditionalCostForDistance = 1;
    this->OutpostDeploymentDiscount = 1;
    this->HQ_DeploymentDiscount = 2;
    this->AdditionalDeploymentCostPerStormLevel = 0.00f;
    this->DedicatedResearchSpecialists = 4;
    this->EngineeringData = NULL;
    this->EngineeringDescriptionsTable = NULL;
    this->OutpostUpgrades = NULL;
    this->HQ_Upgrades = NULL;
    this->UpgradeDescriptions = NULL;
    this->StrategyCombatMissionsTable = NULL;
    this->StrategySupplyMissionsTable = NULL;
    this->StrategyMissionGroupTable = NULL;
    this->StrategyMissionGenerationTable = NULL;
    this->StrategyMissionDescriptionTable = NULL;
    this->StrategyMissionEffectsTable = NULL;
    this->CombatMissionDataTable = NULL;
    this->ColonyDataAsset = NULL;
    this->BotsAdditionalInjuryBuffClass = NULL;
}

void UStrategyMapDefinitions::PopulateTechIDs() {
}

void UStrategyMapDefinitions::PopulateConsequencesTable() {
}

TArray<UTechTreeData*> UStrategyMapDefinitions::GetTechTrees() const {
    return TArray<UTechTreeData*>();
}

UTechTreeData* UStrategyMapDefinitions::GetTechTreeMatching(const FGameplayTag& TechTag) const {
    return NULL;
}

TArray<FSolsticeTechData> UStrategyMapDefinitions::GetTechs() const {
    return TArray<FSolsticeTechData>();
}

float UStrategyMapDefinitions::GetRequiredInfestationGrowthPerBar(EDifficulty GameDifficulty) const {
    return 0.0f;
}

int32 UStrategyMapDefinitions::GetOutpostSupplyCost(int32 ForLevel, int32 ExistingOutposts) const {
    return 0;
}

int32 UStrategyMapDefinitions::GetOutpostSpecialistCost(int32 ForLevel) const {
    return 0;
}

int32 UStrategyMapDefinitions::GetOutpostDeploymentCost(int32 ForLevel) const {
    return 0;
}

int32 UStrategyMapDefinitions::GetOutpostBuildTimeHours(int32 ForLevel) const {
    return 0;
}

int32 UStrategyMapDefinitions::GetMeanRegionSupplyIncome(EDifficulty GameDifficulty) const {
    return 0;
}

int32 UStrategyMapDefinitions::GetMaximumGlobalInfestationModifier(EDifficulty GameDifficulty) const {
    return 0;
}

int32 UStrategyMapDefinitions::GetMaximumGlobalInfestation(EDifficulty GameDifficulty) const {
    return 0;
}


