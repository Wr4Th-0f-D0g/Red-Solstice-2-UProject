#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "LocationInfo.h"
#include "Templates/SubclassOf.h"
#include "SolsticeLocationLibrary.generated.h"

class AActor;
class ANavigationData;
class APawn;
class ASolsticeCharacterBase;
class UNavigationQueryFilter;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeLocationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USolsticeLocationLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool TestPath(const UObject* WorldContextObject, FVector Start, FVector Finish, AActor* ReferenceActor, bool bUseDefaultMesh, TSubclassOf<UNavigationQueryFilter> Filter);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FLocationInfo> SortLocationInfoCopy(const TArray<FLocationInfo>& InLocationInfo, const FVector& Location, bool bAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SortLocationInfo(UPARAM(Ref) TArray<FLocationInfo>& InOutLocationInfo, const FVector& Location, bool bAscending);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ProjectPointToNavigation(const UObject* WorldContextObject, FVector& ProjectedPoint, FVector Point, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector& QueryExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocationValidNavigation(const UObject* WorldContextObject, UPARAM(Ref) FVector& TestLocation, AActor* TestActor, TSubclassOf<UNavigationQueryFilter> InQueryFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocationInfoBoundaryFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool HasPathToLocation(ASolsticeCharacterBase* Character, FVector Destination, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasLocationInfoBeenEnteredFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetTransformFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetTrackedActorFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetScaleFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetRotationFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetRandomLocationInNavigableRadiusExec(UObject* WorldContextObject, const FVector InOrigin, FVector& OutRandomLocation, float InRadius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetPointsInWorldSpace(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetMarkerBoxScaleFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetMarkerBoxRotationFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetMarkerBoxCenterFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetLocationFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetLocalSpaceMarkerPointsFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetGameplayTagsFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetExtentFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetDistanceToLocalPawnSquared(const UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetDefaultQueryExtent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetActorTagsFromLocationInfo(const FLocationInfo& InLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* FindClosestPlayerToLocation(const UObject* WorldContextObject, FLocationInfo LocationInfo, float& OutDistance, TArray<APawn*> PawnsToIgnore, bool bSquaredDistance, bool bIncludeDead);
    
};

