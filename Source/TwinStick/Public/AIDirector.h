#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AICharDiedDelegate.h"
#include "ActiveTaunt.h"
#include "EAITokenType.h"
#include "ESolsticeTeam.h"
#include "PlayerStatsPair.h"
#include "TauntDetails.h"
#include "AIDirector.generated.h"

class AAIMarineHeroCharacterBase;
class AAbilityDroneBase;
class AActor;
class ABasicSolsticeAI;
class ACivilianCharacterBase;
class AMonsterCharacterBase;
class AMonsterControllerBase;
class ANPCHeroController;
class ASolsticeAIControllerBase;
class ASolsticeCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UAIDirector : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAbilityDroneBase* SaffronDrone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableNavRecovery;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAICharDied OnAICharDied;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMonsterCharacterBase*> WorldMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMonsterCharacterBase*> PreSpawnedWorldMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMonsterControllerBase*> WorldMonsterControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIMarineHeroCharacterBase*> WorldEnemyMarines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ANPCHeroController*> WorldEnemyMarineControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASolsticeAIControllerBase*> WorldBasicAIControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABasicSolsticeAI*> WorldBasicAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAIMarineHeroCharacterBase*> WorldFollowers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ANPCHeroController*> WorldFollowerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACivilianCharacterBase*> WorldCivilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASolsticeAIControllerBase*> WorldCivilianControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveTaunt> ActiveTaunts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ASolsticeCharacterBase*, int32> PlayerToBotCount;
    
public:
    UAIDirector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTauntGrabLocationAndGrabNewTargets(AActor* TauntActor, const FVector& NewLocation, float GrabRadius, bool bDiscardOldTaunted);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMarineDistances();
    
    UFUNCTION(BlueprintCallable)
    void SetBotRoamingWithPlayer(ASolsticeCharacterBase* Player);
    
    UFUNCTION(BlueprintCallable)
    bool ReturnToken(UPARAM(Ref) int32& InTokenID, bool bCooldownToken, float CooldownTime);
    
    UFUNCTION(BlueprintCallable)
    void ReturnDeadCharacterTokens(ASolsticeCharacterBase* DeadMonster);
    
    UFUNCTION(BlueprintCallable)
    bool RequestToken(ASolsticeCharacterBase* RequestingChar, AActor* TargetActor, EAITokenType TokenType, int32& OutTokenID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTaunt(AActor* Taunter);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBotRoamingWithPlayer(ASolsticeCharacterBase* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMonsterControllerBase*> K2_GetAllMonsterControllers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ANPCHeroController*> K2_GetAllEnemyMarineControllers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMonsterCharacterBase*> K2_GetAllActiveMonstersByTags(FGameplayTagContainer MonsterTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMonsterCharacterBase*> K2_GetAllActiveMonstersByTag(FGameplayTag MonsterTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMonsterCharacterBase*> K2_GetAllActiveMonsters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AAIMarineHeroCharacterBase*> K2_GetAllActiveFollowers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AAIMarineHeroCharacterBase*> K2_GetAllActiveEnemyMarines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABasicSolsticeAI*> K2_GetAllActiveBasicAI() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchEnded(bool bVictory, const TArray<FPlayerStatsPair>& PlayerStats, float MatchTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASolsticeCharacterBase*> GetWeightedEnemies(bool bInvertWeight, const FGameplayTagContainer& IgnoreTags, ESolsticeTeam MyTeam) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateTokens(AActor* TokenActor, int32 SpawnTokens, int32 AttackTokens, int32 SpecialTokens, int32 DogTokens, int32 SnatcherTokens, int32 CreeperTokens);
    
    UFUNCTION(BlueprintCallable)
    bool FindGoodPlayerToRoamWith(ASolsticeCharacterBase*& BestPlayer, int32& OutBestPlayerCount);
    
    UFUNCTION(BlueprintCallable)
    void AddTaunt(AActor* Taunter, const FTauntDetails& TauntDetails);
    
};

