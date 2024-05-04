#include "SolsticeOnlineLibrary.h"

USolsticeOnlineLibrary::USolsticeOnlineLibrary() {
}

void USolsticeOnlineLibrary::ShowLoginUI(const USolsticeUserInfo* UserInfo, bool OnlineOnly, bool ShowSkip) {
}

void USolsticeOnlineLibrary::ShowInviteUI(const USolsticeUserInfo* UserInfo) {
}

void USolsticeOnlineLibrary::ShowFriendsUI(const USolsticeUserInfo* UserInfo) {
}

void USolsticeOnlineLibrary::ShowAccountUpgradeUI(const USolsticeUserInfo* UserInfo) {
}

void USolsticeOnlineLibrary::ShowAccountCreationUI(const USolsticeUserInfo* UserInfo) {
}

bool USolsticeOnlineLibrary::KickPlayer(const UObject* WorldContextObject, APlayerController* PlayerToKick, FText KickReason) {
    return false;
}

bool USolsticeOnlineLibrary::IsDLCInstalled(int32 AppID) {
    return false;
}

bool USolsticeOnlineLibrary::CanPlay(const UObject* WorldContextObject, bool bCanPlayOnline) {
    return false;
}

bool USolsticeOnlineLibrary::BanPlayer(const UObject* WorldContextObject, APlayerController* PlayerToKick, FText BanReason) {
    return false;
}


