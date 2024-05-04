#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "MonsterSkillBase.h"
#include "RootMotionMonsterJumpSkillBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API URootMotionMonsterJumpSkillBase : public UMonsterSkillBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint16 RootMotionSourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoResetCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> CollisionsToChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> DefaultCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsJumping;
    
    URootMotionMonsterJumpSkillBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartRootMotionJump(const FVector& StartLoc, const FVector& EndLoc, float SpeedFactor);
    
    UFUNCTION(BlueprintCallable)
    void ResetCollisions();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimedOutAndReachedDestination();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimedOut();
    
    UFUNCTION(BlueprintCallable)
    void CancelRootMotion();
    
};

