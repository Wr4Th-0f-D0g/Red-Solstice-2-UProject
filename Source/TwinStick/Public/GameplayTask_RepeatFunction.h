#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "SGTRepeatedActionDelegateDelegate.h"
#include "GameplayTask_RepeatFunction.generated.h"

class UGameplayTask_RepeatFunction;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UGameplayTask_RepeatFunction : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTRepeatedActionDelegate OnPerformAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTRepeatedActionDelegate OnFinished;
    
    UGameplayTask_RepeatFunction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGameplayTask_RepeatFunction* RepeatAction(UObject* WorldContextObject, FName TaskInstanceName, float TimeBetweenActions, int32 TotalActionCount);
    
};

