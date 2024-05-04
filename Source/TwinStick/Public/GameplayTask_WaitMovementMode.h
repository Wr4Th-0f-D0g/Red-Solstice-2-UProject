#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTask.h"
#include "SGTMovementModeChangedDelegateDelegate.h"
#include "GameplayTask_WaitMovementMode.generated.h"

class ACharacter;
class UGameplayTask_WaitMovementMode;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API UGameplayTask_WaitMovementMode : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSGTMovementModeChangedDelegate OnChange;
    
    UGameplayTask_WaitMovementMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGameplayTask_WaitMovementMode* CreateWaitMovementModeChange(UObject* WorldContextObject, FName TaskInstanceName, TEnumAsByte<EMovementMode> NewMode);
    
};

