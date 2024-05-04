#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleWheelsComponent.h"
#include "DcxVehicleNoDriveComponent.generated.h"

class UDcxVehicleNoDriveRawInput;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DCXVEHICLE_API UDcxVehicleNoDriveComponent : public UDcxVehicleWheelsComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRawInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDriveTorque;
    
    UDcxVehicleNoDriveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSteerAngle(int32 WheelIndex, float SteerAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetDriveTorque(int32 WheelIndex, float DriveTorque);
    
    UFUNCTION(BlueprintCallable)
    void SetBrakeTorque(int32 WheelIndex, float BrakeTorque);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteerAngle(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDcxVehicleNoDriveRawInput* GetRawInputND() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDriveTorque(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrakeTorque(int32 WheelIndex) const;
    
    void SetRVOAvoidanceUID(int32 UID);
    
    int32 GetRVOAvoidanceUID();
    
    void SetRVOAvoidanceWeight(float Weight);
    
    float GetRVOAvoidanceWeight();
    
    FVector GetRVOAvoidanceOrigin();
    
    float GetRVOAvoidanceRadius();
    
    float GetRVOAvoidanceHeight();
    
    float GetRVOAvoidanceConsiderationRadius();
    
    FVector GetVelocityForRVOConsideration();
    
    void SetAvoidanceGroupMask(int32 GroupFlags);
    
    int32 GetAvoidanceGroupMask();
    
    void SetGroupsToAvoidMask(int32 GroupFlags);
    
    int32 GetGroupsToAvoidMask();
    
    void SetGroupsToIgnoreMask(int32 GroupFlags);
    
    int32 GetGroupsToIgnoreMask();
    
};

