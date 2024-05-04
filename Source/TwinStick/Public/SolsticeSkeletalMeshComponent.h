#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "SolsticeSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API USolsticeSkeletalMeshComponent : public USkeletalMeshComponentBudgeted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> HiddenBones;
    
    USolsticeSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AnimationUnHideBones();
    
    UFUNCTION(BlueprintCallable)
    void AnimationHideBone(FName BoneName);
    
};

