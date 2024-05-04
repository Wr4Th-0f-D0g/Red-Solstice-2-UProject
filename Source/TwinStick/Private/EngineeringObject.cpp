#include "EngineeringObject.h"
#include "Net/UnrealNetwork.h"

UEngineeringObject::UEngineeringObject() {
    this->ItemCount = 0;
    this->bPrototype = false;
    this->BuildTimeElapsed = 0.00f;
    this->ProductionStatus = EProductionStatus::Invalid;
    this->bCompleted = false;
    this->EventIcon = NULL;
    this->ProductionInProgressWidgetClass = NULL;
    this->ProductionInProgressWidget = NULL;
}

void UEngineeringObject::TogglePause(bool InPaused) {
}

void UEngineeringObject::ShowProductionInProgressWidget() {
}

void UEngineeringObject::RemoveProductionInProgressWidget() {
}

void UEngineeringObject::OnRep_ItemTag() {
}

void UEngineeringObject::OnRep_Completed() {
}

int32 UEngineeringObject::GetNumberOfEngineers() const {
    return 0;
}

FStrategyInventoryItemData UEngineeringObject::GetItemData() const {
    return FStrategyInventoryItemData{};
}

void UEngineeringObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEngineeringObject, ItemTag);
    DOREPLIFETIME(UEngineeringObject, ItemCount);
    DOREPLIFETIME(UEngineeringObject, BuildStartTime);
    DOREPLIFETIME(UEngineeringObject, BuildTimeElapsed);
    DOREPLIFETIME(UEngineeringObject, ProductionStatus);
    DOREPLIFETIME(UEngineeringObject, bCompleted);
}


