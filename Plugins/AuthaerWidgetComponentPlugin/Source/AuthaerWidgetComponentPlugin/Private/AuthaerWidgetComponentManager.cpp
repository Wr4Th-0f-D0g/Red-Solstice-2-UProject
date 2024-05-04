#include "AuthaerWidgetComponentManager.h"
#include "Templates/SubclassOf.h"

UAuthaerWidgetComponentManager::UAuthaerWidgetComponentManager() {
}

TArray<TSubclassOf<AActor>> UAuthaerWidgetComponentManager::GetClassesNotUsingAuthaerWidgetComponent() const {
    return TArray<TSubclassOf<AActor>>();
}


