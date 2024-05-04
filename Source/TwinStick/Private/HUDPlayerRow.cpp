#include "HUDPlayerRow.h"

UHUDPlayerRow::UHUDPlayerRow() : UUserWidget(FObjectInitializer::Get()) {
    this->ClassIcon = NULL;
    this->SquadMemberName = NULL;
    this->HealthBar = NULL;
    this->EnergyBar = NULL;
    this->PrimaryAmmoBar = NULL;
    this->SecondaryAmmoBar = NULL;
    this->PingBorder = NULL;
    this->PingSizebox = NULL;
}

void UHUDPlayerRow::SetPlayerStateContext_Implementation(ASolsticePlayerState* InPlayerState) {
}

bool UHUDPlayerRow::IsAlive() const {
    return false;
}

ASolsticePlayerState* UHUDPlayerRow::GetPlayerState() const {
    return NULL;
}

FLinearColor UHUDPlayerRow::GetPlayerIconColor() const {
    return FLinearColor{};
}


