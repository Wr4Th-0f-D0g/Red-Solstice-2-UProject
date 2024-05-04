#include "SolsticeVehicleMovementComponentTank.h"
#include "Net/UnrealNetwork.h"

USolsticeVehicleMovementComponentTank::USolsticeVehicleMovementComponentTank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WheelSetups.AddDefaulted(12);
    this->bBreakpoint = false;
    this->IdleRPM = 500.00f;
    this->DriveModel = ESolsticeVehicleDriveControlModelTank::Standard;
    this->LeftSprocketWheelIndex = 0;
    this->RightSprocketWheelIndex = 1;
    this->TurnInPlaceSpeedThreshold = 1500.00f;
    this->LeftThrustInput = 0.00f;
    this->RightThrustInput = 0.00f;
    this->BrakeLeftInput = 0.00f;
    this->BrakeRightInput = 0.00f;
    this->RawLeftThrustInput = 0.00f;
    this->RawRightThrustInput = 0.00f;
    this->RawBrakeRightInput = 0.00f;
    this->RawBrakeLeftInput = 0.00f;
    this->IdleBrakeInputLeft = 0.00f;
    this->IdleBrakeInputRight = 0.00f;
    this->AutoLeftBrakeInput = 1.00f;
    this->AutoRightBrakeInput = 1.00f;
}

void USolsticeVehicleMovementComponentTank::SetSteeringDirection(FVector2D desiredSteeringDirection) {
}

void USolsticeVehicleMovementComponentTank::SetRightThrustInput(float newRightThrust) {
}

void USolsticeVehicleMovementComponentTank::SetRightBrakeInput(float newBrakeRight) {
}

void USolsticeVehicleMovementComponentTank::SetLeftThrustInput(float newLeftThrust) {
}

void USolsticeVehicleMovementComponentTank::SetLeftBrakeInput(float newBrakeLeft) {
}

void USolsticeVehicleMovementComponentTank::SetDriveModel(TEnumAsByte<ESolsticeVehicleDriveControlModelTank::Type> ControlModel) {
}

void USolsticeVehicleMovementComponentTank::ServerUpdateTankState_Implementation(float InThrustLeftInput, float InThrustRightInput, float InBrakeRightInput, float InBrakeLeftInput) {
}

float USolsticeVehicleMovementComponentTank::GetWheelRotationSpeed(int32 WheelIndex) const {
    return 0.0f;
}

float USolsticeVehicleMovementComponentTank::GetWheelRotationAngle(int32 WheelIndex) const {
    return 0.0f;
}

float USolsticeVehicleMovementComponentTank::GetThrottleInput() const {
    return 0.0f;
}

float USolsticeVehicleMovementComponentTank::GetForwardSpeedMPH() const {
    return 0.0f;
}

float USolsticeVehicleMovementComponentTank::GetForwardSpeedKMH() const {
    return 0.0f;
}

TEnumAsByte<ESolsticeVehicleDriveControlModelTank::Type> USolsticeVehicleMovementComponentTank::GetDriveModel() const {
    return ESolsticeVehicleDriveControlModelTank::Standard;
}

void USolsticeVehicleMovementComponentTank::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USolsticeVehicleMovementComponentTank, TankReplicatedVehicleState);
}


