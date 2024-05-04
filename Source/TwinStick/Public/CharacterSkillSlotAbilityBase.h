#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EActivationStatus.h"
#include "SkillButtonBase.h"
#include "CharacterSkillSlotAbilityBase.generated.h"

class UAbilityBase;
class UImage;
class UProgressBar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UCharacterSkillSlotAbilityBase : public USkillButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* SkillCooldownBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SkillIconCooldownText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SkillIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SkillKeyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ImageSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SkillActivationCostText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor KeyColourNotActivatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor KeyColourActivatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconColourNoResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconColourActivatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconColourNotActivatable;
    
public:
    UCharacterSkillSlotAbilityBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSkillKeyBindText(const FText& KeyBind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSkillCooldownText(float CooldownTimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSkillCooldownPercent(float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSkillActivationCostText(float Cost);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasResourcesToActivate() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleAbilityUsed(UAbilityBase* Ability, EActivationStatus Status, const FGameplayTag& AbilityTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetActivationCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActivate() const;
    
};

