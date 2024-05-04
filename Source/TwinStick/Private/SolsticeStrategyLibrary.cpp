#include "SolsticeStrategyLibrary.h"
#include "Templates/SubclassOf.h"

USolsticeStrategyLibrary::USolsticeStrategyLibrary() {
}

float USolsticeStrategyLibrary::WorldRotatorToPlanetaryYaw(const FRotator& WorldRotation, const FVector& Point, const FVector& PlanetLocation, const FVector& PlanetUpDirection) {
    return 0.0f;
}

bool USolsticeStrategyLibrary::WorldMapTabAvailable(UObject* WorldContextObject) {
    return false;
}

bool USolsticeStrategyLibrary::WorkbenchShouldBeEnabled(const UObject* WorldContext) {
    return false;
}

bool USolsticeStrategyLibrary::TasksTabAvailable(UObject* WorldContextObject) {
    return false;
}

FMarsTime USolsticeStrategyLibrary::Substract_MarsTimeMarsTime(FMarsTime A, FMarsTime B) {
    return FMarsTime{};
}

bool USolsticeStrategyLibrary::StrategyTimedFlagIsActive(const UObject* WorldContextObject, FGameplayTag QueryFlagTag) {
    return false;
}

bool USolsticeStrategyLibrary::StratagemIsEquippedOnSomeone(const UObject* WorldContext, FGameplayTag StratagemTag, AStrategyPlayerState*& OutEquippedPlayerState) {
    return false;
}

bool USolsticeStrategyLibrary::SoldiersTabAvailable(UObject* WorldContextObject) {
    return false;
}

bool USolsticeStrategyLibrary::ShouldUseCoopCampaignEquipment(const UObject* WorldContextObject) {
    return false;
}

FRotator USolsticeStrategyLibrary::PlanetaryYawToWorldRotator(float PlanetaryYaw, const FVector& Point, const FVector& PlanetLocation, const FVector& PlanetUpDirection) {
    return FRotator{};
}

bool USolsticeStrategyLibrary::MissionSetupTabAvailable(UObject* WorldContextObject) {
    return false;
}

bool USolsticeStrategyLibrary::MarsTimeIsValid(FMarsTime InTime) {
    return false;
}

FMissionEffect USolsticeStrategyLibrary::MakeMissionEffectFromData(const FMissionEffectData& MissionEffectData) {
    return FMissionEffect{};
}

FMissionEffect USolsticeStrategyLibrary::MakeMissionEffect(FGameplayTag& EffectTag, TSubclassOf<USolsticeBuffBase> BuffClass, const FGameplayTagContainer& Items, float Value) {
    return FMissionEffect{};
}

bool USolsticeStrategyLibrary::IsSinglePlayer(UObject* WorldContextObject) {
    return false;
}

bool USolsticeStrategyLibrary::IsInDistantFuture(FMarsTime InTime) {
    return false;
}

AWeaponWorkbenchBase* USolsticeStrategyLibrary::GetWorkbenchActor(const UObject* WorldContextObject) {
    return NULL;
}

FGameplayTag USolsticeStrategyLibrary::GetViewTag(const FStrategyViewConfiguration& InView) {
    return FGameplayTag{};
}

UStrategyViewManager* USolsticeStrategyLibrary::GetViewManager(const UObject* WorldContextObject) {
    return NULL;
}

int32 USolsticeStrategyLibrary::GetUnlockedInventorySlotCount(const UObject* WorldContext) {
    return 0;
}

float USolsticeStrategyLibrary::GetTravelModeTimeMultiplier() {
    return 0.0f;
}

FText USolsticeStrategyLibrary::GetTimeDisplayText(const FMarsTime& InTime) {
    return FText::GetEmpty();
}

void USolsticeStrategyLibrary::GetStrategyViewTarget(const FStrategyViewConfiguration& InView, AActor*& ViewTarget, float& BlendTime) {
}

AStrategyMission* USolsticeStrategyLibrary::GetStrategyMission(const FStrategyMissionTimer& MissionStatus) {
    return NULL;
}

UStrategyMapDefinitions* USolsticeStrategyLibrary::GetStrategyMapDefinitions() {
    return NULL;
}

EStormSeverity USolsticeStrategyLibrary::GetStormSeverity(FRegionalStormTracker StormTracker) {
    return EStormSeverity::None;
}

UStrategyStormManager* USolsticeStrategyLibrary::GetStormManager(const UObject* WorldContextObject) {
    return NULL;
}

ASOLAR* USolsticeStrategyLibrary::GetSolar(const UObject* WorldContextObject) {
    return NULL;
}

float USolsticeStrategyLibrary::GetSlowModeTimeMultiplier() {
    return 0.0f;
}

FGameplayTag USolsticeStrategyLibrary::GetSelectedCampaignTag(const UObject* WorldContextObject) {
    return FGameplayTag{};
}

