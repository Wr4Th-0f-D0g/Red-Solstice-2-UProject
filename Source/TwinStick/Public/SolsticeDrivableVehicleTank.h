#pragma once
#include "CoreMinimal.h"
#include "SolsticeDrivableVehicle.h"
#include "SolsticeDrivableVehicleTank.generated.h"

class USolsticeVehicleMovementComponentTank;

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticeDrivableVehicleTank : public ASolsticeDrivableVehicle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CmPerV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftTrackOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightTrackOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Thrust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyThrustLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyThrustRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnThrottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyThrottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyBrake;
    
public:
    ASolsticeDrivableVehicleTank(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTrackMaterials(float CurrentLeftTrackOffset, float CurrentRightTrackOffset);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_MoveRight(float Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_MoveForward(float Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USolsticeVehicleMovementComponentTank* GetVehicleDriveTank() const;
    
};

