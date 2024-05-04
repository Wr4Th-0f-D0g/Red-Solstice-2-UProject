#include "DcxVehicleDriveComponent4W.h"
#include "DcxVehicleDriveRawInput4W.h"

UDcxVehicleDriveComponent4W::UDcxVehicleDriveComponent4W(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WheelConfigurations.AddDefaulted(4);
    this->RawInput = CreateDefaultSubobject<UDcxVehicleDriveRawInput4W>(TEXT("RawInput"));
    this->SmoothAnalogControls.AddDefaulted(5);
    this->AckermannGeometryAccuracy = 1.00f;
}

void UDcxVehicleDriveComponent4W::SetDifferentialData(FDcxVehicleDifferentialData4W NewDifferentialData) {
}

UDcxVehicleDriveRawInput4W* UDcxVehicleDriveComponent4W::GetRawInput4W() const {
    return NULL;
}

FDcxVehicleDifferentialData4W UDcxVehicleDriveComponent4W::GetDifferentialData() const {
    return FDcxVehicleDifferentialData4W{};
}

void UDcxVehicleDriveComponent4W::SetAvoidanceGroup(const FNavAvoidanceMask& Mask)
{
}

void UDcxVehicleDriveComponent4W::SetRVOAvoidanceUID(int32 UID)
{
    Super::SetRVOAvoidanceUID(UID);
}

int32 UDcxVehicleDriveComponent4W::GetRVOAvoidanceUID()
{
    return Super::GetRVOAvoidanceUID();
}

void UDcxVehicleDriveComponent4W::SetRVOAvoidanceWeight(float Weight)
{
    Super::SetRVOAvoidanceWeight(Weight);
}

float UDcxVehicleDriveComponent4W::GetRVOAvoidanceWeight()
{
    return Super::GetRVOAvoidanceWeight();
}

FVector UDcxVehicleDriveComponent4W::GetRVOAvoidanceOrigin()
{
    return Super::GetRVOAvoidanceOrigin();
}

float UDcxVehicleDriveComponent4W::GetRVOAvoidanceRadius()
{
    return Super::GetRVOAvoidanceRadius();
}

float UDcxVehicleDriveComponent4W::GetRVOAvoidanceHeight()
{
    return Super::GetRVOAvoidanceHeight();
}

float UDcxVehicleDriveComponent4W::GetRVOAvoidanceConsiderationRadius()
{
    return Super::GetRVOAvoidanceConsiderationRadius();
}

FVector UDcxVehicleDriveComponent4W::GetVelocityForRVOConsideration()
{
    return Super::GetVelocityForRVOConsideration();
}

void UDcxVehicleDriveComponent4W::SetAvoidanceGroupMask(int32 GroupFlags)
{
    Super::SetAvoidanceGroupMask(GroupFlags);
}

int32 UDcxVehicleDriveComponent4W::GetAvoidanceGroupMask()
{
    return Super::GetAvoidanceGroupMask();
}

void UDcxVehicleDriveComponent4W::SetGroupsToAvoidMask(int32 GroupFlags)
{
    Super::SetGroupsToAvoidMask(GroupFlags);
}

int32 UDcxVehicleDriveComponent4W::GetGroupsToAvoidMask()
{
    return Super::GetGroupsToAvoidMask();
}

void UDcxVehicleDriveComponent4W::SetGroupsToIgnoreMask(int32 GroupFlags)
{
    Super::SetGroupsToIgnoreMask(GroupFlags);
}

int32 UDcxVehicleDriveComponent4W::GetGroupsToIgnoreMask()
{
    return Super::GetGroupsToIgnoreMask();
}


