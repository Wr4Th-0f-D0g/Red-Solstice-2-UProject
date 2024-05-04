#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MarsTime.h"
#include "SolsticeSaveInterface.h"
#include "Templates/SubclassOf.h"
#include "StrategyStormManager.generated.h"

class ARegion;
class AStormActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UStrategyStormManager : public UActorComponent, public ISolsticeSaveInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SeasonalIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SOLAR_Damage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARegion*> Regions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStormActor*> ActiveStorms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARegion* TargetRegionTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensityTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStormActor> StormActorClass;
    
    UStrategyStormManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnStormEditor();
    
    UFUNCTION(BlueprintCallable)
    AStormActor* SpawnStorm(ARegion* InRegion, float InIntensity);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignDayChanged(const FMarsTime& CampaignTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeasonalStormIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGlobalStormIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnvironmentalDamageModifier() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSkiesEditor();
    

    // Fix for true pure virtual functions not being implemented
};

