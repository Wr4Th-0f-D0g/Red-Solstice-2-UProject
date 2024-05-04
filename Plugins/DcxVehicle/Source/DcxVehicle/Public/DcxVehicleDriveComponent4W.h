#pragma once
#include "CoreMinimal.h"
#include "DcxVehicleDifferentialData4W.h"
#include "DcxVehicleDriveComponent.h"
#include "DcxVehicleDriveComponent4W.generated.h"

class UDcxVehicleDriveRawInput4W;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DCXVEHICLE_API UDcxVehicleDriveComponent4W : public UDcxVehicleDriveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleDifferentialData4W DifferentialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AckermannGeometryAccuracy;
    
public:
    UDcxVehicleDriveComponent4W(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDifferentialData(FDcxVehicleDifferentialData4W NewDifferentialData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDcxVehicleDriveRawInput4W* GetRawInput4W() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDcxVehicleDifferentialData4W GetDifferentialData() const;
    
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

