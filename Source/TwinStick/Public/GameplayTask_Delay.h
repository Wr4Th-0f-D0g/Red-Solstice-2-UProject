#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "SGTWaitDelayDelegateDelegate.h"
#include "GameplayTask_Delay.generated.h"

class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UGameplayTask_Delay : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTWaitDelayDelegate OnFinish;
    
    UGameplayTask_Delay(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGameplayTask_Delay* WaitDelay(UObject* WorldContextObject, FName TaskInstanceName, float Time);
    
};

