#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleDriveComponent.h"
#include "DcxVehicleDriveComponentNW.generated.h"

class UDcxVehicleDriveRawInputNW;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DCXVEHICLE_API UDcxVehicleDriveComponentNW : public UDcxVehicleDriveComponent {
    GENERATED_BODY()
public:
    UDcxVehicleDriveComponentNW(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDrivenWheel(int32 WheelIndex, bool bIsDriven);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrivenWheel(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDcxVehicleDriveRawInputNW* GetRawInputNW() const;
    
    void SetAvoidanceGroup(const FNavAvoidanceMask& Mask);

    virtual void SetRVOAvoidanceUID(int32 UID) override;

    virtual int32 GetRVOAvoidanceUID() override;

    virtual void SetRVOAvoidanceWeight(float Weight) override;

    virtual float GetRVOAvoidanceWeight() override;

    virtual FVector GetRVOAvoidanceOrigin() override;

    virtual float GetRVOAvoidanceRadius() override;

    virtual float GetRVOAvoidanceHeight() override;

    virtual float GetRVOAvoidanceConsiderationRadius() override;

    virtual FVector GetVelocityForRVOConsideration() override;

    virtual void SetAvoidanceGroupMask(int32 GroupFlags) override;

    virtual int32 GetAvoidanceGroupMask() override;

    virtual void SetGroupsToAvoidMask(int32 GroupFlags) override;

    virtual int32 GetGroupsToAvoidMask() override;

    virtual void SetGroupsToIgnoreMask(int32 GroupFlags) override;

    virtual int32 GetGroupsToIgnoreMask() override;
    
};

