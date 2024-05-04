#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EEnemyThreatLevel.h"
#include "MonsterMusicDeathStruct.h"
#include "OnWorldRainChangedDelegate.h"
#include "SolsticeEnvironmentPreset.h"
#include "SolsticeWeatherPreset.h"
#include "AtmosphereController.generated.h"

class AMapSystemActorBounds;
class AMonsterCharacterBase;
class APostProcessVolume;
class UDataTable;
class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class UMaterialParameterCollection;
class UObject;
class UPostProcessComponent;
class USceneComponent;
class USkyLightComponent;
class UTexture2D;
class UTextureCube;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class TWINSTICK_API AAtmosphereController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* DirectionalLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* ExponentialHeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyLightComponent* SkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* MonstersLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostProcessVolume* PostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* ScenePostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InMapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* MapTextureRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* EnvironmentParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* EffectsParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* LocationsParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* DefaultSkylightCubemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AtmosphereUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIndoorsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> InsideBuildingArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapSystemActorBounds* MapBoundsActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnvironmentDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SavedEnvironmentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultEnvironmentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSolsticeEnvironmentPreset TargetEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSolsticeEnvironmentPreset CurrentEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSolsticeEnvironmentPreset StartingEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnvironmentTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentEnvironmentTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LevelEnvironmentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviewEnvironmentHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeatherDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SavedWeatherTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultWeatherTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSolsticeWeatherPreset TargetWeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSolsticeWeatherPreset CurrentWeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSolsticeWeatherPreset StartingWeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeatherTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentWeatherTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentWeatherTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LevelWeatherTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviewWeatherHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutsideExtinctionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InsideExtinctionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EnvironmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedAtmosphereTypes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldRainChanged OnWorldRainChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWorldRainEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RainEnabledColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RainDisabledColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AtmosphereTypeSelected;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FriendlyRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEnemyThreatLevel, float> MonsterValuesFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEnemyThreatLevel, float> MonsterValuesClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayersMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BotsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LevelThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdedScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KilledMonsterTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMonsterMusicDeathStruct> MonsterDeathValues;
    
    AAtmosphereController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWeatherMPCs(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEnvironmentMPCs(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAtmosphere(bool ForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void TryRegisterKilledMonster(AMonsterCharacterBase* InMonster);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetWeatherByValue(const FSolsticeWeatherPreset& NewWeatherPreset, float TransitionTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetWeather(FGameplayTag WeatherTag, float TransitionTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetEnvironment(FGameplayTag EnvironmentTag, float TransitionTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStartingWeather(const FSolsticeWeatherPreset& WeatherPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetStartingEnvironment(const FSolsticeEnvironmentPreset& EnvironmentPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetRandomWeather();
    
    UFUNCTION(BlueprintCallable)
    void SetRandomEnvironment();
    
    UFUNCTION(BlueprintCallable)
    void SetRainEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWeather(const FSolsticeWeatherPreset& WeatherPreset, bool bRerunConstructionInEditor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectAtmosphereType();
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveLevelWeather();
    
    UFUNCTION(BlueprintCallable)
    void SaveLevelEnvironment();
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> ParseTexture(bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    uint8 LocationToTextureColor(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void LoadLevelWeather();
    
    UFUNCTION(BlueprintCallable)
    void LoadLevelEnvironment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInsideBuilding(const UObject* WorldContextObject, const FVector Point);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IncreaseStormLevel(int32 IncreaseBy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSolsticeWeatherPreset GetOldSystemWeather() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSolsticeEnvironmentPreset GetOldSystemEnvironment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetColorFromTexturePosition(UTexture2D* InTexture, int32 MipMapIndex, int32 PositionX, int32 PositionY, bool& bOutSuccess) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateAtmosphere();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecreaseStormLevel(int32 DecreaseBy);
    
    UFUNCTION(BlueprintCallable)
    void CalculateMusicLevel(int32& OutLevel, bool& bOutCrowded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AtmosphereUpdateOutdoors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AtmosphereUpdateIndoors();
    
    UFUNCTION(BlueprintCallable)
    void AddWeatherPreset(FSolsticeWeatherPreset WeatherPreset, FGameplayTag WeatherTag);
    
    UFUNCTION(BlueprintCallable)
    void AddLevelEnvironmentPreset(FSolsticeEnvironmentPreset EnvironmentPreset, FGameplayTag EnvironmentTag);
    
    UFUNCTION(BlueprintCallable)
    void AcquireData();
    
};

