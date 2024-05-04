#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "GameplayTagContainer.h"
#include "EInteractionAbortPolicy.h"
#include "EInteractionCount.h"
#include "EInteractionProgressMode.h"
#include "InstigatorContainer.h"
#include "InteractionAbortedDelegate.h"
#include "InteractionCompletedDelegate.h"
#include "InteractionProgressChangedDelegate.h"
#include "InteractionStartedDelegate.h"
#include "InteractionStatus.h"
#include "OnInteractionWidgetVisibilityToggledDelegate.h"
#include "InteractableComponent.generated.h"

class APawn;
class UFMODAudioComponent;
class UFMODEvent;
class UInteractableWidgetComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UInteractableComponent : public UBoxComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float InteractionTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InteractionStatus, meta=(AllowPrivateAccess=true))
    FInteractionStatus InteractionStatus;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionWidgetVisibilityToggled OnInteractionWidgetVisibilityToggled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowNameAtDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowNameDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionProgressChanged OnInteractionProgressChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bInteractionEnabled;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionCount InteractionCountPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepProgressOnAbort;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InteractionsRemaining, meta=(AllowPrivateAccess=true))
    int32 InteractionsRemaining;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionAbortPolicy AbortPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionAbortRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysAbortWhenOutOfRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FInstigatorContainer ActiveInstigators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConcurrentInstigators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionProgressMode InteractionTimePolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InteractionResourceCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InteractableTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionStarted OnInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionAborted OnInteractionAborted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionCompleted OnInteractionCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> CachedNetworkManagerInstigators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FModSoundAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FModProgressSoundAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BeginSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* InProgressSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ActivatedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FailedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableWidgetComponent* WidgetComp;
    
    UInteractableComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleInteractableWidget(bool bNewVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PulseForClosePlayer();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlaySound(UFMODAudioComponent* AudioComponent, UFMODEvent* SoundEvent, bool bForceStopPrevious);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractionStatus(const FInteractionStatus& OldStatus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractionsRemaining(int32 OldValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveInstigator(const APawn* InInstigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractionStarted(APawn* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractionEnabledChanged(bool IsInteractable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractionCompleted(const TArray<APawn*>& Instigators, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractionAborted(APawn* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalInteractionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingInteractionTime(APawn* InteractionInstigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActiveInstigators() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInteractionStatus GetInteractionStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInteractionResourceCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractionProgress(APawn* InteractionInstigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInteractionLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedInteractionTime(APawn* InteractionInstigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetActiveInstigators() const;
    
    UFUNCTION(BlueprintCallable)
    void DoReset();
    
    UFUNCTION(BlueprintCallable)
    void DoInteract(APawn* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void DoComplete(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void DoAbort(APawn* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteract(APawn* Instigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAbort(APawn* Instigator) const;
    
};