float USolsticeStrategyLibrary::GetScanModeTimeMultiplier() {
    return 0.0f;
}

UStrategyResourceManager* USolsticeStrategyLibrary::GetResourceManager(const UObject* WorldContextObject) {
    return NULL;
}

FMarsTime USolsticeStrategyLibrary::GetResearchTimeRemaining(const FActiveResearch& InResearch) {
    return FMarsTime{};
}

float USolsticeStrategyLibrary::GetResearchProgress(const FActiveResearch& InResearch) {
    return 0.0f;
}

UStrategyResearchManager* USolsticeStrategyLibrary::GetResearchManager(const UObject* WorldContextObject) {
    return NULL;
}

ARegion* USolsticeStrategyLibrary::GetRegionFromLocation(const UObject* WorldContextObject, const FCampaignMissionLocation& InLocation, bool bTryAvoidHQRegion) {
    return NULL;
}

ARegion* USolsticeStrategyLibrary::GetRegionByName(const UObject* WorldContextObject, const FString& InName) {
    return NULL;
}

FVector USolsticeStrategyLibrary::GetPlanetaryUpAtPoint(const FVector& Point, const FVector& PlanetLocation) {
    return FVector{};
}

FVector USolsticeStrategyLibrary::GetPlanetaryNorthAtPoint(const FVector& Point, const FVector& PlanetLocation, const FVector& PlanetUpDirection) {
    return FVector{};
}

FVector USolsticeStrategyLibrary::GetPlanetaryEastAtPoint(const FVector& Point, const FVector& PlanetLocation, const FVector& PlanetUpDirection) {
    return FVector{};
}

UStrategyMissionManager* USolsticeStrategyLibrary::GetMissionManager(const UObject* WorldContextObject) {
    return NULL;
}

float USolsticeStrategyLibrary::GetMarsTimeSeconds(const FMarsTime& InTime) {
    return 0.0f;
}

void USolsticeStrategyLibrary::GetMarsTimeDaysHours(const FMarsTime& InTime, int32& OutDays, int32& OutHours) {
}

AStrategyMapManager* USolsticeStrategyLibrary::GetMapManager(const UObject* WorldContextObject) {
    return NULL;
}

AStrategyPlayerState* USolsticeStrategyLibrary::GetLocalPlayerStateViewContext(const UObject* WorldContextObject) {
    return NULL;
}

float USolsticeStrategyLibrary::GetKilometersPerUU(const UObject* WorldContextObject) {
    return 0.0f;
}

UStrategyIntelManager* USolsticeStrategyLibrary::GetIntelManager(const UObject* WorldContextObject) {
    return NULL;
}

float USolsticeStrategyLibrary::GetInsurgentResistanceProgress(const UObject* WorldContext) {
    return 0.0f;
}

UStrategyInfestationManager* USolsticeStrategyLibrary::GetInfestationManager(const UObject* WorldContextObject) {
    return NULL;
}

EHQStatus USolsticeStrategyLibrary::GetHQ_Status(const UObject* WorldContextObject) {
    return EHQStatus::Invalid;
}

ARegion* USolsticeStrategyLibrary::GetHQ_Region(const UObject* WorldContextObject) {
    return NULL;
}

AExecutorHQ* USolsticeStrategyLibrary::GetHQ(const UObject* WorldContextObject) {
    return NULL;
}

AHASROC* USolsticeStrategyLibrary::GetHasroc(const UObject* WorldContextObject) {
    return NULL;
}

ALoadoutGarageBase* USolsticeStrategyLibrary::GetGarageActor(const UObject* WorldContextObject) {
    return NULL;
}

ECampaignMode USolsticeStrategyLibrary::GetGameCampaignMode(const UObject* WorldContextObject) {
    return ECampaignMode::Skirmish;
}

UStrategyEngineeringManager* USolsticeStrategyLibrary::GetEngineeringManager(const UObject* WorldContextObject) {
    return NULL;
}

AStrategyMapActor* USolsticeStrategyLibrary::GetDropshipTarget(const UObject* WorldContextObject) {
    return NULL;
}

EDropshipStatus USolsticeStrategyLibrary::GetDropshipStatus(const UObject* WorldContextObject) {
    return EDropshipStatus::Invalid;
}

AStrategyDropship* USolsticeStrategyLibrary::GetDropship(const UObject* WorldContextObject) {
    return NULL;
}

float USolsticeStrategyLibrary::GetDissipationChance(FRegionalStormTracker StormTracker) {
    return 0.0f;
}

float USolsticeStrategyLibrary::GetCurrentTimeMultiplier(const UObject* WorldContextObject) {
    return 0.0f;
}

UBotStatus* USolsticeStrategyLibrary::GetCurrentlySelectedBot(const UObject* WorldContext) {
    return NULL;
}

