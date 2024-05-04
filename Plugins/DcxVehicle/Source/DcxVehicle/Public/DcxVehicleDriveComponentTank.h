#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleDriveComponent.h"
#include "EDcxVehicleDriveControlModelTank.h"
#include "DcxVehicleDriveComponentTank.generated.h"

class UDcxVehicleDriveRawInputTank;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DCXVEHICLE_API UDcxVehicleDriveComponentTank : public UDcxVehicleDriveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDcxVehicleDriveControlModelTank::Type> DriveModel;
    
public:
    UDcxVehicleDriveComponentTank(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDriveModel(TEnumAsByte<EDcxVehicleDriveControlModelTank::Type> ControlModel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDcxVehicleDriveRawInputTank* GetRawInputTank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EDcxVehicleDriveControlModelTank::Type> GetDriveModel() const;
    
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

