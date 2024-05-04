#include "SolsticeWeatherPreset.h"

FSolsticeWeatherPreset::FSolsticeWeatherPreset() {
    this->FogExtinctionOutside = 0.00f;
    this->FogExtinctionInside = 0.00f;
    this->CloudCoverage = 0.00f;
    this->GlobalSaturation = 0.00f;
    this->PrecipitationType = ESolsticePrecipitationType::None;
    this->bShowFoliage = false;
    this->GlobalRoughness = 0.00f;
    this->GlobalMetallic = 0.00f;
    this->GlobalHeightmapStrength = 0.00f;
    this->GlobalHeightmapExponent = 0.00f;
    this->WindStrength = 0.00f;
    this->WindSize = 0.00f;
    this->ParticleRateMultiplier = 0.00f;
}

