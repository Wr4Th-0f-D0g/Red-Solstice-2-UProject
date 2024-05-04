#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Damage.h"
#include "EGhoulerState.h"
#include "GhoulerReviveMonsters.h"
#include "GhoulerStateChangedDelegate.h"
#include "MonsterComponentBase.h"
#include "PreSpawnedMonsters.h"
#include "Templates/SubclassOf.h"
#include "GhoulerMonsterComponent.generated.h"

class AActor;
class AMonsterCharacterBase;
class ASolsticeCharacterBase;
class UAnimMontage;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UGhoulerMonsterComponent : public UMonsterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontRespawnRevivedMonsters;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGhoulerStateChanged OnGhoulerStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GhoulerSpawningTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GhoulerRevivingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GhoulerSpawnMonsterMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GhoulerReviveMonsterMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GhoulerReviveMonsterParticlesRevivingMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GhoulerSpawnCollisionBoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMonsterTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepositionCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GhoulerReviveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GhoulerMaxMonstersInRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GhoulerMonsterCheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GhoulerMaxSpawnedAndRevivedMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReviveMonsterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReviveMonsterNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPreSpawnedMonsters> GhoulerWeightedMonstersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AMonsterCharacterBase>> MonsterClassesGhoulerCanRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGhoulerState GhoulerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGhoulerState PrevGhoulerState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMonsterCharacterBase*> SpawnedMonsters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGhoulerReviveMonsters> MonstersToRevive;
    
public:
    UGhoulerMonsterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnMonster(const FGhoulerReviveMonsters& MonsInfo);
    
    UFUNCTION(BlueprintCallable)
    void SpawnedMonsterDied(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDead);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveGhoulerStateChanged(EGhoulerState NewState, EGhoulerState OldState);
    
    UFUNCTION(BlueprintCallable)
    void HandleAICharDied(ASolsticeCharacterBase* DeadChar);
    
    UFUNCTION(BlueprintCallable)
    void GotoState(EGhoulerState NewState);
    
    UFUNCTION(BlueprintCallable)
    void GhoulerDied();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGhoulerState GetGhoulerState() const;
    
    UFUNCTION(BlueprintCallable)
    void CooldownReposition();
    
};

