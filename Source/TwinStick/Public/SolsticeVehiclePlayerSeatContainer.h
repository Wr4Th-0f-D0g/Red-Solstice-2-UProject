#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SolsticeVehiclePlayerSeat.h"
#include "SolsticeVehiclePlayerSeatContainer.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeVehiclePlayerSeatContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeVehiclePlayerSeat> Items;
    
    TWINSTICK_API FSolsticeVehiclePlayerSeatContainer();
};

