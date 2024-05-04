#include "AtmosphereController.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkyLightComponent.h"

AAtmosphereController::AAtmosphereController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->DirectionalLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("DirectionalLight"));
    this->ExponentialHeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("ExponentialHeightFog"));
    this->SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLight"));
    this->MonstersLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("MonstersLight"));
    this->PostProcess = NULL;
    this->ScenePostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("ScenePostProcess"));
    this->InMapTexture = NULL;
    this->MapTextureRT = NULL;
    this->EnvironmentParameterCollection = NULL;
    this->EffectsParameterCollection = NULL;
    this->LocationsParameterCollection = NULL;
    this->DefaultSkylightCubemap = NULL;
    this->AtmosphereUpdateInterval = 0.15f;
    this->bIndoorsMap = false;
    this->MapBoundsActor = NULL;
    this->EnvironmentDataTable = NULL;
    this->EnvironmentTransitionTime = 3600.00f;
    this->CurrentEnvironmentTransitionTime = 0.00f;
    this->WeatherDataTable = NULL;
    this->WeatherTransitionTime = 300.00f;
    this->CurrentWeatherTransitionTime = 0.00f;
    this->MinimumFogDensity = 0.00f;
    this->MaximumFogDensity = 0.05f;
    this->OutsideExtinctionScale = 3.00f;
    this->InsideExtinctionScale = 1.00f;
    this->bWorldRainEnabled = false;
    this->DistanceClose = 1000.00f;
    this->DistanceFar = 6500.00f;
    this->FriendlyRange = 3000.00f;
    this->PlayersMultiplier = 0.14f;
    this->BotsMultiplier = 0.05f;
    this->LevelThresholds.AddDefaulted(4);
    this->LowHealthPercentage = 0.25f;
    this->CrowdedScore = 30.00f;
    this->KilledMonsterTimeout = 15.00f;
    this->DirectionalLight->SetupAttachment(RootComponent);
    this->ExponentialHeightFog->SetupAttachment(RootComponent);
    this->SkyLight->SetupAttachment(RootComponent);
    this->MonstersLight->SetupAttachment(RootComponent);
    this->ScenePostProcess->SetupAttachment(RootComponent);
}



void AAtmosphereController::UpdateAtmosphere(bool ForceUpdate) {
}

void AAtmosphereController::TryRegisterKilledMonster(AMonsterCharacterBase* InMonster) {
}

void AAtmosphereController::SetTargetWeatherByValue(const FSolsticeWeatherPreset& NewWeatherPreset, float TransitionTime) {
}

void AAtmosphereController::SetTargetWeather(FGameplayTag WeatherTag, float TransitionTime) {
}

void AAtmosphereController::SetTargetEnvironment(FGameplayTag EnvironmentTag, float TransitionTime) {
}

void AAtmosphereController::SetStartingWeather(const FSolsticeWeatherPreset& WeatherPreset) {
}

void AAtmosphereController::SetStartingEnvironment(const FSolsticeEnvironmentPreset& EnvironmentPreset) {
}

void AAtmosphereController::SetRandomWeather() {
}

void AAtmosphereController::SetRandomEnvironment() {
}

void AAtmosphereController::SetRainEnabled(bool bNewEnabled) {
}

void AAtmosphereController::SetCurrentWeather(const FSolsticeWeatherPreset& WeatherPreset, bool bRerunConstructionInEditor) {
}

void AAtmosphereController::SelectAtmosphereType_Implementation() {
}

void AAtmosphereController::SaveLevelWeather() {
}

void AAtmosphereController::SaveLevelEnvironment() {
}

TArray<uint8> AAtmosphereController::ParseTexture(bool& bOutSuccess) {
    return TArray<uint8>();
}

uint8 AAtmosphereController::LocationToTextureColor(const FVector& Location) {
    return 0;
}

void AAtmosphereController::LoadLevelWeather() {
}

void AAtmosphereController::LoadLevelEnvironment() {
}

bool AAtmosphereController::IsInsideBuilding(const UObject* WorldContextObject, const FVector Point) {
    return false;
}


FSolsticeWeatherPreset AAtmosphereController::GetOldSystemWeather_Implementation() const {
    return FSolsticeWeatherPreset{};
}

FSolsticeEnvironmentPreset AAtmosphereController::GetOldSystemEnvironment_Implementation() const {
    return FSolsticeEnvironmentPreset{};
}

FColor AAtmosphereController::GetColorFromTexturePosition(UTexture2D* InTexture, int32 MipMapIndex, int32 PositionX, int32 PositionY, bool& bOutSuccess) const {
    return FColor{};
}

void AAtmosphereController::ForceUpdateAtmosphere() {
}


void AAtmosphereController::CalculateMusicLevel(int32& OutLevel, bool& bOutCrowded) {
}



void AAtmosphereController::AddWeatherPreset(FSolsticeWeatherPreset WeatherPreset, FGameplayTag WeatherTag) {
}

void AAtmosphereController::AddLevelEnvironmentPreset(FSolsticeEnvironmentPreset EnvironmentPreset, FGameplayTag EnvironmentTag) {
}

void AAtmosphereController::AcquireData() {
}


