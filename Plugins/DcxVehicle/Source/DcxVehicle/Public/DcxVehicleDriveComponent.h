#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "DcxVehicleClutchData.h"
#include "DcxVehicleEngineData.h"
#include "DcxVehicleGearboxData.h"
#include "DcxVehicleWheelsComponent.h"
#include "EDcxVehicleGearbox.h"
#include "DcxVehicleDriveComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DCXVEHICLE_API UDcxVehicleDriveComponent : public UDcxVehicleWheelsComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleEngineData EngineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleGearboxData GearboxData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDcxVehicleClutchData ClutchData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrongDirectionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SteerCurve;
    
    UDcxVehicleDriveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargetGear(int32 NewGear, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void SetGearboxType(TEnumAsByte<EDcxVehicleGearbox::Type> NewGearboxType);
    
    UFUNCTION(BlueprintCallable)
    void SetGearboxData(FDcxVehicleGearboxData NewGearboxData);
    
    UFUNCTION(BlueprintCallable)
    void SetEngineRotationSpeed(float RPM);
    
    UFUNCTION(BlueprintCallable)
    void SetEngineData(FDcxVehicleEngineData NewEngineData);
    
    UFUNCTION(BlueprintCallable)
    void SetClutchData(FDcxVehicleClutchData NewClutchData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetGear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EDcxVehicleGearbox::Type> GetGearboxType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDcxVehicleGearboxData GetGearboxData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineRotationSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDcxVehicleEngineData GetEngineData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentGear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDcxVehicleClutchData GetClutchData() const;
    
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

