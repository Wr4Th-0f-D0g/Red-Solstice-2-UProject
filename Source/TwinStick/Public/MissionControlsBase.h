#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EStrategyInteractionState.h"
#include "StrategyMissionTimer.h"
#include "MissionControlsBase.generated.h"

class AStrategyMapActor;
class AStrategyMission;
class UBorder;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UMissionControlsBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ControlsSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* LaunchMissionBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyMission> Mission;
    
    UMissionControlsBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MissionExpired(const FStrategyMissionTimer& MissionStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionStatusChanged(const FStrategyMissionTimer& InMissionStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionChanged(AStrategyMapActor* MapActor, EStrategyInteractionState InteractionState);
    
};

