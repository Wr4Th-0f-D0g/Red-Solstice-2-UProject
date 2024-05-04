#pragma once
#include "CoreMinimal.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "SolsticeVehicleMovementComponent4W.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USolsticeVehicleMovementComponent4W : public UWheeledVehicleMovementComponent4W {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleRPM;
    
    USolsticeVehicleMovementComponent4W(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrottleInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardSpeedMPH() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardSpeedKMH() const;
    
};

