#pragma once
#include "CoreMinimal.h"
#include "SolsticeWeaponComponent.h"
#include "VehicleWeaponComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UVehicleWeaponComponent : public USolsticeWeaponComponent {
    GENERATED_BODY()
public:
    UVehicleWeaponComponent(const FObjectInitializer& ObjectInitializer);

};

