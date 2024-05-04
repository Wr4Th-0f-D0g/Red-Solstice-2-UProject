#include "AsyncAction_SolsticeUserInitialize.h"

UAsyncAction_SolsticeUserInitialize::UAsyncAction_SolsticeUserInitialize() {
}

UAsyncAction_SolsticeUserInitialize* UAsyncAction_SolsticeUserInitialize::LoginForOnlinePlay(USolsticeUserSubsystem* Target, int32 LocalPlayerIndex, bool bSuppressLoginScreen) {
    return NULL;
}

UAsyncAction_SolsticeUserInitialize* UAsyncAction_SolsticeUserInitialize::InitializeForLocalPlay(USolsticeUserSubsystem* Target, int32 LocalPlayerIndex, int32 PrimaryInputDevice, bool bCanUseGuestLogin) {
    return NULL;
}

void UAsyncAction_SolsticeUserInitialize::HandleInitializationComplete(const USolsticeUserInfo* UserInfo, bool bSuccess, FText Error, ESolsticeUserPrivilege RequestedPrivilege, ESolsticeUserOnlineContext OnlineContext) {
}


