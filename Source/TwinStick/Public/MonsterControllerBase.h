#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ECrowdAvoidQuality.h"
#include "PerceivedActor.h"
#include "PlayerStatsPair.h"
#include "SolsticeAIControllerBase.h"
#include "MonsterControllerBase.generated.h"

class AActor;
class AMonsterCharacterBase;
class ASolsticeCharacterBase;
class IVaultablePawn;
class UVaultablePawn;
class UAICrowdFollowingComponent;
class UAggroComponent;
class UBehaviorTree;
class UBlackboardData;
class UEnvQuery;
class UPackController;
class UPrimitiveComponent;
class URTSNavLinkCustomComponent;

UCLASS(Abstract, Blueprintable)
class TWINSTICK_API AMonsterControllerBase : public ASolsticeAIControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerceivedActor> PerceivedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAICrowdFollowingComponent* AICrowdFollowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTotallyDisableCrowdAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* RandomPointAroundMarineEQS;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvQueryRequest QueryRequest;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NonMoveCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PawnCurrentPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailedToMoveLastCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NonMoveIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonMoveNearPlayerCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailedToMoveCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCountToCheckForNonMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCountStillCanNotMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailedToMove;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnticipateTurns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrowdAvoidQuality AvoidanceQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdCollisionQueryRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObstacleAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrowdSeparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdSeparationWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlowdownAtGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableCrowdSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathOptimizationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceRangeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePathOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateToVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOptimizeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOptimizeTopology;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClaimNavLinksOnMove;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerNavLinkClaimRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<URTSNavLinkCustomComponent*> ClaimedNavLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAggroComponent* AggroComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPackController* PackController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* AttackTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveToAcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* PreSpawnedBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* MonsterBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* PreSpawnedBB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlackboardData* MonsterBB;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetectStuckWhileMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BumpIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttackWhenCapsuleStuck;
    
public:
    AMonsterControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAttackTarget(AActor* NewGoalActor);
    
    UFUNCTION(BlueprintCallable)
    void SetAggroTickEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResumePathfollowing();
    
    UFUNCTION(BlueprintCallable)
    void ResetFailedToMove();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNotifyDamagedPlayer(ASolsticeCharacterBase* InPlayer);
    
public:
    UFUNCTION(BlueprintCallable)
    void PausePathfollowing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMonsterPermanentlyFailedToMove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMonsterFailedToMove();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCapsuleBumpDuringMove(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyAIMoveTo(FVector GoalLocation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MoveDueToBump();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrowdFollowingDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidPath() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchEnded(bool bVictory, const TArray<FPlayerStatsPair>& PlayerStats, float MatchTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPerceivedActors(TArray<AActor*>& OutActors, bool bIncludeFriendly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IVaultablePawn> GetPawnVaultable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPackController* GetPackController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfMonstersNearMe(float Radius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMonsterCharacterBase* GetControlledMonster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URTSNavLinkCustomComponent*> GetClaimedNavLinks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAttackTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAggroComponent* GetAggroComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishUsingNavlink();
    
    UFUNCTION(BlueprintCallable)
    void ClearAttackTarget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttackWhenStuck();
    
};

