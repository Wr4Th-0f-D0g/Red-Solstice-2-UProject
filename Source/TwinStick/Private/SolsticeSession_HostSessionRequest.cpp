#include "SolsticeSession_HostSessionRequest.h"

USolsticeSession_HostSessionRequest::USolsticeSession_HostSessionRequest() {
    this->OnlineMode = ESolsticeSessionOnlineMode::Offline;
    this->bUseLobbies = false;
    this->MaxPlayerCount = 8;
    this->Accessibility = ESolsticeGameAccessibility::Public;
    this->bAllowJoinInProgress = true;
    this->bAllowInvites = true;
    this->GameOnlineMode = EStrategyMissionGameType::Skirmish;
    this->bGameJoinsDisallowed = false;
}

void USolsticeSession_HostSessionRequest::UpdateSessionSettings(APlayerController* PlayerController) {
}

void USolsticeSession_HostSessionRequest::SetVehicleLimit(int32 VehicleLimit) {
}

void USolsticeSession_HostSessionRequest::SetBotCount(int32 BotCount) {
}


