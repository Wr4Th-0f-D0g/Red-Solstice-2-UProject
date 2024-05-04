#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SolsticeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API USolsticeAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    USolsticeAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPoseSnapshot(FName SnapshotName) const;
    
};

