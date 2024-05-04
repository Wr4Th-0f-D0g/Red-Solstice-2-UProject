#pragma once
#include "CoreMinimal.h"
#include "SavedVehiclesList.h"
#include "SolsticeSavedVehicles.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeSavedVehicles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedVehiclesList> SaveData;
    
    TWINSTICK_API FSolsticeSavedVehicles();
};