UStrategyCampaignData* USolsticeStrategyLibrary::GetCurrentCampaignData(const UObject* WorldContextObject) {
    return NULL;
}

EStrategyMissionStatus USolsticeStrategyLibrary::GetCompletionStatus(const FStrategyMissionTimer& MissionStatus) {
    return EStrategyMissionStatus::Active;
}

FText USolsticeStrategyLibrary::GetCampaignTimeDisplayText(const FMarsTime& InTime) {
    return FText::GetEmpty();
}

ASuperWeaponBase* USolsticeStrategyLibrary::GetCampaignSuperweapon(const UObject* WorldContextObject) {
    return NULL;
}

UCampaignStateComponent* USolsticeStrategyLibrary::GetCampaignState(const UObject* WorldContextObject) {
    return NULL;
}

FMarsTime USolsticeStrategyLibrary::GetCampaignStartTime(const UObject* WorldContextObject) {
    return FMarsTime{};
}

EDifficulty USolsticeStrategyLibrary::GetCampaignDifficulty(const UObject* WorldContextObject) {
    return EDifficulty::None;
}

FText USolsticeStrategyLibrary::GetCampaignDateDisplayText(const FMarsTime& InTime) {
    return FText::GetEmpty();
}

UStrategyCampaignData* USolsticeStrategyLibrary::GetCampaignDataByTag(const UObject* WorldContextObject, FGameplayTag CampaignSelectionTag) {
    return NULL;
}

FMarsTime USolsticeStrategyLibrary::GetCampaignCurrentTime(const UObject* WorldContextObject) {
    return FMarsTime{};
}

UCallToActionManager* USolsticeStrategyLibrary::GetCallToActionManager(const UObject* WorldContextObject) {
    return NULL;
}

UBotManager* USolsticeStrategyLibrary::GetBotManager(const UObject* WorldContextObject) {
    return NULL;
}

TArray<EDifficulty> USolsticeStrategyLibrary::GetAvailableGameDifficulties(const UObject* WorldContextObject) {
    return TArray<EDifficulty>();
}

TArray<EDifficulty> USolsticeStrategyLibrary::GetAllGameDifficulties() {
    return TArray<EDifficulty>();
}

UCampaign* USolsticeStrategyLibrary::GetActiveCampaign(const UObject* WorldContextObject) {
    return NULL;
}

bool USolsticeStrategyLibrary::FindWeaponModDescriptionRowNameFromAppliedBuffName(const UObject* WorldContext, FName InAppliedBuffName, FName& FoundModName) {
    return false;
}

bool USolsticeStrategyLibrary::Equals_SolsticeSaveSolsticeSave(const FSolsticeSaveGameInfo& A, const FSolsticeSaveGameInfo& B) {
    return false;
}

FGameplayTag USolsticeStrategyLibrary::CorporationToCampaignSelectionTag(ECorporation InCorporation) {
    return FGameplayTag{};
}

TMap<FName, int32> USolsticeStrategyLibrary::CondenseModuleList(const TArray<FSavedModule>& InModules) {
    return TMap<FName, int32>();
}

bool USolsticeStrategyLibrary::CanUseInsurgentResistanceProgress(const UObject* WorldContext) {
    return false;
}

bool USolsticeStrategyLibrary::CanUseGarage(const UObject* WorldContext) {
    return false;
}

bool USolsticeStrategyLibrary::CanUseBlackOps(const UObject* WorldContext) {
    return false;
}

bool USolsticeStrategyLibrary::CanModifyAnyWeapons(const UObject* WorldContext) {
    return false;
}

bool USolsticeStrategyLibrary::CampaignMeetsCampaignRequirements(const UObject* WorldContext, FSolsticeCampaignRequirement Requirement) {
    return false;
}

bool USolsticeStrategyLibrary::CampaignHasTag(const UObject* WorldContextObject, FGameplayTag QueryTag, bool bExactTag) {
    return false;
}

bool USolsticeStrategyLibrary::CampaignHasAllTags(const UObject* WorldContextObject, FGameplayTagContainer QueryContainer, bool bExactTag) {
    return false;
}

FMissionEffectContainer USolsticeStrategyLibrary::AggregateMissionEffectContainer(const FMissionEffectContainer& InMissionEffectContainer, bool IgnoreIndividualMissions) {
    return FMissionEffectContainer{};
}

FMarsTime USolsticeStrategyLibrary::Add_MarsTimeSeconds(FMarsTime A, float B) {
    return FMarsTime{};
}

FMarsTime USolsticeStrategyLibrary::Add_MarsTimeMarsTime(FMarsTime A, FMarsTime B) {
    return FMarsTime{};
}

FMarsTime USolsticeStrategyLibrary::Add_MarsTimeHours(FMarsTime A, int32 B) {
    return FMarsTime{};
}


