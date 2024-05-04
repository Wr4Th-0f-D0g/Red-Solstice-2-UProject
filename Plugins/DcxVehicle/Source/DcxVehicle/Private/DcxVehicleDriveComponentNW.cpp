#include "DcxVehicleDriveComponentNW.h"
#include "DcxVehicleDriveRawInputNW.h"

UDcxVehicleDriveComponentNW::UDcxVehicleDriveComponentNW(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WheelConfigurations.AddDefaulted(8);
    this->RawInput = CreateDefaultSubobject<UDcxVehicleDriveRawInputNW>(TEXT("RawInput"));
    this->SmoothAnalogControls.AddDefaulted(5);
}

void UDcxVehicleDriveComponentNW::SetDrivenWheel(int32 WheelIndex, bool bIsDriven) {
}

bool UDcxVehicleDriveComponentNW::IsDrivenWheel(int32 WheelIndex) const {
    return false;
}

UDcxVehicleDriveRawInputNW* UDcxVehicleDriveComponentNW::GetRawInputNW() const {
    return NULL;
}


void UDcxVehicleDriveComponentNW::SetRVOAvoidanceUID(int32 UID)
{
    Super::SetRVOAvoidanceUID(UID);
}

int32 UDcxVehicleDriveComponentNW::GetRVOAvoidanceUID()
{
    return Super::GetRVOAvoidanceUID();
}

void UDcxVehicleDriveComponentNW::SetRVOAvoidanceWeight(float Weight)
{
    Super::SetRVOAvoidanceWeight(Weight);
}

float UDcxVehicleDriveComponentNW::GetRVOAvoidanceWeight()
{
    return Super::GetRVOAvoidanceWeight();
}

FVector UDcxVehicleDriveComponentNW::GetRVOAvoidanceOrigin()
{
    return Super::GetRVOAvoidanceOrigin();
}

float UDcxVehicleDriveComponentNW::GetRVOAvoidanceRadius()
{
    return Super::GetRVOAvoidanceRadius();
}

float UDcxVehicleDriveComponentNW::GetRVOAvoidanceHeight()
{
    return Super::GetRVOAvoidanceHeight();
}

float UDcxVehicleDriveComponentNW::GetRVOAvoidanceConsiderationRadius()
{
    return Super::GetRVOAvoidanceConsiderationRadius();
}

FVector UDcxVehicleDriveComponentNW::GetVelocityForRVOConsideration()
{
    return Super::GetVelocityForRVOConsideration();
}

void UDcxVehicleDriveComponentNW::SetAvoidanceGroupMask(int32 GroupFlags)
{
    Super::SetAvoidanceGroupMask(GroupFlags);
}

int32 UDcxVehicleDriveComponentNW::GetAvoidanceGroupMask()
{
    return Super::GetAvoidanceGroupMask();
}

void UDcxVehicleDriveComponentNW::SetGroupsToAvoidMask(int32 GroupFlags)
{
    Super::SetGroupsToAvoidMask(GroupFlags);
}

int32 UDcxVehicleDriveComponentNW::GetGroupsToAvoidMask()
{
    return Super::GetGroupsToAvoidMask();
}

void UDcxVehicleDriveComponentNW::SetGroupsToIgnoreMask(int32 GroupFlags)
{
    Super::SetGroupsToIgnoreMask(GroupFlags);
}

int32 UDcxVehicleDriveComponentNW::GetGroupsToIgnoreMask()
{
    return Super::GetGroupsToIgnoreMask();
}


