#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "ELocationDistance.h"
#include "EMissionLocationSelectionMode.h"
#include "LocationInfo.h"
#include "MissionLocation.h"
#include "MissionSystemLibrary.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UMissionSystemLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMissionSystemLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSavedObjectiveNameFromMissionLocation(const FMissionLocation& InMissionLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSavedMissionLocationObjectiveNameFromMissionLocation(const FMissionLocation& InMissionLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSavedMissionLocationObjectiveIndexFromMissionInfo(const FMissionLocation& InMissionLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetSavedMissionLocationNavLocationFromMissionInfo(const FMissionLocation& InMissionLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLocationInfo GetSavedMissionLocationInfoFromMissionInfo(const FMissionLocation& InMissionLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetPossibleGameplayTagsFromMissionLocation(const FMissionLocation& InMissionLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELocationDistance GetLocationRangeFromMissionLocation(const FMissionLocation& InMissionLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMissionLocationSelectionMode GetLocationModeFromMissionLocation(const FMissionLocation& InMissionLocation);
    
    UFUNCTION(BlueprintCallable)
    static void AdjustLocationCountFromSavedMission(UPARAM(Ref) FMissionLocation& InMissionLocation, int32 InLocationCount);
    
    UFUNCTION(BlueprintCallable)
    static void AddNumberToSavedMissionLocationName(UPARAM(Ref) FMissionLocation& InMissionLocation, int32 LocationNumber);
    
};

