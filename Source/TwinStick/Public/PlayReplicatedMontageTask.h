#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "MontageInfoTags.h"
#include "ReplicatedMontageSimpleDelegate.h"
#include "PlayReplicatedMontageTask.generated.h"

class ASolsticeCharacterBase;
class UAnimMontage;
class UObject;
class UPlayReplicatedMontageTask;

UCLASS(Blueprintable)
class TWINSTICK_API UPlayReplicatedMontageTask : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicatedMontageSimple OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicatedMontageSimple OnBlendOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicatedMontageSimple OnCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicatedMontageSimple OnNotify;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CachedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* CachedCharacter;
    
public:
    UPlayReplicatedMontageTask();

    UFUNCTION(BlueprintCallable)
    static UPlayReplicatedMontageTask* PlayReplicatedMontageAndWait(ASolsticeCharacterBase* Character, UAnimMontage* MontageToPlay, FMontageInfoTags MontageTags, float InPlayRate, float StartPosition, FName StartSection, UObject* Payload);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void MontageNotify(FGameplayTag NotifyTag, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
};

