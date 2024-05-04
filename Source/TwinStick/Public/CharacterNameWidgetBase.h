#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "ActorIndicatorWidgetInterface.h"
#include "EDamageGroup.h"
#include "CharacterNameWidgetBase.generated.h"

class AHeroCharacterBase;
class ASolsticeWeaponBase;
class UCanvasPanel;
class UImage;
class UIndicatorDescriptor;
class UProgressBar;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UCharacterNameWidgetBase : public UUserWidget, public IActorIndicatorWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* EneryProgressBarPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* HealthProgressBarPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* OverwatchTextBoxPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* OverwatchImagePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayerNameTextBoxPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CurrentAmmoTextBoxPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CurrentAmmoImagePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ArmorProgressBarPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ReloadingBarPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ReloadingTextPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* AmmoCanvasPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfinityText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverwatchFText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ReadyFText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChargingFText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CriticalFText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArmoryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AmmoEmptyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AmmoColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* Hero;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AmmoImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIndicatorDescriptor* Descriptor;
    
public:
    UCharacterNameWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMessage(const FText& MessageText, const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetSet();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleVisibilityChanged(bool bHidden, bool bHideMinimap);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AmmoImageChanged(UTexture2D* Texture, EDamageGroup DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AmmoChanged(ASolsticeWeaponBase* Weapon, int32 PrevAmmo, int32 InCurrentAmmo);
    

    // Fix for true pure virtual functions not being implemented
};

