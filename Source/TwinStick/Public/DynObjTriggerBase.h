#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "TriggerFiredStateChangedDelegate.h"
#include "DynObjTriggerBase.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UDynObjTriggerBase : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriggerFiredStateChanged OnStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumUses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTriggerActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyObjectOnNoUses;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactivationDelay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReduceUsesOnTrigger;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideWidgetsOnDeactivation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowWidgetsOnActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ReactivationHandle;
    
public:
    UDynObjTriggerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetShowWidgetsOnActivation(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetReduceUsesOnTrigger(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetReactivationDelay(float Val);
    
    UFUNCTION(BlueprintCallable)
    void SetNumUses(int32 Val);
    
    UFUNCTION(BlueprintCallable)
    void SetHideWidgetsOnDeactivation(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetDestroyObjectOnNoUses(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void ReduceNumUses();
    
    UFUNCTION(BlueprintCallable)
    void ReactivateTrigger();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ProcessTriggerUse();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowWidgetsOnActivation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReduceUsesOnTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReactivationDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumUses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsTriggerActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideWidgetsOnDeactivation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDestroyObjectOnNoUses() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateTrigger();
    
};

