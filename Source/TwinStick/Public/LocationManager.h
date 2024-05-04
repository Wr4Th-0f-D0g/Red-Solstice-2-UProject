#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ELocationDistance.h"
#include "LocationInfo.h"
#include "LocationsMappedDelegate.h"
#include "Templates/SubclassOf.h"
#include "LocationManager.generated.h"

class AAbilityActorBase;
class AActor;
class ADoorBase;
class ADynamicActorBase;
class AHunterDropdownVent;
class ALight;
class AMinimapActorBase;
class AMissionMarkerActorBase;
class APowerConsumer;
class APowerRelay;
class ASafeZoneBase;
class AZoneActor;
class UNavigationQueryFilter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API ULocationManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocationsMapped OnLocationsMapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayGrabbingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADoorBase*> LevelInternalDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APowerConsumer*> LevelDoorTerminals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADynamicActorBase*> LevelTerminalUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APowerConsumer*> LevelLightTerminals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APowerRelay*> LevelPowerRelays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADoorBase*> LevelDoorActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAbilityActorBase*> AbilityActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADynamicActorBase*> LevelDynamicActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALight*> LevelLightActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SecondaryHostLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PrimaryHostLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> LocationNavFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AZoneActor*> ZoneActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AZoneActor*> ActiveZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocationInfo> Locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLocationInfo> BeginPlayLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocationInfo> SafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocationInfo> PowerRelays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocationInfo> Terminals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMinimapActorBase> MinimapActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMissionMarkerActorBase> MarkerActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASafeZoneBase*> SafeZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ASafeZoneBase* ChosenSafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHunterDropdownVent*> HunterDropdownVents;
    
    ULocationManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static void RemoveLocationByActor(AActor* InTrackedActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSafeZone(TArray<AActor*> SafeZoneSpawnPoints);
    
    UFUNCTION(BlueprintCallable)
    void PopulateLocationsArray();
    
    UFUNCTION(BlueprintCallable)
    static void MakeLocationFromActor(AActor* InTrackedActor, FLocationInfo& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInsideLocation(const FLocationInfo& InLocationInfo, AActor* TestActor) const;
    
    UFUNCTION(BlueprintCallable)
    void GetZoneActorsWithPawns(TMap<AZoneActor*, int32>& OutZoneActors);
    
    UFUNCTION(BlueprintCallable)
    void GetZoneActors(TMap<AZoneActor*, int32>& OutZoneActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTerminalLocations(TArray<FLocationInfo>& TerminalLocations);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSafeZoneLocations(TArray<FLocationInfo>& SafeZoneLocations);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPowerRelayLocations(TArray<FLocationInfo>& PowerRelayLocations);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfPawnsInZone(AZoneActor* ZoneActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocationsByTags(const FGameplayTagContainer& LocationGameplayTags, EGameplayContainerMatchType MatchType, FName LocationTag, TArray<FLocationInfo>& OutLocations, FVector LocationForDistance, float MinimumRange, ELocationDistance DistanceToClosestPawn, bool bWantDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocationsByGameplayTags(FGameplayTagContainer LocationTags, EGameplayContainerMatchType MatchType, TArray<FLocationInfo>& OutLocations, FVector LocationForDistance, float MinimumRange, ELocationDistance DistanceToClosestPawn, bool bWantDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocationsByActorTags(const TArray<FName>& LocationTags, TArray<FLocationInfo>& OutLocations, FVector LocationForDistance, float MinimumRange, ELocationDistance DistanceToClosestPawn, bool bWantDisabled);
    
    UFUNCTION(BlueprintCallable)
    void GetLocationInfosFromZoneWithPawns(AZoneActor* ZoneActor, TMap<FLocationInfo, int32>& OutLocationInfo);
    
    UFUNCTION(BlueprintCallable)
    TArray<FLocationInfo> GetLocationInfosFromZonesWithPawnsByTag(const TArray<AZoneActor*>& Zones, const FGameplayTag& LocationTag, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    TArray<FLocationInfo> GetLocationInfosFromZonesByTagByDistance(const TArray<AZoneActor*>& Zones, const FGameplayTag& LocationTag, FName Tag, float MinDistance, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    TArray<FLocationInfo> GetLocationInfosFromZonesByTag(const TArray<AZoneActor*>& Zones, const FGameplayTag& LocationTag, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    TArray<FLocationInfo> GetLocationInfosFromZoneByTag(AZoneActor* Zone, const FGameplayTag& LocationTag, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    TArray<FLocationInfo> GetLocationInfoFromZoneWithPawnsByTag(AZoneActor* Zone, const FGameplayTag& LocationTag, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    bool GetLocationCloseToPointWithGameplayTag(const FVector& Location, const FGameplayTagContainer& LocationTags, FLocationInfo& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ADynamicActorBase*> GetDynamicActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ADoorBase*> GetDoorsSortedByDistanceToLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ADoorBase*> GetDoors() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FLocationInfo> GetClosestLocationToPawnsInAllZones(const FGameplayTagContainer& IgnoredLocGameplayTags, const TArray<FName>& IgnoredLocTags);
    
    UFUNCTION(BlueprintCallable)
    TArray<FLocationInfo> GetAllLocationsWithPawnsInAllZones(const FGameplayTagContainer& IgnoredLocGameplayTags, const TArray<FName>& IgnoredLocTags);
    
    UFUNCTION(BlueprintCallable)
    void ChooseSafeZone();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void CheckInSafeZone(ASafeZoneBase* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreLocationsMapped() const;
    
    UFUNCTION(BlueprintCallable)
    static void AddLocationFromActor(AActor* InTrackedActor, FGameplayTagContainer InLocationGameplayTags, TArray<FName> InLocationTags, FLocationInfo& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    static void AddBeginPlayLocationFromActor(AActor* InTrackedActor, FGameplayTagContainer InLocationGameplayTags, TArray<FName> InLocationTags, FLocationInfo& OutLocation);
    
};

