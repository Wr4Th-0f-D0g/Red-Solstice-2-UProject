#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "RootMotionTaskBase.h"
#include "RootMotionTask_ConstantForceDelegateDelegate.h"
#include "RootMotionTask_ConstantForce.generated.h"

class UCurveFloat;
class UObject;
class URootMotionTask_ConstantForce;

UCLASS(Blueprintable)
class TWINSTICK_API URootMotionTask_ConstantForce : public URootMotionTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionTask_ConstantForceDelegate OnFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector WorldDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrengthOverTime;
    
public:
    URootMotionTask_ConstantForce(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URootMotionTask_ConstantForce* ApplyRootMotionTask_ConstantForce(UObject* WorldContextObject, FName TaskInstanceName, FVector NewWorldDirection, float NewStrength, float NewDuration, bool NewBIsAdditive, UCurveFloat* NewStrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
    
};

