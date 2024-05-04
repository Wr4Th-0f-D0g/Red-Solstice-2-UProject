#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "WheeledVehicleMovementComponent.h"
#include "VehicleEngineDataNW.h"
#include "VehicleTransmissionDataNW.h"
#include "SolsticeVehicleMovementComponentNW.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USolsticeVehicleMovementComponentNW : public UWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleEngineDataNW EngineSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleTransmissionDataNW TransmissionSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SteeringCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleRPM;
    
    USolsticeVehicleMovementComponentNW(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDrivenWheel(int32 WheelIndex, bool bIsDriven);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrivenWheel(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrottleInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardSpeedMPH() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardSpeedKMH() const;
    
};

