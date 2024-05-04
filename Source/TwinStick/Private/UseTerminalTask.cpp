#include "UseTerminalTask.h"

UUseTerminalTask::UUseTerminalTask() {
}

UUseTerminalTask* UUseTerminalTask::StartUseTerminalTask(UObject* WorldContextObject, FText MissionName, FUseTerminalParameters Parameters) {
    return NULL;
}

void UUseTerminalTask::HandleTerminalActivated(AActor* UsableObject, const TArray<APawn*>& Instigators, bool bSuccess) {
}

void UUseTerminalTask::HandleLinkedObjectDestroyed(APowerConsumer* Consumer, AActor* DestroyedObject) {
}


