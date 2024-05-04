#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SavedSolsticeModifiedVehicleData.h"
#include "SavedVehiclesList.generated.h"

USTRUCT(BlueprintType)
struct FSavedVehiclesList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VehicleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedSolsticeModifiedVehicleData> Vehicles;
    
    TWINSTICK_API FSavedVehiclesList();
};

