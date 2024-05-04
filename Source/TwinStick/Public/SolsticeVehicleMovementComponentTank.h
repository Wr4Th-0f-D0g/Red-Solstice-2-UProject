#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "WheeledVehicleMovementComponent.h"
#include "WheeledVehicleMovementComponent.h"
#include "ESolsticeVehicleDriveControlModelTank.h"
#include "TankReplicatedVehicleState.h"
#include "VehicleEngineDataTank.h"
#include "VehicleTransmissionDataTank.h"
#include "SolsticeVehicleMovementComponentTank.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USolsticeVehicleMovementComponentTank : public UWheeledVehicleMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTankReplicatedVehicleState TankReplicatedVehicleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBreakpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleRPM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESolsticeVehicleDriveControlModelTank::Type> DriveModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleEngineDataTank EngineSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleTransmissionDataTank TransmissionSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeftSprocketWheelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RightSprocketWheelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SteeringCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInPlaceSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve TrackSpeedDifferentialSteeringAngleMappingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeftThrustInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RightThrustInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BrakeLeftInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BrakeRightInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RawLeftThrustInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RawRightThrustInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RawBrakeRightInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RawBrakeLeftInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleBrakeInputLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleBrakeInputRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoLeftBrakeInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoRightBrakeInput;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputRate LeftThrustChangeRate;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputRate RightThrustChangeRate;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputRate BrakeLeftRate;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputRate BrakeRightRate;
    
    USolsticeVehicleMovementComponentTank(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSteeringDirection(FVector2D desiredSteeringDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetRightThrustInput(float newRightThrust);
    
    UFUNCTION(BlueprintCallable)
    void SetRightBrakeInput(float newBrakeRight);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftThrustInput(float newLeftThrust);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftBrakeInput(float newBrakeLeft);
    
    UFUNCTION(BlueprintCallable)
    void SetDriveModel(TEnumAsByte<ESolsticeVehicleDriveControlModelTank::Type> ControlModel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateTankState(float InThrustLeftInput, float InThrustRightInput, float InBrakeRightInput, float InBrakeLeftInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWheelRotationSpeed(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWheelRotationAngle(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrottleInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardSpeedMPH() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardSpeedKMH() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ESolsticeVehicleDriveControlModelTank::Type> GetDriveModel() const;
    
};

