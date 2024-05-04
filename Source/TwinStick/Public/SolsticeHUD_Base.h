#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "GameFramework/HUD.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "DialogLine.h"
#include "EMissionStatus.h"
#include "MissionStatus.h"
#include "SolsticeHUD_Base.generated.h"

class UCommonActivatableWidget;
class UPopupWidgetBase;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API ASolsticeHUD_Base : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnPreClientTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPopupWidgetBase*> GamePopupWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> RegisteredMainWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* GamepadFocusDisplay;
    
    ASolsticeHUD_Base(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSolsticeNotification(UCommonActivatableWidget* NotificationWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMissionTitle(const FText& MissionText, EMissionStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMission(const FMissionStatus& Mission);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDialog(const FDialogLine& DialogLine, const FText& LineText);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadFocusDisplayVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllPopupWidgets();
    
    UFUNCTION(BlueprintCallable)
    void RegisterPopupWidget(UPopupWidgetBase* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideDialog();
    
    UFUNCTION(BlueprintCallable)
    void HandlePreClientTravel(const FString& URL, TEnumAsByte<ETravelType> TravelType, bool bSeamless);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameWindowFocusChange(bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddWidgetToMainCanvas(UWidget* Widget, int32 ZOrder);
    
};

