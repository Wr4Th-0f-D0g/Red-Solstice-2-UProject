#include "DcxVehicleWheelsComponent.h"
#include "Net/UnrealNetwork.h"

UDcxVehicleWheelsComponent::UDcxVehicleWheelsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChassisMass = 1500.00f;
    this->bUseAvoidance = false;
    this->AvoidanceWeight = 0.50f;
    this->AvoidanceUID = 0;
    this->ThresholdLongitudinalSpeed = 5.00f;
    this->LowForwardSpeedSubStepCount = 3;
    this->HighForwardSpeedSubStepCount = 1;
    this->DragCoefficient = 0.30f;
    this->DragArea = 20000.00f;
    this->AvoidanceRadius = 400.00f;
    this->AvoidanceHeight = 200.00f;
    this->AvoidanceConsiderationRadius = 2000.00f;
    this->AvoidanceThrottleStep = 0.25f;
    this->AvoidanceBrakeStep = 0.25f;
    this->AvoidanceSteerStep = 0.50f;
    this->bRecreateRequired = false;
    this->RawInput = NULL;
    this->bWasAvoidanceUpdated = false;
    this->AvoidanceLockTimer = 0.00f;
}

void UDcxVehicleWheelsComponent::SetWheelOffset(int32 WheelIndex, FVector Offset) {
}

void UDcxVehicleWheelsComponent::SetWheelData(int32 WheelIndex, FDcxVehicleWheelData NewWheelData) {
}

void UDcxVehicleWheelsComponent::SetTire(int32 WheelId, UDcxVehicleTire* NewTire) {
}

void UDcxVehicleWheelsComponent::SetSuspensionData(int32 WheelIndex, FDcxVehicleSuspensionData NewSuspensionData) {
}

void UDcxVehicleWheelsComponent::SetGroupsToIgnore(const FNavAvoidanceMask& Mask) {
}

void UDcxVehicleWheelsComponent::SetGroupsToAvoid(const FNavAvoidanceMask& Mask) {
}

void UDcxVehicleWheelsComponent::SetChassisMass(float Mass) {
}

void UDcxVehicleWheelsComponent::SetAvoidanceGroup(const FNavAvoidanceMask& Mask) {
}

void UDcxVehicleWheelsComponent::SetRVOAvoidanceUID(int32 UID)
{
    
}

int32 UDcxVehicleWheelsComponent::GetRVOAvoidanceUID()
{
    return 0;
}

void UDcxVehicleWheelsComponent::SetRVOAvoidanceWeight(float Weight)
{
}

float UDcxVehicleWheelsComponent::GetRVOAvoidanceWeight()
{
    return 0;
}

FVector UDcxVehicleWheelsComponent::GetRVOAvoidanceOrigin()
{
    return {};
}

float UDcxVehicleWheelsComponent::GetRVOAvoidanceRadius()
{
    return 0;
}

float UDcxVehicleWheelsComponent::GetRVOAvoidanceHeight()
{
    return 0;
}

float UDcxVehicleWheelsComponent::GetRVOAvoidanceConsiderationRadius()
{
    return 0;
}

FVector UDcxVehicleWheelsComponent::GetVelocityForRVOConsideration()
{
    return {};
}

void UDcxVehicleWheelsComponent::SetAvoidanceGroupMask(int32 GroupFlags)
{
}

int32 UDcxVehicleWheelsComponent::GetAvoidanceGroupMask()
{
    return 0;
}

void UDcxVehicleWheelsComponent::SetGroupsToAvoidMask(int32 GroupFlags)
{
}

int32 UDcxVehicleWheelsComponent::GetGroupsToAvoidMask()
{
    return 0;
}

void UDcxVehicleWheelsComponent::SetGroupsToIgnoreMask(int32 GroupFlags)
{
}

int32 UDcxVehicleWheelsComponent::GetGroupsToIgnoreMask()
{
    return 0;
}

void UDcxVehicleWheelsComponent::ServerUpdateState_Implementation(const FDcxAnalogControlArray& AnalogControls, const FDcxGear& CurrentGear, const FDcxGear& TargetGear) {
}
bool UDcxVehicleWheelsComponent::ServerUpdateState_Validate(const FDcxAnalogControlArray& AnalogControls, const FDcxGear& CurrentGear, const FDcxGear& TargetGear) {
    return true;
}

bool UDcxVehicleWheelsComponent::IsWheelDisabled(int32 WheelIndex) const {
    return false;
}

bool UDcxVehicleWheelsComponent::GetWheelState(int32 WheelIndex, FDcxVehicleWheelState& WheelState) const {
    return false;
}

float UDcxVehicleWheelsComponent::GetWheelRotationSpeed(int32 WheelIndex) const {
    return 0.0f;
}

float UDcxVehicleWheelsComponent::GetWheelRotationAngle(int32 WheelIndex) const {
    return 0.0f;
}

FVector UDcxVehicleWheelsComponent::GetWheelOffset(int32 WheelIndex) const {
    return FVector{};
}

FDcxVehicleWheelData UDcxVehicleWheelsComponent::GetWheelData(int32 WheelIndex) const {
    return FDcxVehicleWheelData{};
}

UDcxVehicleTire* UDcxVehicleWheelsComponent::GetTire(int32 WheelIndex) const {
    return NULL;
}

FDcxVehicleSuspensionData UDcxVehicleWheelsComponent::GetSuspensionData(int32 WheelIndex) const {
    return FDcxVehicleSuspensionData{};
}

UDcxVehicleWheelsRawInput* UDcxVehicleWheelsComponent::GetRawInput() const {
    return NULL;
}

int32 UDcxVehicleWheelsComponent::GetNumWheels() const {
    return 0;
}

float UDcxVehicleWheelsComponent::GetForwardSpeed() const {
    return 0.0f;
}

float UDcxVehicleWheelsComponent::GetChassisMass() const {
    return 0.0f;
}

FName UDcxVehicleWheelsComponent::GetBoneName(int32 WheelIndex) const {
    return NAME_None;
}

float UDcxVehicleWheelsComponent::GetAnalogControl(uint8 Control) const {
    return 0.0f;
}

void UDcxVehicleWheelsComponent::EnableWheel(int32 WheelIndex) {
}

void UDcxVehicleWheelsComponent::EnableAvoidance(bool bEnabled) {
}

void UDcxVehicleWheelsComponent::DisableWheel(int32 WheelIndex) {
}

void UDcxVehicleWheelsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDcxVehicleWheelsComponent, ReplicatedState);
}


