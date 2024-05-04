#include "ConstructionObject.h"
#include "Net/UnrealNetwork.h"

UConstructionObject::UConstructionObject() {
    this->ConstructionTimeElapsed = 0.00f;
    this->bOutpost = false;
    this->bCompleted = false;
    this->EventIcon = NULL;
    this->ConstructionInProgressWidgetClass = NULL;
    this->ConstructionInProgressWidget = NULL;
    this->bPaused = false;
}

void UConstructionObject::ShowConstructionInProgressWidget() {
}

void UConstructionObject::RemoveConstructionInProgressWidget() {
}

void UConstructionObject::OnRep_UpgradeTag() {
}

FStrategyUpgradeItemData UConstructionObject::GetItemData() const {
    return FStrategyUpgradeItemData{};
}

void UConstructionObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UConstructionObject, UpgradeTag);
    DOREPLIFETIME(UConstructionObject, ConstructionTimeElapsed);
}


