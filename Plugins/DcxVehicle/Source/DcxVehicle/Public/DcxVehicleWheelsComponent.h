#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavigationAvoidanceTypes.h"
#include "GameFramework/PawnMovementComponent.h"
#include "AI/RVOAvoidanceInterface.h"
#include "DcxAnalogControlArray.h"
#include "DcxGear.h"
#include "DcxVehicleDriveInputRate.h"
#include "DcxVehicleDriveState.h"
#include "DcxVehicleSuspensionData.h"
#include "DcxVehicleTireLoadFilterData.h"
#include "DcxVehicleWheelConfiguration.h"
#include "DcxVehicleWheelData.h"
#include "DcxVehicleWheelState.h"
#include "DcxVehicleWheelsComponent.generated.h"

class UDcxVehicleTire;
class UDcxVehicleWheelsRawInput;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DCXVEHICLE_API UDcxVehicleWheelsComponent : public UPawnMovementComponent, public IRVOAvoidanceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChassisMass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InertiaTensorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDcxVehicleWheelConfiguration> WheelConfigurations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleTireLoadFilterData TireLoadFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceWeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvoidanceUID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAvoidanceMask AvoidanceGroup;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAvoidanceMask GroupsToAvoid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAvoidanceMask GroupsToIgnore;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThresholdLongitudinalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowForwardSpeedSubStepCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighForwardSpeedSubStepCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragArea;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleDriveInputRate ThrottleRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleDriveInputRate BrakeRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleDriveInputRate HandbrakeRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleDriveInputRate SteerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceConsiderationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceThrottleStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceBrakeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceSteerStep;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRecreateRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDcxVehicleWheelsRawInput* RawInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> SmoothAnalogControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDcxVehicleDriveState ReplicatedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasAvoidanceUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector AvoidanceVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector AvoidanceLockVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AvoidanceLockTimer;
    
public:
    UDcxVehicleWheelsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetWheelOffset(int32 WheelIndex, FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetWheelData(int32 WheelIndex, FDcxVehicleWheelData NewWheelData);
    
    UFUNCTION(BlueprintCallable)
    void SetTire(int32 WheelId, UDcxVehicleTire* NewTire);
    
    UFUNCTION(BlueprintCallable)
    void SetSuspensionData(int32 WheelIndex, FDcxVehicleSuspensionData NewSuspensionData);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToIgnore(const FNavAvoidanceMask& Mask);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToAvoid(const FNavAvoidanceMask& Mask);
    
    UFUNCTION(BlueprintCallable)
    void SetChassisMass(float Mass);
    
    UFUNCTION(BlueprintCallable)
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
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateState(const FDcxAnalogControlArray& AnalogControls, const FDcxGear& CurrentGear, const FDcxGear& TargetGear);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWheelDisabled(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWheelState(int32 WheelIndex, FDcxVehicleWheelState& WheelState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWheelRotationSpeed(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWheelRotationAngle(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWheelOffset(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDcxVehicleWheelData GetWheelData(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDcxVehicleTire* GetTire(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDcxVehicleSuspensionData GetSuspensionData(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDcxVehicleWheelsRawInput* GetRawInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumWheels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChassisMass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBoneName(int32 WheelIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnalogControl(uint8 Control) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableWheel(int32 WheelIndex);
    
    UFUNCTION(BlueprintCallable)
    void EnableAvoidance(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void DisableWheel(int32 WheelIndex);
    

    // Fix for true pure virtual functions not being implemented
};

