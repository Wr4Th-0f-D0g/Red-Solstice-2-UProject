#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DoMeleeAttackDelegate.h"
#include "ESolsticeDebugTraceType.h"
#include "MonsterSkillBase.h"
#include "MontageInfoTags.h"
#include "Templates/SubclassOf.h"
#include "MonsterMeleeSkillBase.generated.h"

class AActor;
class ADynamicActorBase;
class AHeroCharacterBase;
class AMonsterCharacterBase;
class ASolsticeCharacterBase;
class UAnimMontage;
class USolsticeBuffBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMonsterMeleeSkillBase : public UMonsterSkillBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoMeleeAttack DoMeleeAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsOnPlayerToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> SlowBuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> ExecutionBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagableHealthRangeMapMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagableHealthRangeMapMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagableHealthRangeMapOutMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagableHealthRangeMapOutMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterWeaponRangeMapMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterWeaponRangeMapMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterWeaponRangeMapOutMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonsterWeaponRangeMapOutMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ADynamicActorBase>> IgnoredDamagableClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EvadeIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectQueriesForOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreEvade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeDebugTraceType TraceDebugType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDebugDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MeleeMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMontageInfoTags MontageTags;
    
    UMonsterMeleeSkillBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryMelee(AMonsterCharacterBase* InMonster, UAnimMontage* InMeleeMontage);
    
    UFUNCTION(BlueprintCallable)
    void SetMeleeMontage(UAnimMontage* InMeleeMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetMonster();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerDebuff(ASolsticeCharacterBase* Char);
    
    UFUNCTION(BlueprintCallable)
    void HandleMontageNotify(FGameplayTag NotifyGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleMontageInterrupted(FGameplayTag NotifyGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleMontageComplete(FGameplayTag NotifyGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FGameplayTag GetExecutionTag() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishMelee();
    
    UFUNCTION(BlueprintCallable)
    static bool FindMeleeTarget(AMonsterCharacterBase* InMonster, TArray<AActor*> OverlappedActors, AActor*& OutActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoExecute(AHeroCharacterBase* Hero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTargetHealth(AHeroCharacterBase* Hero) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckExecutionRange(AHeroCharacterBase* Hero) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDistanceIsSane(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTryToEvade(bool bIgnoreEvades) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanExecute() const;
    
};

