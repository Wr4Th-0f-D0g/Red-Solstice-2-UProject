#pragma once
#include "CoreMinimal.h"
#include "AnimationSharingTypes.h"
#include "SolsticeAnimationSharingStateProcessor.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeAnimationSharingStateProcessor : public UAnimationSharingStateProcessor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTwoMeleeAttacks;
    
public:
    USolsticeAnimationSharingStateProcessor();

};

