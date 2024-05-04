#include "SolsticeUserInfo.h"

USolsticeUserInfo::USolsticeUserInfo() {
    this->PrimaryControllerId = -1;
    this->PlatformUserIndex = -1;
    this->LocalPlayerIndex = -1;
    this->bCanBeGuest = false;
    this->bIsGuest = false;
    this->InitializationState = ESolsticeUserInitializationState::Invalid;
}

ESolsticeUserAvailability USolsticeUserInfo::GetPrivilegeAvailability(ESolsticeUserPrivilege Privilege) const {
    return ESolsticeUserAvailability::Unknown;
}

FString USolsticeUserInfo::GetNickname() const {
    return TEXT("");
}

FUniqueNetIdRepl USolsticeUserInfo::GetNetId(ESolsticeUserOnlineContext Context) const {
    return FUniqueNetIdRepl{};
}

FString USolsticeUserInfo::GetDebugString() const {
    return TEXT("");
}

ESolsticeUserPrivilegeResult USolsticeUserInfo::GetCachedPrivilegeResult(ESolsticeUserPrivilege Privilege, ESolsticeUserOnlineContext Context) const {
    return ESolsticeUserPrivilegeResult::Unknown;
}


