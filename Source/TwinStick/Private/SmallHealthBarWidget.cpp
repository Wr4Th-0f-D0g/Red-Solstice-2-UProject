#include "SmallHealthBarWidget.h"

USmallHealthBarWidget::USmallHealthBarWidget() {
    this->bBindHealthChanged = true;
    this->bWarnIfHighResistance = false;
    this->HighResistanceWarningTreshold = 0.50f;
    this->OldHPPercent = 0.00f;
    this->HealthComp = NULL;
}



void USmallHealthBarWidget::HandleHealthChanged(int32 CurrentResources, int32 OriginalResources) {
}

void USmallHealthBarWidget::HandleActorKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied) {
}

void USmallHealthBarWidget::HandleActorDamaged(AActor* DamagedActor, const FDamage& DamageInfo) {
}


