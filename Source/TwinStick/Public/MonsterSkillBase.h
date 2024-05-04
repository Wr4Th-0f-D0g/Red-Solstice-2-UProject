#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Damage.h"
#include "InheritableTagContainer.h"
#include "Skill.h"
#include "SkillMonsterMontages.h"
#include "Templates/SubclassOf.h"
#include "MonsterSkillBase.generated.h"

class AActor;
class AMonsterCharacterBase;
class ASolsticeCharacterBase;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UMonsterSkillBase : public USkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonsterCharacterBase* Monster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckRequiredTargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPullGoalActorForTargetTagCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDefaultCanActivateChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMonsterSkillUseCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer CancelAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer TargetIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritableTagContainer TargetRequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkillActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AMonsterCharacterBase>, FSkillMonsterMontages> MonsterSkillMontages;
    
public:
    UMonsterSkillBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TargetTagsAreValidForSkill(AActor* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTargetActor(AActor* InTargetActor) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleTagRemoved(FGameplayTag AddedTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleTagAdded(FGameplayTag AddedTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_DebugsActivated(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleTagRemoved(ASolsticeCharacterBase* Char, FGameplayTag AddedTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleTagAdded(ASolsticeCharacterBase* Char, FGameplayTag AddedTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMonsterDied(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetWeaponDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetMontageForSkill() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugsActivated(bool bEnabled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanContinueSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelTagAdded();
    
};

