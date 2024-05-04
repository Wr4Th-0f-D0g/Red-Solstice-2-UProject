#include "AtmosphereLibrary.h"

UAtmosphereLibrary::UAtmosphereLibrary() {
}

void UAtmosphereLibrary::SetWindStrength(FSolsticeWeatherPreset& WeatherPreset, float Value) {
}

void UAtmosphereLibrary::SetWindSpeed(FSolsticeWeatherPreset& WeatherPreset, FVector Value) {
}

void UAtmosphereLibrary::SetWindSize(FSolsticeWeatherPreset& WeatherPreset, float Value) {
}

void UAtmosphereLibrary::SetTemperature(FSolsticeEnvironmentPreset& EnvironmentPreset, float Value) {
}

void UAtmosphereLibrary::SetSunAngle(FSolsticeEnvironmentPreset& EnvironmentPreset, float Value) {
}

void UAtmosphereLibrary::SetSourceCubemapAngle(FSolsticeEnvironmentPreset& EnvironmentPreset, float Value) {
}

void UAtmosphereLibrary::SetSkyLightIntensity(FSolsticeEnvironmentPreset& EnvironmentPreset, float Value) {
}

void UAtmosphereLibrary::SetSkyLightCubemap(FSolsticeEnvironmentPreset& EnvironmentPreset, UTextureCube* Value) {
}

void UAtmosphereLibrary::SetSkyLightColor(FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value) {
}

void UAtmosphereLibrary::SetRainPuddleColor(FSolsticeWeatherPreset& WeatherPreset, FVector Value) {
}

void UAtmosphereLibrary::SetPrecipitationAmount(FSolsticeWeatherPreset& WeatherPreset, FVector Value) {
}

void UAtmosphereLibrary::SetParticleSystem(FSolsticeStormPreset& StormPreset, UParticleSystem* Value) {
}

void UAtmosphereLibrary::SetParticleRateMultiplier(FSolsticeWeatherPreset& WeatherPreset, float Value) {
}

void UAtmosphereLibrary::SetNoiseAlphaSize(FSolsticeWeatherPreset& WeatherPreset, FVector Value) {
}

void UAtmosphereLibrary::SetNoiseAlphaChannel(FSolsticeWeatherPreset& WeatherPreset, FLinearColor Value) {
}

void UAtmosphereLibrary::SetMonsterLightIntensity(FSolsticeEnvironmentPreset& EnvironmentPreset, float Value) {
}

void UAtmosphereLibrary::SetMonsterLightColor(FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value) {
}

void UAtmosphereLibrary::SetIndoor_PP_Tint(FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value) {
}

void UAtmosphereLibrary::SetIndoor_PP_Saturation(FSolsticeEnvironmentPreset& EnvironmentPreset, float Value) {
}

void UAtmosphereLibrary::SetIndoor_PP_Brightness(FSolsticeEnvironmentPreset& EnvironmentPreset, float Value) {
}

void UAtmosphereLibrary::SetGlobalSaturation(FSolsticeWeatherPreset& WeatherPreset, float Value) {
}

void UAtmosphereLibrary::SetGlobalRoughness(FSolsticeWeatherPreset& WeatherPreset, float Value) {
}

void UAtmosphereLibrary::SetGlobalHeightmapStrength(FSolsticeWeatherPreset& WeatherPreset, float Value) {
}

void UAtmosphereLibrary::SetGlobalHeightmapExponent(FSolsticeWeatherPreset& WeatherPreset, float Value) {
}

void UAtmosphereLibrary::SetFogInscatteringColor(FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value) {
}

void UAtmosphereLibrary::SetFogHeightFalloff(FSolsticeEnvironmentPreset& EnvironmentPreset, float Value) {
}

void UAtmosphereLibrary::SetFogExtinctionOutside(FSolsticeWeatherPreset& WeatherPreset, float Value) {
}

void UAtmosphereLibrary::SetFogExtinctionInside(FSolsticeWeatherPreset& WeatherPreset, float Value) {
}

void UAtmosphereLibrary::SetFogDensity(FSolsticeEnvironmentPreset& EnvironmentPreset, float Value) {
}

void UAtmosphereLibrary::SetFogAlbedoOutdoor(FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value) {
}

void UAtmosphereLibrary::SetFogAlbedoIndoor(FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value) {
}

void UAtmosphereLibrary::SetDirectionalLightIntensity(FSolsticeEnvironmentPreset& EnvironmentPreset, float Value) {
}

void UAtmosphereLibrary::SetDirectionalLightColor(FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value) {
}

void UAtmosphereLibrary::SetCloudCoverage(FSolsticeWeatherPreset& WeatherPreset, float Value) {
}

void UAtmosphereLibrary::SetBaseSpawnRate(FSolsticeStormPreset& StormPreset, float Value) {
}

FSolsticeWeatherPreset UAtmosphereLibrary::LerpWeather(const FSolsticeWeatherPreset& A, const FSolsticeWeatherPreset& B, float Alpha) {
    return FSolsticeWeatherPreset{};
}

FSolsticeEnvironmentPreset UAtmosphereLibrary::LerpEnvironment(const FSolsticeEnvironmentPreset& A, const FSolsticeEnvironmentPreset& B, float Alpha) {
    return FSolsticeEnvironmentPreset{};
}

