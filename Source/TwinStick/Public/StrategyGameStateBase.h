#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameIsStartingChangedDelegate.h"
#include "HostIsImpatientDelegate.h"
#include "PlayerArrayChangedDelegate.h"
#include "PreviewBotChangedDelegate.h"
#include "SolsticeGameState.h"
#include "StragemBuffsChangedDelegate.h"
#include "StrategyInventoryItemData.h"
#include "StrategyGameStateBase.generated.h"

class AExecutorHQ;
class AHeroCharacterBase;
class AStrategyDropship;
class AStrategyMapManager;
class UBotStatus;

UCLASS(Blueprintable)
class TWINSTICK_API AStrategyGameStateBase : public ASolsticeGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bStratagemsAllowedInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StrategemBuffs, meta=(AllowPrivateAccess=true))
    TArray<FStrategyInventoryItemData> StrategemBuffs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStragemBuffsChanged OnStrategemBuffsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameIsStarting, meta=(AllowPrivateAccess=true))
    bool bGameIsStarting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameIsStartingChanged OnGameStartingChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyMapManager* StrategyMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyDropship* Dropship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExecutorHQ* HQ;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerArrayChanged OnPlayersChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBotStatus* PreviewBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* PreviewBotHero;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreviewBotChanged OnPreviewBotChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHostIsImpatient OnHostIsImpatient;
    
    AStrategyGameStateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPreviewBot(UBotStatus* InBotStatus);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGameIsStarting(bool NewStarting);
    
    UFUNCTION(BlueprintCallable)
    void ServerImpatientToStartGame();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StrategemBuffs();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameIsStarting();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastServerImpatientToStartGame();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastClientPlayCinematic(FGameplayTag CinematicTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStrategyMapManager* GetMapManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AExecutorHQ* GetHQ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AStrategyDropship* GetDropship() const;
    
    UFUNCTION(BlueprintCallable)
    void AddBotsToSquad(int32 BotCount);
    
};

