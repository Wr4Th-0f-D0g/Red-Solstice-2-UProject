#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterInfoWidgetBase.generated.h"

class AHeroCharacterBase;
class ARTS_PlayerController;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UCharacterInfoWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARTS_PlayerController* PlayerController;
    
public:
    UCharacterInfoWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSuitLevelText(int32 NewSuitLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSuitIntegrity(float NetSuitIntegrity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerNameText(const FString& NewPlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHealthValueText(float NewHealth, float NewMaxHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHealthRegenText(float NewHealthRegenValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHealthBarPercent(float NewHealthPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetExperienceText(int32 NewXP);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetExperienceBarPercent(float NewXPPercent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSuitLevelChanged(int32 Level, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void HandleHealthChanged(int32 CurrentResource, int32 OriginalResources);
    
    UFUNCTION(BlueprintCallable)
    void HandleExperienceChanged();
    
};

