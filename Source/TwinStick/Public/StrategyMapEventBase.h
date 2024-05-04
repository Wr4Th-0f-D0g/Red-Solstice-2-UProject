#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EMapEventType.h"
#include "MarsTime.h"
#include "StrategyMapEventTriggeredDelegate.h"
#include "StrategyMapEventBase.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class TWINSTICK_API UStrategyMapEventBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle EventRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventListDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventListDisplayTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* EventListDisplayIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenInEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarsTime EventTriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarsTime RemainingTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStrategyMapEventTriggered OnStrategyMapEventTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPaused;
    
    UStrategyMapEventBase();

    UFUNCTION(BlueprintCallable)
    void SetEventTriggerTimeIn(int32 Hours);
    
    UFUNCTION(BlueprintCallable)
    void SetEventTriggerTime(const FMarsTime& TriggerTime);
    
    UFUNCTION(BlueprintCallable)
    void ResumeTimer();
    
    UFUNCTION(BlueprintCallable)
    void PauseTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteEvent();
    
};

