#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ColonyDescription.h"
#include "ColonyInfo.h"
#include "MissionEffect.h"
#include "MissionEffectData.h"
#include "TerraformerInfo.h"
#include "ColonyData.generated.h"

class AColony;
class ARegion;
class UDataTable;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UColonyData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ColonyDescriptionsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfestedModifierPerRegionPointOfInfestation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CasualtyModifierPerInfestedKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColonyInfo> Colonies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionEffectData> ColonyBonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTerraformerInfo> Terraformers;
    
    UColonyData();

    UFUNCTION(BlueprintCallable)
    void GetSolarCasualtiesForRegion(ARegion* InRegion, int32 InDamage, int32& OutInfestedCasualties, int32& OutCivilianCasualties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetRegionFromColonyInfo(FColonyInfo InInfo, UObject* ContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegionCasualtyCount(ARegion* InRegion, int32 InInfestationDamage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPopulationCount(int32 InPopulation, int32 InInfestationCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfestedCount(int32 InPopulation, int32 InInfestationCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalPopulationCount(UObject* ContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalInfestedCount(UObject* ContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColonyInfestationLevel(FColonyInfo InColonyInfo, UObject* ContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColonyDescription GetColonyDescriptionForRegionByName(const FString& InRegionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColonyDescription GetColonyDescriptionForRegion(ARegion* InRegion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColonyDescription GetColonyDescriptionByName(const FString& InColonyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColonyDescription GetColonyDescription(AColony* InColony) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColonyInfo GetColonyDataForRegionByName(const FString& InRegionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColonyInfo GetColonyDataForRegion(ARegion* InRegion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FColonyInfo, FMissionEffect> GetColonyBonuses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCasualtyCount(int32 InPopulation, int32 InDamage) const;
    
};

