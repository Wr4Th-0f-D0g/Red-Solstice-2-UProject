#pragma once
#include "CoreMinimal.h"
#include "EvacActor.h"
#include "EvacRope.h"
#include "EvacActor_Dropship.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class TWINSTICK_API AEvacActor_Dropship : public AEvacActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RopeRiseMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RopeDropMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvacRope> EvacRopes;
    
public:
    AEvacActor_Dropship(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayMontage(const FEvacRope& Rope, UAnimMontage* SelectedMontage);
    
};

