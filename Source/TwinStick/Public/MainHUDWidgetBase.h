#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "GameplayTagContainer.h"
#include "ESolsticeHeroClass.h"
#include "MainHUDWidgetBase.generated.h"

class ASolsticeCharacterBase;
class UCommonRichTextBlock;
class UNamedSlot;
class UProgressBar;
class USkill;
class UTextBlock;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UMainHUDWidgetBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* MiniMapSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* WaveTimeProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WaveInfoMainBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CurrentWaveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* FinalCountDownText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CycleObservedHeroText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* InventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ReviveBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ReviveNotificationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ReviveDetailsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* GamepadDetonateNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESolsticeHeroClass> RevivingClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<USkill>> RevivingSkills;
    
    UMainHUDWidgetBase();

    UFUNCTION(BlueprintCallable)
    void TagRemoved(ASolsticeCharacterBase* Character, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void TagAdded(ASolsticeCharacterBase* Character, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusToSkillWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusToInventoryWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFocusToHUDWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseFocusToHUDWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseFocusFromSkillWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseFocusFromInventoryWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_TagRemoved(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_TagAdded(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddWidgetToMainHUD(UUserWidget* Widget);
    
};

