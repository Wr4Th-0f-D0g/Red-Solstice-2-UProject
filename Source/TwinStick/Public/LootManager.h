#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EAirSupportLevel.h"
#include "ELockerType.h"
#include "ELootTableElement.h"
#include "ESolsticeDebugTraceType.h"
#include "GeneratedLootItem.h"
#include "LootInformation.h"
#include "Templates/SubclassOf.h"
#include "LootManager.generated.h"

class AInventoryPickup;
class ALocker;
class AMissionSetupActor;
class ULocationManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API ULootManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LootInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAirSupportLevel, float> AirSupportLevelLootIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasicWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AverageWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QualityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BasicSpawnedAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AverageSpawnedAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QualitySpawnedAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BasicCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AverageCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QualityCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AInventoryPickup>> LoadedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AInventoryPickup>, float> BasicLootMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AInventoryPickup>, float> AverageLootMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AInventoryPickup>, float> QualityLootMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnLootDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugLootSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeDebugTraceType LineTraceDebugType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LineTraceColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LineTraceColorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineTraceDebugTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugBoxColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugBoxPersistant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugBoxLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugBoxThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PickupSpawnLocationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutsideBuildingSpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AInventoryPickup>, float> ChosenAsyncLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AInventoryPickup>, float> RandomLootMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocationManager* LocationManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AInventoryPickup> VehicleBatteryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALocker*> RegisteredLockers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInventoryPickup*> RegisteredPickups;
    
public:
    ULootManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TryGetRollsForPrefabActor(const FGameplayTag& PrefabTag, FLootInformation& FoundLootInfo);
    
    UFUNCTION(BlueprintCallable)
    AInventoryPickup* SpawnPickupItem(TSubclassOf<AInventoryPickup> Pickup, FVector SpawnLocation);
    
    UFUNCTION(BlueprintCallable)
    void PopulateLockers(AMissionSetupActor* MissionSetupActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDestroyPickup(AInventoryPickup* InventoryPickup, bool bExploded);
    
    UFUNCTION(BlueprintCallable)
    void HandleLocationsMapped(ULocationManager* Sender);
    
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<AInventoryPickup> GetRandomItemTypeFromTable(FDataTableRowHandle InDataTableRow, ELootTableElement InTableElementToUse);
    
    UFUNCTION(BlueprintCallable)
    ELockerType GetLockerType();
    
    UFUNCTION(BlueprintCallable)
    bool GenerateLootArrayDataTable(FDataTableRowHandle DataTableRowHandle, ELootTableElement Element, TArray<FGeneratedLootItem>& OutLootArray);
    
protected:
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<AInventoryPickup> FillLockerInventory(ELockerType LType);
    
};

