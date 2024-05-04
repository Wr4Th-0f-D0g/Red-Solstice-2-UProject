#pragma once
#include "CoreMinimal.h"
#include "EWindowState.h"
#include "InteractionInterface.h"
#include "VaultActor.h"
#include "WindowBase.generated.h"

class AActor;
class APawn;
class UInteractableComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AWindowBase : public AVaultActor, public IInteractionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WindowState, meta=(AllowPrivateAccess=true))
    EWindowState WIndowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWindowState DefaultWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClosedChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bWindowClosedFromRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    AWindowBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WindowStateChanged(EWindowState NewState, EWindowState PrevState);
    
    UFUNCTION(BlueprintCallable)
    void SetWindowState(EWindowState NewState, bool bDuringWindowInit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenWindow(bool bInstaOpen);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WindowState(EWindowState PrevState);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionStarted(APawn* PawnInstigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionComponentReset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleInteractionCompleted(AActor* InteractableActor, const TArray<APawn*>& Instigators, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionAborted(APawn* PawnInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseWindow(bool bInstaClose);
    

    // Fix for true pure virtual functions not being implemented
};

