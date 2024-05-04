#include "GlobalDefinitions.h"

UGlobalDefinitions::UGlobalDefinitions() {
    this->SaveDirectory = TEXT("/Saved/");
    this->ProfileSaveExtension = TEXT(".profile");
    this->CampaignSaveExtension = TEXT(".campaign");
    this->PremadeSaveExtension = TEXT(".json");
    this->ProjectDirectory = TEXT("RedSolstice2");
    this->bDemoGame = false;
    this->bFriendsOnlyLobbiesForDemo = false;
    this->bAllowSubscribersToBypassDemoFriends = false;
    this->ArmoryLevelName = TEXT("Strategy_layer_world_map");
    this->MainMenuLevelName = TEXT("MainMenu");
    this->ArmoryListenURL = TEXT("/Game/Maps/Strategy_layer_world_map?listen");
}

FString UGlobalDefinitions::GetSavePathForGame(FSolsticeCampaignID& CampaignID, ESaveGameType SaveType) const {
    return TEXT("");
}

FString UGlobalDefinitions::GetSaveDirectoryForCampaign(FSolsticeCampaignID& CampaignID) const {
    return TEXT("");
}

FString UGlobalDefinitions::GetSaveDirectory() const {
    return TEXT("");
}

FString UGlobalDefinitions::GetProfileSaveDirectory() const {
    return TEXT("");
}

FString UGlobalDefinitions::GetPremadeSaveDirectory() const {
    return TEXT("");
}

bool UGlobalDefinitions::GetLoadDirectoryForCampaign(const FSolsticeCampaignID& CampaignID, FString& OutDirectory) const {
    return false;
}

bool UGlobalDefinitions::GetLastSaveGameForCampaign(const FSolsticeCampaignID& CampaignID, FString& OutFilename, ESaveGameType SaveType) const {
    return false;
}

FString UGlobalDefinitions::GetConfigDirectory() const {
    return TEXT("");
}

FString UGlobalDefinitions::GetCampaignSaveDirectory() const {
    return TEXT("");
}

bool UGlobalDefinitions::GetAllSavesForCampaign(const FSolsticeCampaignID& CampaignID, TArray<FSolsticeSaveGameInfo>& SaveGames) const {
    return false;
}

bool UGlobalDefinitions::DoesSaveAlreadyExist(const FString& Filename) const {
    return false;
}

bool UGlobalDefinitions::DeleteSave(const FString& Filename) {
    return false;
}

bool UGlobalDefinitions::DeleteCampaign(const FSolsticeCampaignID& CampaignID) {
    return false;
}


