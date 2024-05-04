#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EStormSeverity.h"
#include "SolsticeEnvironmentPreset.h"
#include "SolsticeStormPreset.h"
#include "SolsticeWeatherPreset.h"
#include "AtmosphereLibrary.generated.h"

class UParticleSystem;
class UTextureCube;

UCLASS(Blueprintable)
class UAtmosphereLibrary : public UObject {
    GENERATED_BODY()
public:
    UAtmosphereLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetWindStrength(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindSpeed(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindSize(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTemperature(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSunAngle(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSourceCubemapAngle(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkyLightIntensity(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkyLightCubemap(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, UTextureCube* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkyLightColor(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetRainPuddleColor(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrecipitationAmount(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetParticleSystem(UPARAM(Ref) FSolsticeStormPreset& StormPreset, UParticleSystem* Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetParticleRateMultiplier(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNoiseAlphaSize(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, FVector Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNoiseAlphaChannel(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetMonsterLightIntensity(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetMonsterLightColor(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetIndoor_PP_Tint(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetIndoor_PP_Saturation(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetIndoor_PP_Brightness(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalSaturation(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalRoughness(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalHeightmapStrength(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalHeightmapExponent(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFogInscatteringColor(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFogHeightFalloff(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFogExtinctionOutside(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFogExtinctionInside(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFogDensity(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFogAlbedoOutdoor(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFogAlbedoIndoor(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDirectionalLightIntensity(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDirectionalLightColor(UPARAM(Ref) FSolsticeEnvironmentPreset& EnvironmentPreset, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetCloudCoverage(UPARAM(Ref) FSolsticeWeatherPreset& WeatherPreset, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBaseSpawnRate(UPARAM(Ref) FSolsticeStormPreset& StormPreset, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSolsticeWeatherPreset LerpWeather(const FSolsticeWeatherPreset& A, const FSolsticeWeatherPreset& B, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSolsticeEnvironmentPreset LerpEnvironment(const FSolsticeEnvironmentPreset& A, const FSolsticeEnvironmentPreset& B, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWindStrength(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetWindSpeed(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWindSize(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTemperature(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSunAngle(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSolsticeWeatherPreset GetStormWeatherFromTag(FGameplayTag BaseWeatherTag, EStormSeverity StormSeverity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSolsticeWeatherPreset GetStormWeather(const FSolsticeWeatherPreset& BaseWeatherPreset, EStormSeverity StormSeverity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSolsticeEnvironmentPreset GetStormEnvironmentFromTag(FGameplayTag BaseEnvironmentTag, EStormSeverity StormSeverity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSolsticeEnvironmentPreset GetStormEnvironment(const FSolsticeEnvironmentPreset& BaseEnvironmentPreset, EStormSeverity StormSeverity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSourceCubemapAngle(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSkyLightIntensity(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTextureCube* GetSkyLightCubemap(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetSkyLightColor(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRainPuddleColor(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPrecipitationAmount(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetParticleRateMultiplier(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetNoiseAlphaSize(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetNoiseAlphaChannel(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMonsterLightIntensity(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetMonsterLightColor(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetIndoor_PP_Tint(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetIndoor_PP_Saturation(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetIndoor_PP_Brightness(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGlobalSaturation(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGlobalRoughness(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGlobalHeightmapStrength(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGlobalHeightmapExponent(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetFogInscatteringColor(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFogHeightFalloff(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFogExtinctionOutside(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFogExtinctionInside(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFogDensity(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetFogAlbedoOutdoor(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetFogAlbedoIndoor(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDirectionalLightIntensity(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetDirectionalLightColor(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCloudCoverage(const FSolsticeWeatherPreset& WeatherPreset);
    
};

