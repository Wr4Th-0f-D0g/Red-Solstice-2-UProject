#pragma once
#include "CoreMinimal.h"
#include "SolsticeModifiedVehicleData.h"
#include "SavedSolsticeModifiedVehicleData.generated.h"

USTRUCT(BlueprintType)
struct FSavedSolsticeModifiedVehicleData : public FSolsticeModifiedVehicleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SavedName;
    
    TWINSTICK_API FSavedSolsticeModifiedVehicleData();
};