float UAtmosphereLibrary::GetWindStrength(const FSolsticeWeatherPreset& WeatherPreset) {
    return 0.0f;
}

FVector UAtmosphereLibrary::GetWindSpeed(const FSolsticeWeatherPreset& WeatherPreset) {
    return FVector{};
}

float UAtmosphereLibrary::GetWindSize(const FSolsticeWeatherPreset& WeatherPreset) {
    return 0.0f;
}

float UAtmosphereLibrary::GetTemperature(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return 0.0f;
}

float UAtmosphereLibrary::GetSunAngle(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return 0.0f;
}

FSolsticeWeatherPreset UAtmosphereLibrary::GetStormWeatherFromTag(FGameplayTag BaseWeatherTag, EStormSeverity StormSeverity) {
    return FSolsticeWeatherPreset{};
}

FSolsticeWeatherPreset UAtmosphereLibrary::GetStormWeather(const FSolsticeWeatherPreset& BaseWeatherPreset, EStormSeverity StormSeverity) {
    return FSolsticeWeatherPreset{};
}

FSolsticeEnvironmentPreset UAtmosphereLibrary::GetStormEnvironmentFromTag(FGameplayTag BaseEnvironmentTag, EStormSeverity StormSeverity) {
    return FSolsticeEnvironmentPreset{};
}

FSolsticeEnvironmentPreset UAtmosphereLibrary::GetStormEnvironment(const FSolsticeEnvironmentPreset& BaseEnvironmentPreset, EStormSeverity StormSeverity) {
    return FSolsticeEnvironmentPreset{};
}

float UAtmosphereLibrary::GetSourceCubemapAngle(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return 0.0f;
}

float UAtmosphereLibrary::GetSkyLightIntensity(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return 0.0f;
}

UTextureCube* UAtmosphereLibrary::GetSkyLightCubemap(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return NULL;
}

FLinearColor UAtmosphereLibrary::GetSkyLightColor(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return FLinearColor{};
}

FVector UAtmosphereLibrary::GetRainPuddleColor(const FSolsticeWeatherPreset& WeatherPreset) {
    return FVector{};
}

FVector UAtmosphereLibrary::GetPrecipitationAmount(const FSolsticeWeatherPreset& WeatherPreset) {
    return FVector{};
}

float UAtmosphereLibrary::GetParticleRateMultiplier(const FSolsticeWeatherPreset& WeatherPreset) {
    return 0.0f;
}

FVector UAtmosphereLibrary::GetNoiseAlphaSize(const FSolsticeWeatherPreset& WeatherPreset) {
    return FVector{};
}

FLinearColor UAtmosphereLibrary::GetNoiseAlphaChannel(const FSolsticeWeatherPreset& WeatherPreset) {
    return FLinearColor{};
}

float UAtmosphereLibrary::GetMonsterLightIntensity(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return 0.0f;
}

FLinearColor UAtmosphereLibrary::GetMonsterLightColor(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return FLinearColor{};
}

FLinearColor UAtmosphereLibrary::GetIndoor_PP_Tint(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return FLinearColor{};
}

float UAtmosphereLibrary::GetIndoor_PP_Saturation(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return 0.0f;
}

float UAtmosphereLibrary::GetIndoor_PP_Brightness(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return 0.0f;
}

float UAtmosphereLibrary::GetGlobalSaturation(const FSolsticeWeatherPreset& WeatherPreset) {
    return 0.0f;
}

float UAtmosphereLibrary::GetGlobalRoughness(const FSolsticeWeatherPreset& WeatherPreset) {
    return 0.0f;
}

float UAtmosphereLibrary::GetGlobalHeightmapStrength(const FSolsticeWeatherPreset& WeatherPreset) {
    return 0.0f;
}

float UAtmosphereLibrary::GetGlobalHeightmapExponent(const FSolsticeWeatherPreset& WeatherPreset) {
    return 0.0f;
}

FLinearColor UAtmosphereLibrary::GetFogInscatteringColor(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return FLinearColor{};
}

float UAtmosphereLibrary::GetFogHeightFalloff(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return 0.0f;
}

float UAtmosphereLibrary::GetFogExtinctionOutside(const FSolsticeWeatherPreset& WeatherPreset) {
    return 0.0f;
}

float UAtmosphereLibrary::GetFogExtinctionInside(const FSolsticeWeatherPreset& WeatherPreset) {
    return 0.0f;
}

float UAtmosphereLibrary::GetFogDensity(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return 0.0f;
}

FLinearColor UAtmosphereLibrary::GetFogAlbedoOutdoor(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return FLinearColor{};
}

FLinearColor UAtmosphereLibrary::GetFogAlbedoIndoor(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return FLinearColor{};
}

float UAtmosphereLibrary::GetDirectionalLightIntensity(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return 0.0f;
}

FLinearColor UAtmosphereLibrary::GetDirectionalLightColor(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
    return FLinearColor{};
}

float UAtmosphereLibrary::GetCloudCoverage(const FSolsticeWeatherPreset& WeatherPreset) {
    return 0.0f;
}


