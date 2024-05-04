#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "Engine/EngineTypes.h"
#include "RootMotionTaskBase.h"
#include "SGTApplyRootMotionJumpForceDelegateDelegate.h"
#include "RootMotionTask_JumpForce.generated.h"

class UCurveFloat;
class UCurveVector;
class UObject;
class URootMotionTask_JumpForce;

UCLASS(Blueprintable)
class TWINSTICK_API URootMotionTask_JumpForce : public URootMotionTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTApplyRootMotionJumpForceDelegate OnFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTApplyRootMotionJumpForceDelegate OnLanded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MinimumLandedTriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bFinishOnLanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveVector* PathOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimeMappingCurve;
    
public:
    URootMotionTask_JumpForce(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnLandedCallback(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URootMotionTask_JumpForce* ApplyRootMotionJumpForce(UObject* WorldContextObject, FName TaskInstanceName, FRotator NewRotation, float NewDistance, float NewHeight, float NewDuration, float NewMinimumLandedTriggerTime, bool NewBFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector* NewPathOffsetCurve, UCurveFloat* NewTimeMappingCurve);
    
};

