#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SolsticeVehicleWeaponComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USolsticeVehicleWeaponComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USolsticeVehicleWeaponComponent(const FObjectInitializer& ObjectInitializer);

};

