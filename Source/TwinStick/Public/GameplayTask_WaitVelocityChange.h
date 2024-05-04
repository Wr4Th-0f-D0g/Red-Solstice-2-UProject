#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTask.h"
#include "SGTWaitVelocityChangeDelegateDelegate.h"
#include "GameplayTask_WaitVelocityChange.generated.h"

class UGameplayTask_WaitVelocityChange;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UGameplayTask_WaitVelocityChange : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTWaitVelocityChangeDelegate OnVelocityChange;
    
    UGameplayTask_WaitVelocityChange(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGameplayTask_WaitVelocityChange* CreateWaitVelocityChange(UObject* WorldContextObject, FName TaskInstanceName, FVector Direction, float MinimumMagnitude);
    
};

