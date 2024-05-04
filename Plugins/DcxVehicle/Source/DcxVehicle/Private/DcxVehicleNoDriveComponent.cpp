#include "DcxVehicleNoDriveComponent.h"
#include "DcxVehicleNoDriveRawInput.h"

UDcxVehicleNoDriveComponent::UDcxVehicleNoDriveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RawInput = CreateDefaultSubobject<UDcxVehicleNoDriveRawInput>(TEXT("RawInput"));
    this->SmoothAnalogControls.AddDefaulted(3);
    this->bUseRawInput = true;
    this->MaxDriveTorque = 400.00f;
}

void UDcxVehicleNoDriveComponent::SetSteerAngle(int32 WheelIndex, float SteerAngle) {
}

void UDcxVehicleNoDriveComponent::SetDriveTorque(int32 WheelIndex, float DriveTorque) {
}

void UDcxVehicleNoDriveComponent::SetBrakeTorque(int32 WheelIndex, float BrakeTorque) {
}

float UDcxVehicleNoDriveComponent::GetSteerAngle(int32 WheelIndex) const {
    return 0.0f;
}

UDcxVehicleNoDriveRawInput* UDcxVehicleNoDriveComponent::GetRawInputND() const {
    return NULL;
}

float UDcxVehicleNoDriveComponent::GetDriveTorque(int32 WheelIndex) const {
    return 0.0f;
}

float UDcxVehicleNoDriveComponent::GetBrakeTorque(int32 WheelIndex) const {
    return 0.0f;
}



void UDcxVehicleNoDriveComponent::SetRVOAvoidanceUID(int32 UID)
{
    Super::SetRVOAvoidanceUID(UID);
}

int32 UDcxVehicleNoDriveComponent::GetRVOAvoidanceUID()
{
    return Super::GetRVOAvoidanceUID();
}

void UDcxVehicleNoDriveComponent::SetRVOAvoidanceWeight(float Weight)
{
    Super::SetRVOAvoidanceWeight(Weight);
}

float UDcxVehicleNoDriveComponent::GetRVOAvoidanceWeight()
{
    return Super::GetRVOAvoidanceWeight();
}

FVector UDcxVehicleNoDriveComponent::GetRVOAvoidanceOrigin()
{
    return Super::GetRVOAvoidanceOrigin();
}

float UDcxVehicleNoDriveComponent::GetRVOAvoidanceRadius()
{
    return Super::GetRVOAvoidanceRadius();
}

float UDcxVehicleNoDriveComponent::GetRVOAvoidanceHeight()
{
    return Super::GetRVOAvoidanceHeight();
}

float UDcxVehicleNoDriveComponent::GetRVOAvoidanceConsiderationRadius()
{
    return Super::GetRVOAvoidanceConsiderationRadius();
}

FVector UDcxVehicleNoDriveComponent::GetVelocityForRVOConsideration()
{
    return Super::GetVelocityForRVOConsideration();
}

void UDcxVehicleNoDriveComponent::SetAvoidanceGroupMask(int32 GroupFlags)
{
    Super::SetAvoidanceGroupMask(GroupFlags);
}

int32 UDcxVehicleNoDriveComponent::GetAvoidanceGroupMask()
{
    return Super::GetAvoidanceGroupMask();
}

void UDcxVehicleNoDriveComponent::SetGroupsToAvoidMask(int32 GroupFlags)
{
    Super::SetGroupsToAvoidMask(GroupFlags);
}

int32 UDcxVehicleNoDriveComponent::GetGroupsToAvoidMask()
{
    return Super::GetGroupsToAvoidMask();
}

void UDcxVehicleNoDriveComponent::SetGroupsToIgnoreMask(int32 GroupFlags)
{
    Super::SetGroupsToIgnoreMask(GroupFlags);
}

int32 UDcxVehicleNoDriveComponent::GetGroupsToIgnoreMask()
{
    return Super::GetGroupsToIgnoreMask();
}

