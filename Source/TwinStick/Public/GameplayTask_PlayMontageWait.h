#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "GameplayTask.h"
#include "MontageInfoTags.h"
#include "SGTMontageWaitSimpleDelegateDelegate.h"
#include "GameplayTask_PlayMontageWait.generated.h"

class UAbilityBase;
class UAnimMontage;
class UGameplayTask_PlayMontageWait;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UGameplayTask_PlayMontageWait : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTMontageWaitSimpleDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTMontageWaitSimpleDelegate OnBlendOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTMontageWaitSimpleDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTMontageWaitSimpleDelegate OnCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTMontageWaitSimpleDelegate OnGameplayTagNotify;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CachedMontageToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilityBase* CachedOwningAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedIsServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> CachedPayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMontageInfoTags CachedMontageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CachedStartSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedStopWhenAbilityEnds;
    
public:
    UGameplayTask_PlayMontageWait(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnMontageInterrupted(UAbilityBase* Ability, const FGameplayTag& AbilityTag);
    
    UFUNCTION()
    void OnMontageGameplayTagNotify(FGameplayTag GameplayTag, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGameplayTask_PlayMontageWait* CreatePlayMontageAndWaitProxy(UObject* WorldContextObject, FName TaskInstanceName, UAnimMontage* MontageToPlay, float PlayRate, float StartPosition, FName StartSection, UObject* Payload, bool bStopWhenAbilityEnds, UAbilityBase* OwningAbility, bool bIsServer);
    
};

