#include "SolsticeUserInitializeParams.h"

FSolsticeUserInitializeParams::FSolsticeUserInitializeParams() {
    this->LocalPlayerIndex = 0;
    this->ControllerId = 0;
    this->PlatformUserIndex = 0;
    this->PlatformUser = 0;
    this->RequestedPrivilege = ESolsticeUserPrivilege::CanPlay;
    this->OnlineContext = ESolsticeUserOnlineContext::Game;
    this->bCanCreateNewLocalPlayer = false;
    this->bCanUseGuestLogin = false;
    this->bSuppressLoginScreen = false;
    this->bSuppressLoginErrors = false;
}

