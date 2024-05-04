#pragma once
#include "CoreMinimal.h"
#include "VehicleSkill.h"
#include "VehicleSeatSwapSkill.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UVehicleSeatSwapSkill : public UVehicleSkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 AssignedSeatIndex;
    
    UVehicleSeatSwapSkill(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

