#include "SolsticeFrontEndComponent.h"

USolsticeFrontEndComponent::USolsticeFrontEndComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PressStartWidget = NULL;
}

void USolsticeFrontEndComponent::OnUserInitialized(const USolsticeUserInfo* UserInfo, bool bBSuccess, FText Error, ESolsticeUserPrivilege RequestedPrivilege, ESolsticeUserOnlineContext OnlineContext) {
}


