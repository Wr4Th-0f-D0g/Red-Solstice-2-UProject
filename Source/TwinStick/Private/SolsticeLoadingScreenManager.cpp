#include "SolsticeLoadingScreenManager.h"
#include "Templates/SubclassOf.h"

USolsticeLoadingScreenManager::USolsticeLoadingScreenManager() {
    this->LoadingScreenWidgetClass = NULL;
}

void USolsticeLoadingScreenManager::SetLoadingScreenContentWidget(TSubclassOf<UUserWidget> NewWidgetClass) {
}

TSubclassOf<UUserWidget> USolsticeLoadingScreenManager::GetLoadingScreenContentWidget() const {
    return NULL;
}


