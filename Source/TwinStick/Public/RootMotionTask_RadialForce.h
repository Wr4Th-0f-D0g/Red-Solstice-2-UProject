#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "RootMotionTaskBase.h"
#include "SGTApplyRootMotionRadialForceDelegateDelegate.h"
#include "RootMotionTask_RadialForce.generated.h"

class AActor;
class UCurveFloat;
class UObject;
class URootMotionTask_RadialForce;

UCLASS(Blueprintable)
class TWINSTICK_API URootMotionTask_RadialForce : public URootMotionTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTApplyRootMotionRadialForceDelegate OnFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* LocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bNoZForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrengthDistanceFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrengthOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseFixedWorldDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator FixedWorldDirection;
    
public:
    URootMotionTask_RadialForce(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URootMotionTask_RadialForce* ApplyRootMotionRadialForce(UObject* WorldContextObject, FName TaskInstanceName, FVector NewLocation, AActor* NewLocationActor, float NewStrength, float NewDuration, float NewRadius, bool NewBIsPush, bool NewBIsAdditive, bool NewBNoZForce, UCurveFloat* NewStrengthDistanceFalloff, UCurveFloat* NewStrengthOverTime, bool NewBUseFixedWorldDirection, FRotator NewFixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
    
};

