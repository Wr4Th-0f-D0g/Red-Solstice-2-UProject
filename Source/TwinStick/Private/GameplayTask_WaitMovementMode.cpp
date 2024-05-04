#include "GameplayTask_WaitMovementMode.h"

UGameplayTask_WaitMovementMode::UGameplayTask_WaitMovementMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGameplayTask_WaitMovementMode::OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

UGameplayTask_WaitMovementMode* UGameplayTask_WaitMovementMode::CreateWaitMovementModeChange(UObject* WorldContextObject, FName TaskInstanceName, TEnumAsByte<EMovementMode> NewMode) {
    return NULL;
}


