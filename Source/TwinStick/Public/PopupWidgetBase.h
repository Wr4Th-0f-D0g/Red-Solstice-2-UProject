#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/EngineTypes.h"
#include "InputCoreTypes.h"
#include "PopupWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UPopupWidgetBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RemovalTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FocusLostTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> DismissKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideTimerDuration;
    
    UPopupWidgetBase();

    UFUNCTION(BlueprintCallable)
    void StopRemovalTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartRemovalTimer();
    
    UFUNCTION(BlueprintCallable)
    void RetakeFocus();
    
    UFUNCTION(BlueprintCallable)
    void FinishSelfRemoval();
    
};

