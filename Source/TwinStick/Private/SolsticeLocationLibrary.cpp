#include "SolsticeLocationLibrary.h"
#include "Templates/SubclassOf.h"

USolsticeLocationLibrary::USolsticeLocationLibrary() {
}

bool USolsticeLocationLibrary::TestPath(const UObject* WorldContextObject, FVector Start, FVector Finish, AActor* ReferenceActor, bool bUseDefaultMesh, TSubclassOf<UNavigationQueryFilter> Filter) {
    return false;
}

TArray<FLocationInfo> USolsticeLocationLibrary::SortLocationInfoCopy(const TArray<FLocationInfo>& InLocationInfo, const FVector& Location, bool bAscending) {
    return TArray<FLocationInfo>();
}

void USolsticeLocationLibrary::SortLocationInfo(TArray<FLocationInfo>& InOutLocationInfo, const FVector& Location, bool bAscending) {
}

bool USolsticeLocationLibrary::ProjectPointToNavigation(const UObject* WorldContextObject, FVector& ProjectedPoint, FVector Point, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector& QueryExtent) {
    return false;
}

bool USolsticeLocationLibrary::IsLocationValidNavigation(const UObject* WorldContextObject, FVector& TestLocation, AActor* TestActor, TSubclassOf<UNavigationQueryFilter> InQueryFilter) {
    return false;
}

bool USolsticeLocationLibrary::IsLocationInfoBoundaryFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return false;
}

bool USolsticeLocationLibrary::HasPathToLocation(ASolsticeCharacterBase* Character, FVector Destination, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return false;
}

bool USolsticeLocationLibrary::HasLocationInfoBeenEnteredFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return false;
}

FTransform USolsticeLocationLibrary::GetTransformFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return FTransform{};
}

AActor* USolsticeLocationLibrary::GetTrackedActorFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return NULL;
}

FVector USolsticeLocationLibrary::GetScaleFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return FVector{};
}

FRotator USolsticeLocationLibrary::GetRotationFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return FRotator{};
}

bool USolsticeLocationLibrary::GetRandomLocationInNavigableRadiusExec(UObject* WorldContextObject, const FVector InOrigin, FVector& OutRandomLocation, float InRadius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return false;
}

TArray<FVector> USolsticeLocationLibrary::GetPointsInWorldSpace(const FLocationInfo& InLocationInfo) {
    return TArray<FVector>();
}

FVector USolsticeLocationLibrary::GetMarkerBoxScaleFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return FVector{};
}

FRotator USolsticeLocationLibrary::GetMarkerBoxRotationFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return FRotator{};
}

FVector USolsticeLocationLibrary::GetMarkerBoxCenterFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return FVector{};
}

FVector USolsticeLocationLibrary::GetLocationFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return FVector{};
}

TArray<FVector> USolsticeLocationLibrary::GetLocalSpaceMarkerPointsFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return TArray<FVector>();
}

FGameplayTagContainer USolsticeLocationLibrary::GetGameplayTagsFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return FGameplayTagContainer{};
}

FVector USolsticeLocationLibrary::GetExtentFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return FVector{};
}

float USolsticeLocationLibrary::GetDistanceToLocalPawnSquared(const UObject* WorldContextObject, FVector Location) {
    return 0.0f;
}

FVector USolsticeLocationLibrary::GetDefaultQueryExtent(const UObject* WorldContextObject) {
    return FVector{};
}

TArray<FName> USolsticeLocationLibrary::GetActorTagsFromLocationInfo(const FLocationInfo& InLocationInfo) {
    return TArray<FName>();
}

APawn* USolsticeLocationLibrary::FindClosestPlayerToLocation(const UObject* WorldContextObject, FLocationInfo LocationInfo, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance, bool bIncludeDead) {
    return NULL;
}


