#include "MainHUDWidgetBase.h"

UMainHUDWidgetBase::UMainHUDWidgetBase() {
    this->MiniMapSlot = NULL;
    this->WaveTimeProgressBar = NULL;
    this->WaveInfoMainBox = NULL;
    this->CurrentWaveText = NULL;
    this->FinalCountDownText = NULL;
    this->CycleObservedHeroText = NULL;
    this->InventorySlot = NULL;
    this->ReviveBox = NULL;
    this->ReviveNotificationText = NULL;
    this->ReviveDetailsText = NULL;
    this->GamepadDetonateNotification = NULL;
}

void UMainHUDWidgetBase::TagRemoved(ASolsticeCharacterBase* Character, FGameplayTag Tag) {
}

void UMainHUDWidgetBase::TagAdded(ASolsticeCharacterBase* Character, FGameplayTag Tag) {
}











