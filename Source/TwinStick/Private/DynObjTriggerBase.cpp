#include "DynObjTriggerBase.h"

UDynObjTriggerBase::UDynObjTriggerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumUses = -1;
    this->IsTriggerActive = true;
    this->DestroyObjectOnNoUses = false;
    this->ReactivationDelay = 0.00f;
    this->ReduceUsesOnTrigger = true;
    this->HideWidgetsOnDeactivation = false;
    this->ShowWidgetsOnActivation = false;
}

void UDynObjTriggerBase::SetShowWidgetsOnActivation(bool Val) {
}

void UDynObjTriggerBase::SetReduceUsesOnTrigger(bool Val) {
}

void UDynObjTriggerBase::SetReactivationDelay(float Val) {
}

void UDynObjTriggerBase::SetNumUses(int32 Val) {
}

void UDynObjTriggerBase::SetHideWidgetsOnDeactivation(bool Val) {
}

void UDynObjTriggerBase::SetDestroyObjectOnNoUses(bool Val) {
}

void UDynObjTriggerBase::ReduceNumUses() {
}

void UDynObjTriggerBase::ReactivateTrigger() {
}

void UDynObjTriggerBase::ProcessTriggerUse() {
}

bool UDynObjTriggerBase::GetShowWidgetsOnActivation() const {
    return false;
}

bool UDynObjTriggerBase::GetReduceUsesOnTrigger() const {
    return false;
}

float UDynObjTriggerBase::GetReactivationDelay() const {
    return 0.0f;
}

int32 UDynObjTriggerBase::GetNumUses() const {
    return 0;
}

bool UDynObjTriggerBase::GetIsTriggerActive() const {
    return false;
}

bool UDynObjTriggerBase::GetHideWidgetsOnDeactivation() const {
    return false;
}

bool UDynObjTriggerBase::GetDestroyObjectOnNoUses() const {
    return false;
}

void UDynObjTriggerBase::DeactivateTrigger() {
}


