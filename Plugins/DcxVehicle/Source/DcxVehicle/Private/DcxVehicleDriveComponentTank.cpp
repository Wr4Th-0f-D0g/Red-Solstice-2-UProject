#include "DcxVehicleDriveComponentTank.h"
#include "DcxVehicleDriveRawInputTank.h"

UDcxVehicleDriveComponentTank::UDcxVehicleDriveComponentTank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WheelConfigurations.AddDefaulted(12);
    this->RawInput = CreateDefaultSubobject<UDcxVehicleDriveRawInputTank>(TEXT("RawInput"));
    this->SmoothAnalogControls.AddDefaulted(6);
    this->DriveModel = EDcxVehicleDriveControlModelTank::Standard;
}

void UDcxVehicleDriveComponentTank::SetDriveModel(TEnumAsByte<EDcxVehicleDriveControlModelTank::Type> ControlModel) {
}

UDcxVehicleDriveRawInputTank* UDcxVehicleDriveComponentTank::GetRawInputTank() const {
    return NULL;
}

TEnumAsByte<EDcxVehicleDriveControlModelTank::Type> UDcxVehicleDriveComponentTank::GetDriveModel() const {
    return EDcxVehicleDriveControlModelTank::Standard;
}



void UDcxVehicleDriveComponentTank::SetRVOAvoidanceUID(int32 UID)
{
    Super::SetRVOAvoidanceUID(UID);
}

int32 UDcxVehicleDriveComponentTank::GetRVOAvoidanceUID()
{
    return Super::GetRVOAvoidanceUID();
}

void UDcxVehicleDriveComponentTank::SetRVOAvoidanceWeight(float Weight)
{
    Super::SetRVOAvoidanceWeight(Weight);
}

float UDcxVehicleDriveComponentTank::GetRVOAvoidanceWeight()
{
    return Super::GetRVOAvoidanceWeight();
}

FVector UDcxVehicleDriveComponentTank::GetRVOAvoidanceOrigin()
{
    return Super::GetRVOAvoidanceOrigin();
}

float UDcxVehicleDriveComponentTank::GetRVOAvoidanceRadius()
{
    return Super::GetRVOAvoidanceRadius();
}

float UDcxVehicleDriveComponentTank::GetRVOAvoidanceHeight()
{
    return Super::GetRVOAvoidanceHeight();
}

float UDcxVehicleDriveComponentTank::GetRVOAvoidanceConsiderationRadius()
{
    return Super::GetRVOAvoidanceConsiderationRadius();
}

FVector UDcxVehicleDriveComponentTank::GetVelocityForRVOConsideration()
{
    return Super::GetVelocityForRVOConsideration();
}

void UDcxVehicleDriveComponentTank::SetAvoidanceGroupMask(int32 GroupFlags)
{
    Super::SetAvoidanceGroupMask(GroupFlags);
}

int32 UDcxVehicleDriveComponentTank::GetAvoidanceGroupMask()
{
    return Super::GetAvoidanceGroupMask();
}

void UDcxVehicleDriveComponentTank::SetGroupsToAvoidMask(int32 GroupFlags)
{
    Super::SetGroupsToAvoidMask(GroupFlags);
}

int32 UDcxVehicleDriveComponentTank::GetGroupsToAvoidMask()
{
    return Super::GetGroupsToAvoidMask();
}

void UDcxVehicleDriveComponentTank::SetGroupsToIgnoreMask(int32 GroupFlags)
{
    Super::SetGroupsToIgnoreMask(GroupFlags);
}

int32 UDcxVehicleDriveComponentTank::GetGroupsToIgnoreMask()
{
    return Super::GetGroupsToIgnoreMask();
}

