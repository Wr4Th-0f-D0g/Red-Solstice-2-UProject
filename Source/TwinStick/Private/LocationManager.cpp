#include "LocationManager.h"
#include "Net/UnrealNetwork.h"

ULocationManager::ULocationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDelayGrabbingActors = false;
    this->LocationNavFilter = NULL;
    this->ChosenSafeZone = NULL;
    this->TimerDuration = 6.00f;
}

void ULocationManager::RemoveLocationByActor(AActor* InTrackedActor) {
}

void ULocationManager::RegisterSafeZone(TArray<AActor*> SafeZoneSpawnPoints) {
}

void ULocationManager::PopulateLocationsArray() {
}

void ULocationManager::MakeLocationFromActor(AActor* InTrackedActor, FLocationInfo& OutLocation) {
}

bool ULocationManager::IsActorInsideLocation(const FLocationInfo& InLocationInfo, AActor* TestActor) const {
    return false;
}

void ULocationManager::GetZoneActorsWithPawns(TMap<AZoneActor*, int32>& OutZoneActors) {
}

void ULocationManager::GetZoneActors(TMap<AZoneActor*, int32>& OutZoneActors) {
}

void ULocationManager::GetTerminalLocations(TArray<FLocationInfo>& TerminalLocations) {
}

void ULocationManager::GetSafeZoneLocations(TArray<FLocationInfo>& SafeZoneLocations) {
}

void ULocationManager::GetPowerRelayLocations(TArray<FLocationInfo>& PowerRelayLocations) {
}

int32 ULocationManager::GetNumberOfPawnsInZone(AZoneActor* ZoneActor) {
    return 0;
}

void ULocationManager::GetLocationsByTags(const FGameplayTagContainer& LocationGameplayTags, EGameplayContainerMatchType MatchType, FName LocationTag, TArray<FLocationInfo>& OutLocations, FVector LocationForDistance, float MinimumRange, ELocationDistance DistanceToClosestPawn, bool bWantDisabled) {
}

void ULocationManager::GetLocationsByGameplayTags(FGameplayTagContainer LocationTags, EGameplayContainerMatchType MatchType, TArray<FLocationInfo>& OutLocations, FVector LocationForDistance, float MinimumRange, ELocationDistance DistanceToClosestPawn, bool bWantDisabled) {
}

void ULocationManager::GetLocationsByActorTags(const TArray<FName>& LocationTags, TArray<FLocationInfo>& OutLocations, FVector LocationForDistance, float MinimumRange, ELocationDistance DistanceToClosestPawn, bool bWantDisabled) {
}

void ULocationManager::GetLocationInfosFromZoneWithPawns(AZoneActor* ZoneActor, TMap<FLocationInfo, int32>& OutLocationInfo) {
}

TArray<FLocationInfo> ULocationManager::GetLocationInfosFromZonesWithPawnsByTag(const TArray<AZoneActor*>& Zones, const FGameplayTag& LocationTag, FName Tag) {
    return TArray<FLocationInfo>();
}

TArray<FLocationInfo> ULocationManager::GetLocationInfosFromZonesByTagByDistance(const TArray<AZoneActor*>& Zones, const FGameplayTag& LocationTag, FName Tag, float MinDistance, float MaxDistance) {
    return TArray<FLocationInfo>();
}

TArray<FLocationInfo> ULocationManager::GetLocationInfosFromZonesByTag(const TArray<AZoneActor*>& Zones, const FGameplayTag& LocationTag, FName Tag) {
    return TArray<FLocationInfo>();
}

TArray<FLocationInfo> ULocationManager::GetLocationInfosFromZoneByTag(AZoneActor* Zone, const FGameplayTag& LocationTag, FName Tag) {
    return TArray<FLocationInfo>();
}

TArray<FLocationInfo> ULocationManager::GetLocationInfoFromZoneWithPawnsByTag(AZoneActor* Zone, const FGameplayTag& LocationTag, FName Tag) {
    return TArray<FLocationInfo>();
}

bool ULocationManager::GetLocationCloseToPointWithGameplayTag(const FVector& Location, const FGameplayTagContainer& LocationTags, FLocationInfo& OutLocation) {
    return false;
}

TArray<ADynamicActorBase*> ULocationManager::GetDynamicActors() const {
    return TArray<ADynamicActorBase*>();
}

TArray<ADoorBase*> ULocationManager::GetDoorsSortedByDistanceToLocation(const FVector& Location) const {
    return TArray<ADoorBase*>();
}

TArray<ADoorBase*> ULocationManager::GetDoors() const {
    return TArray<ADoorBase*>();
}

TArray<FLocationInfo> ULocationManager::GetClosestLocationToPawnsInAllZones(const FGameplayTagContainer& IgnoredLocGameplayTags, const TArray<FName>& IgnoredLocTags) {
    return TArray<FLocationInfo>();
}

TArray<FLocationInfo> ULocationManager::GetAllLocationsWithPawnsInAllZones(const FGameplayTagContainer& IgnoredLocGameplayTags, const TArray<FName>& IgnoredLocTags) {
    return TArray<FLocationInfo>();
}

void ULocationManager::ChooseSafeZone() {
}

void ULocationManager::CheckInSafeZone(ASafeZoneBase* WorldContextObject) {
}

bool ULocationManager::AreLocationsMapped() const {
    return false;
}

void ULocationManager::AddLocationFromActor(AActor* InTrackedActor, FGameplayTagContainer InLocationGameplayTags, TArray<FName> InLocationTags, FLocationInfo& OutLocation) {
}

void ULocationManager::AddBeginPlayLocationFromActor(AActor* InTrackedActor, FGameplayTagContainer InLocationGameplayTags, TArray<FName> InLocationTags, FLocationInfo& OutLocation) {
}

void ULocationManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULocationManager, ChosenSafeZone);
}


