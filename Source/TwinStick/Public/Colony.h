#pragma once
#include "CoreMinimal.h"
#include "ColonyInfo.h"
#include "MissionEffectContainer.h"
#include "StrategyMapActor.h"
#include "Colony.generated.h"

class ARegion;

UCLASS(Blueprintable)
class TWINSTICK_API AColony : public AStrategyMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColonyInfo ColonyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEffectContainer DefaultColonyBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRRep_RandomColonyBonus, meta=(AllowPrivateAccess=true))
    FMissionEffectContainer RandomColonyBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARegion* ColonyRegion;
    
    AColony(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateColonyVisualState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetColonyNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetColonyInfested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetColonyDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void OnRRep_RandomColonyBonus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARegion* GetColonyRegion();
    
    UFUNCTION(BlueprintCallable)
    bool GetColonyBonusText(FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ColonyDestroyedStrol();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ColonyDestroyedSolar();
    
};

