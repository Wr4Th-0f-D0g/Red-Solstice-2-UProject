#pragma once
#include "CoreMinimal.h"
#include "SolsticeVehicleData.h"
#include "SolsticeDeployedVehicleData.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeDeployedVehicleData : public FSolsticeVehicleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bDeployedAtStart;
    
    TWINSTICK_API FSolsticeDeployedVehicleData();
};

