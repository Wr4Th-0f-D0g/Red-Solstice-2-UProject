#include "DcxVehicleDriveComponent.h"

UDcxVehicleDriveComponent::UDcxVehicleDriveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoReverse = false;
    this->WrongDirectionThreshold = 3.60f;
    this->bAutoBrake = false;
    this->StopThreshold = 1.80f;
}

void UDcxVehicleDriveComponent::SetTargetGear(int32 NewGear, bool bImmediate) {
}

void UDcxVehicleDriveComponent::SetGearboxType(TEnumAsByte<EDcxVehicleGearbox::Type> NewGearboxType) {
}

void UDcxVehicleDriveComponent::SetGearboxData(FDcxVehicleGearboxData NewGearboxData) {
}

void UDcxVehicleDriveComponent::SetEngineRotationSpeed(float RPM) {
}

void UDcxVehicleDriveComponent::SetEngineData(FDcxVehicleEngineData NewEngineData) {
}

void UDcxVehicleDriveComponent::SetClutchData(FDcxVehicleClutchData NewClutchData) {
}

int32 UDcxVehicleDriveComponent::GetTargetGear() const {
    return 0;
}

TEnumAsByte<EDcxVehicleGearbox::Type> UDcxVehicleDriveComponent::GetGearboxType() const {
    return EDcxVehicleGearbox::Automatic;
}

FDcxVehicleGearboxData UDcxVehicleDriveComponent::GetGearboxData() const {
    return FDcxVehicleGearboxData{};
}

float UDcxVehicleDriveComponent::GetEngineRotationSpeed() const {
    return 0.0f;
}

FDcxVehicleEngineData UDcxVehicleDriveComponent::GetEngineData() const {
    return FDcxVehicleEngineData{};
}

int32 UDcxVehicleDriveComponent::GetCurrentGear() const {
    return 0;
}

FDcxVehicleClutchData UDcxVehicleDriveComponent::GetClutchData() const {
    return FDcxVehicleClutchData{};
}

void UDcxVehicleDriveComponent::SetRVOAvoidanceUID(int32 UID)
{
    Super::SetRVOAvoidanceUID(UID);
}

int32 UDcxVehicleDriveComponent::GetRVOAvoidanceUID()
{
    return Super::GetRVOAvoidanceUID();
}

void UDcxVehicleDriveComponent::SetRVOAvoidanceWeight(float Weight)
{
    Super::SetRVOAvoidanceWeight(Weight);
}

float UDcxVehicleDriveComponent::GetRVOAvoidanceWeight()
{
    return Super::GetRVOAvoidanceWeight();
}

FVector UDcxVehicleDriveComponent::GetRVOAvoidanceOrigin()
{
    return Super::GetRVOAvoidanceOrigin();
}

float UDcxVehicleDriveComponent::GetRVOAvoidanceRadius()
{
    return Super::GetRVOAvoidanceRadius();
}

float UDcxVehicleDriveComponent::GetRVOAvoidanceHeight()
{
    return Super::GetRVOAvoidanceHeight();
}

float UDcxVehicleDriveComponent::GetRVOAvoidanceConsiderationRadius()
{
    return Super::GetRVOAvoidanceConsiderationRadius();
}

FVector UDcxVehicleDriveComponent::GetVelocityForRVOConsideration()
{
    return Super::GetVelocityForRVOConsideration();
}

void UDcxVehicleDriveComponent::SetAvoidanceGroupMask(int32 GroupFlags)
{
    Super::SetAvoidanceGroupMask(GroupFlags);
}

int32 UDcxVehicleDriveComponent::GetAvoidanceGroupMask()
{
    return Super::GetAvoidanceGroupMask();
}

void UDcxVehicleDriveComponent::SetGroupsToAvoidMask(int32 GroupFlags)
{
    Super::SetGroupsToAvoidMask(GroupFlags);
}

int32 UDcxVehicleDriveComponent::GetGroupsToAvoidMask()
{
    return Super::GetGroupsToAvoidMask();
}

void UDcxVehicleDriveComponent::SetGroupsToIgnoreMask(int32 GroupFlags)
{
    Super::SetGroupsToIgnoreMask(GroupFlags);
}

int32 UDcxVehicleDriveComponent::GetGroupsToIgnoreMask()
{
    return Super::GetGroupsToIgnoreMask();
}

