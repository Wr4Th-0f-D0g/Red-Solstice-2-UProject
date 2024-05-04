#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAirSupportLevel.h"
#include "EArtillerySupportLevel.h"
#include "EHordeArrivalTime.h"
#include "ESecondaryMissionFrequency.h"
#include "ESkirmishGenerationType.h"
#include "EStrategyMissionGameType.h"
#include "StrategyMissionData.h"
#include "StrategyMissionSettings.generated.h"

USTRUCT(BlueprintType)
struct FStrategyMissionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESecondaryMissionFrequency SecondaryMissionFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EAirSupportLevel AirSupportLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHordeArrivalTime HordeArrivalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EArtillerySupportLevel ArtillerySupportLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EStrategyMissionGameType GameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESkirmishGenerationType GenerationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FStrategyMissionData MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SelectedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 InfestationLevel;
    
    TWINSTICK_API FStrategyMissionSettings();
};

