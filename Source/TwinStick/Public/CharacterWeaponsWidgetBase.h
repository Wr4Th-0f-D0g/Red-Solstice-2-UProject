#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "CharacterWeaponsWidgetBase.generated.h"

class AHeroCharacterBase;
class ARTS_PlayerController;
class ASolsticeWeaponBase;
class UBorder;
class UButton;
class UImage;
class UPowerSuitComponent;
class USizeBox;
class UTextBlock;
class UTexture2D;
class UWeaponButtonWidgetBase;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UCharacterWeaponsWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* OverwatchAimText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ManualAimText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* OverwatchAimButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ManualAimButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* OverwatchHotkeyImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ManualAimTextBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* OverwatchTextBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ManualAimHotkeySizebox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* OverwatchHotkeySizebox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ExtraButtonsBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponButtonWidgetBase* PrimaryWeaponButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponButtonWidgetBase* SecondaryWeaponButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASolsticeWeaponBase> EmptyVehicleWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASolsticeWeaponBase> BaseVehicleWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PrimaryWeaponLowColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PrimaryWeaponActiveColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PrimaryWeaponInactiveColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimaryAmmoLowValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SecondaryWeaponLowColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SecondaryWeaponColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SecondaryWeaponInactiveColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondaryAmmoLowValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ManualAimActiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ManualAimInactiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* OverwatchActiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* OverwatchInactiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PrimaryWeaponActiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PrimaryWeaponInactiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SecondaryWeaponActiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SecondaryWeaponInactiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPowerSuitComponent* PowerSuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARTS_PlayerController* RTSController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeWeaponBase* CurrentPrimaryWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeWeaponBase* CurrentSecondaryWeapon;
    
public:
    UCharacterWeaponsWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSecondaryWeaponImage(ASolsticeWeaponBase* PrimaryWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePrimaryWeaponImage(ASolsticeWeaponBase* PrimaryWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SecondaryWeaponUnhoverered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SecondaryWeaponHoverered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrimaryWeaponUnhoverered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrimaryWeaponHoverered();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitWeaponImages(AHeroCharacterBase* HeroRef);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeButtonImage(UButton* Button, UTexture2D* NewTexture);
    
};

