#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStrategyMissionResult.h"
#include "MissionDeploymentObject.generated.h"

class AStrategyMission;

UCLASS(Blueprintable)
class TWINSTICK_API UMissionDeploymentObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyMission> OwningMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerGameDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerInfestationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerStormLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerGameMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForGoodRegionIntelLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForExcellentRegionIntelLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerSquadRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerColonyBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerSpecialistItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerResearchedTech;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SquadRatingForHundredPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerHordeArrivalStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerArtillerySupportStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerAirSupportStep;
    
    UMissionDeploymentObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTechRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStormRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSquadRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLogisticsRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntelRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInfestationRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameMonthRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameDifficultyRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDifficultyRating(int32 DeploymentPointsSpent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeploymentRating(int32 DeploymentPointsSpent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetColonyBonusRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStrategyMissionResult GetAutocompleteResult(int32 DeploymentPointsSpent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAutocompleteChance(int32 DeploymentPointSpent, int32 DifficultyRatingDelta) const;
    
};

