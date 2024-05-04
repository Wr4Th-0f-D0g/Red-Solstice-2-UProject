#pragma once
#include "CoreMinimal.h"
#include "DynamicDamagableBase.h"
#include "PipeStatusChangedDelegate.h"
#include "PipeNetworkBase.generated.h"

class APipeNetworkBase;

UCLASS(Blueprintable)
class TWINSTICK_API APipeNetworkBase : public ADynamicDamagableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APipeNetworkBase*> LinkedPipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PipeNetworkState, meta=(AllowPrivateAccess=true))
    uint8 PipeNetworkState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPipeStatusChanged OnPipeStatusChanged;
    
    APipeNetworkBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopGas();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PipeFinalExplosionState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PipeExplosion();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PipeNetworkState(uint8 OldState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeakingGas() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInactive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHatchOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HatchOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GasReleased();
    
};

