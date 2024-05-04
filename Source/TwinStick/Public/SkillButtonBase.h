#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "ESkillSlot.h"
#include "SkillButtonBase.generated.h"

class UAbilityBase;
class USkill;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USkillButtonBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkill* Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillSlot SkillSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDragDroppable;
    
public:
    USkillButtonBase();

    UFUNCTION(BlueprintCallable)
    void SetSkillSlot(ESkillSlot InSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSkill(USkill* NewSkill);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetSkill(USkill* NewSkill);
    
    UFUNCTION(BlueprintCallable)
    void HandleCooldownValueChanged(float TimeRemaining, float CooldownPercent);
    
    UFUNCTION(BlueprintCallable)
    void HandleCooldownChanged(UAbilityBase* Item, bool bReady, const FGameplayTag& AbilityTag);
    
};

