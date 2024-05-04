#include "BotManager.h"

UBotManager::UBotManager() {
    this->CustomBotTable = NULL;
    this->BotStatusClass = NULL;
    this->BotLevelBuffClass = NULL;
    this->SelectedBot = NULL;
}

void UBotManager::HandleBotDied(UBotStatus* InBotStatus, const FMarsTime& InCampaignTime) {
}

void UBotManager::DeployBlackOps(UBotStatus* BotStatus, ARegion* TargetRegion) {
}

UBotStatus* UBotManager::CreateCustomBot(const UObject* WorldContextObject, FGameplayTag CustomBotTag, int32 BotLevel, bool bConsumeLevelData, bool bOverrideData) {
    return NULL;
}

bool UBotManager::CanDeployBlackOps(UBotStatus* BotStatus, ARegion* TargetRegion) const {
    return false;
}

bool UBotManager::BotNameIsAvailable(const FString& NewName) const {
    return false;
}

UBotStatus* UBotManager::AddCustomBot(FGameplayTag InBotTag) {
    return NULL;
}

UBotStatus* UBotManager::AddClassBot(FGameplayTag InBotTag) {
    return NULL;
}

void UBotManager::AddBotToRoster(UBotStatus* BotStatus) {
}


