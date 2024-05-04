#include "CallToActionBase.h"

UCallToActionBase::UCallToActionBase() {
    this->bCanBeDismissedWithRMP = false;
}

void UCallToActionBase::SetContextObject(UObject* InContextObject) {
}

FGameplayTag UCallToActionBase::GetFirstTag() const {
    return FGameplayTag{};
}






void UCallToActionBase::AddCallToActionTag(FGameplayTag InTag) {
}

void UCallToActionBase::AddCallToActionName(FName InName) {
}


