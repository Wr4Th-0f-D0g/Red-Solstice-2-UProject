#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AIMarineCharacterData.h"
#include "MarineBotSettings.h"
#include "MissionGenerationData.h"
#include "OnPawnKilledDelegate.h"
#include "PowerSuitModel.h"
#include "SolsticeGameMode.h"
#include "StrategyInventoryItemData.h"
#include "Templates/SubclassOf.h"
#include "RTS_GameMode.generated.h"

class AAIMarineHeroCharacterBase;
class AActor;
class AController;
class AGroupPlayerStartBase;
class AHeroCharacterBase;
class AHeroControllerBase;
class AInteractionActor;
class AObserverPawn;
class APlayerController;
class ARTS_GameState;
class ARTS_NetworkManager;
class ASolsticeCharacterBase;
class UBotStatus;
class UPoolManager;
class USolsticeBuffBase;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API ARTS_GameMode : public ASolsticeGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStrategyInventoryItemData> PointShopBuffs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPawnKilled OnPawnKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMissionGenerationData ProcMissionGenerationData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARTS_GameState* RTSGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGroupPlayerStartBase* GroupPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ARTS_NetworkManager*> NetworkManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARTS_NetworkManager> RTSNetworkManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIMarineHeroCharacterBase> FollowerBotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> ReviveBuffClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AController*> ControllersFinishedRandomizing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HotJoinInvulnerabilityTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HotJoinHiddenFromMonstersTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PrimaryHotJoinLocationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SecondaryHotJoinLocationTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHeroControllerBase> HeroAIControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AObserverPawn> ObserverPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInteractionActor> InteractionActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCreatePremadeCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PremadeTemplateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> PIEClassSelectionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSeedNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSeedNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoolManager* PoolManager;
    
public:
    ARTS_GameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartPlayer(APlayerController* NewPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnVehicles();
    
    UFUNCTION(BlueprintCallable)
    void SpawnStartingVehiclesTrain();
    
    UFUNCTION(BlueprintCallable)
    void SpawnStartingVehicles();
    
    UFUNCTION(BlueprintCallable)
    AHeroCharacterBase* SpawnPremadeHero(APlayerController* PC, FName PremadeName, FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    AObserverPawn* SpawnObserverPawn(APlayerController* PC, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    AInteractionActor* SpawnInteractionActor(APlayerController* PC, const FTransform& SpawnTransform, AHeroCharacterBase* HeroOverride);
    
    UFUNCTION(BlueprintCallable)
    AHeroCharacterBase* SpawnHero(APlayerController* PC, FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    AAIMarineHeroCharacterBase* SpawnFollowerBot(UBotStatus* InBotStatus, const FTransform& InTransform, TSubclassOf<AAIMarineHeroCharacterBase> FollowerClassOverride);
    
    UFUNCTION(BlueprintCallable)
    AAIMarineHeroCharacterBase* SpawnAIMarineBotNonPowersuit(TSubclassOf<AAIMarineHeroCharacterBase> BotClass, const FAIMarineCharacterData& CharacterData, const FTransform& InTransform, const FText& InBotName, FMarineBotSettings BotSettings, bool bDoNotPossess);
    
    UFUNCTION(BlueprintCallable)
    AAIMarineHeroCharacterBase* SpawnAIMarineBot(TSubclassOf<AAIMarineHeroCharacterBase> BotClass, const FPowerSuitModel& SuitModel, const FTransform& InTransform, const FText& InBotName, FMarineBotSettings BotSettings, bool bDoNotPossess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimeDilationIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void ReInitCrowd();
    
    UFUNCTION(BlueprintCallable)
    void QuitAndReturnToHQ();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostSpawnPlayerSquadMember(AHeroCharacterBase* Hero);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayerCanStart(APlayerController* NewPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTravelCompletedServer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_MatchAboutToStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsTrainGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IncreaseTimeDilation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleMapShown(bool bShown);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleInactivePlayerRemoved(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleImmortalHeroRevived(AHeroCharacterBase* RevivedHero);
    
    UFUNCTION(BlueprintCallable)
    void GiveAllPlayersAchievements(const FGameplayTagContainer& AchievementTags, const FGameplayTagContainer& AchievementRequiredTags, const FGameplayTagContainer& AchievementIgnoreTags);
    
    UFUNCTION(BlueprintCallable)
    void GiveAllPlayersAchievement(const FGameplayTag& AchievementTag, const FGameplayTagContainer& AchievementRequiredTags, const FGameplayTagContainer& AchievementIgnoreTags);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector FindAverageTeamPosition(ASolsticeCharacterBase* SolsticeChar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecreaseTimeDilation();
    
};

