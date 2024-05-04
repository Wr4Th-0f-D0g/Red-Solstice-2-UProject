#pragma once
#include "CoreMinimal.h"
#include "EnergyComponent.h"
#include "VehilceFuelEnergyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UVehilceFuelEnergyComponent : public UEnergyComponent {
    GENERATED_BODY()
public:
    UVehilceFuelEnergyComponent(const FObjectInitializer& ObjectInitializer);

};

