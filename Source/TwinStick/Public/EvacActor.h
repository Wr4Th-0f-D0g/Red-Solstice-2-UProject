#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EEvacAllowedTypes.h"
#include "EEvacStatus.h"
#include "EvacActor.generated.h"

class ASolsticeCharacterBase;
class UBoxComponent;
class USolsticeWidgetComponent;

UCLASS(Abstract, Blueprintable)
class TWINSTICK_API AEvacActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EvacBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USolsticeWidgetComponent* EvacuateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USolsticeWidgetComponent* ArriveWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle EvacSyncHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EvacAllowedTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EvacStatus, meta=(AllowPrivateAccess=true))
    EEvacStatus EvacStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EvacLeavingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EvacReadyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EvacDestroyTimeAfterLeaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReplicatedEvacReadyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReplicatedEvacLeavingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASolsticeCharacterBase*> Evacuators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASolsticeCharacterBase*> FriendliesQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASolsticeCharacterBase*> FriendliesMovingToEvac;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ArrivalTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle LeavingTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle EvacDestroyTimerHandle;
    
public:
    AEvacActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void PulseOverlap();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EvacStatus();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void K2_TimerTick();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void K2_ServerEvacReady();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void K2_ServerEvacLeaving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_EvacuateCharacter(ASolsticeCharacterBase* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ClientEvacReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ClientEvacLeaving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanEvacCheckForEvacuatee() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanCharacterEvacuate(ASolsticeCharacterBase* Evacuatee) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrategyBotEvacAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerEvacAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionMarineEvacAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEveryoneEvacAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEvacAllowedFor(int32 InEvacAllowedType, EEvacAllowedTypes InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCivilianEvacAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetLeavingText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetArrivingText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetArrivedText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetArrivalText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetAllowedTypeText() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyMe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCharacterEvacuate(ASolsticeCharacterBase* Evacuatee) const;
    
    UFUNCTION(BlueprintCallable)
    void AddFriendlyToQueue(ASolsticeCharacterBase* Friendly);
    
};

