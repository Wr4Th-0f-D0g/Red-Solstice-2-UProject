#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SkillButtonBase.h"
#include "CharacterSkillSlotWidgetBase.generated.h"

class UAbilityBase;
class UBorder;
class UImage;
class UOverlay;
class UProgressBar;
class UTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UCharacterSkillSlotWidgetBase : public USkillButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SkillIconImage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* LevelUpOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SkillIconKeyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SkillActivationCostText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SkillSelectedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SkillVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* SkillCooldownProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SkillCooldownText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* SkillBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UnavailableLevelColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AvailableLevelColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkillNotActivatableColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkillHasResourcesToActivateColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkillCanActivateColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkillLevelLowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkillDamagedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkillShortcutKeyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkillTextNotActivatableColor;
    
public:
    UCharacterSkillSlotWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkillLevelChanged(int32 Level);
    
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
    void HandleSkillLevelChanged(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void HandleSkillDamagedChanged(bool NewDamaged);
    
    UFUNCTION(BlueprintCallable)
    void HandleAbilityUsed(UAbilityBase* Ability, const FGameplayTag& AbilityTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetActivationCost() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FLinearColor ChooseIconColor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActivate() const;
    
};

