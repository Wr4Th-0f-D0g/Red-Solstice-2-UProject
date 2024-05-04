#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SolsticeVehicle.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticeVehicle : public APawn {
    GENERATED_BODY()
public:
    ASolsticeVehicle(const FObjectInitializer& ObjectInitializer);

};

