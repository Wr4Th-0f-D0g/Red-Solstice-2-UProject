#include "PlatformSaveManager.h"
#include "Templates/SubclassOf.h"

UPlatformSaveManager::UPlatformSaveManager() {
    this->ProfileSaveExtension = TEXT(".profile");
    this->CampaignSaveExtension = TEXT(".campaign");
    this->LoadoutSaveExtension = TEXT(".json");
}

bool UPlatformSaveManager::SaveWeaponTemplates(UCampaign* ActiveCampaign, TSubclassOf<ASolsticeWeaponBase> WeaponClass, const TArray<FSavedCharacterWeaponData>& WeaponTemplates) {
    return false;
}

bool UPlatformSaveManager::SaveLoadoutForMarineClassInSlot(ESolsticeHeroClass HeroClass, int32 Slot, const FString& LoadoutName, const FSavedCharacterData& CharacterData, UCampaign* ActiveCampaign) const {
    return false;
}

bool UPlatformSaveManager::IsSaveSlotFree(ESolsticeHeroClass HeroClass, int32 Slot, UCampaign* ActiveCampaign) const {
    return false;
}

FString UPlatformSaveManager::GetWeaponTemplateSaveDirectory(UCampaign* ActiveCampaign) const {
    return TEXT("");
}

FString UPlatformSaveManager::GetUserProfileSaveFileNameFor(EProfileSaveType ProfileSaveType) const {
    return TEXT("");
}

FString UPlatformSaveManager::GetUserLoadoutFileNameFor(ESolsticeHeroClass HeroClass, int32 Slot, UCampaign* ActiveCampaign) const {
    return TEXT("");
}

FString UPlatformSaveManager::GetUserCampaignSaveDirectory() const {
    return TEXT("");
}

bool UPlatformSaveManager::GetSpecialSaveFileNameForCampaign(FSolsticeCampaignID& CampaignID, ESaveGameType SaveType, FString& OutSaveFileName) const {
    return false;
}

bool UPlatformSaveManager::GetSavedWeaponVariationsFor(UCampaign* ActiveCampaign, TSubclassOf<ASolsticeWeaponBase> WeaponClass, TArray<FSavedCharacterWeaponData>& OutWeaponVariations) const {
    return false;
}

FString UPlatformSaveManager::GetSaveDirectoryForCampaign(FSolsticeCampaignID& CampaignID) const {
    return TEXT("");
}

FString UPlatformSaveManager::GetRootSaveDirectory() const {
    return TEXT("");
}

FString UPlatformSaveManager::GetRootGameDataDirectory() const {
    return TEXT("");
}

FString UPlatformSaveManager::GetRootConfigDirectory() const {
    return TEXT("");
}

FString UPlatformSaveManager::GetProfileSaveDirectory() const {
    return TEXT("");
}

int32 UPlatformSaveManager::GetMaxNumCampaignSaves() const {
    return 0;
}

int32 UPlatformSaveManager::GetMaxNumCampaigns() const {
    return 0;
}

bool UPlatformSaveManager::GetLoadoutForMarineClassInSlot(ESolsticeHeroClass HeroClass, int32 Slot, FSavedCharacterData& OutCharacterData, UCampaign* ActiveCampaign) const {
    return false;
}

bool UPlatformSaveManager::GetLoadDirectoryForCampaign(const FSolsticeCampaignID& CampaignID, FString& OutDirectory) const {
    return false;
}

bool UPlatformSaveManager::GetLastSaveGameForCampaign(const FSolsticeCampaignID& CampaignID, FString& OutFilename, ESaveGameType SaveType) const {
    return false;
}

FString UPlatformSaveManager::GetCampaignSaveDirectoryFor(FSolsticeCampaignID& CampaignID) const {
    return TEXT("");
}

FString UPlatformSaveManager::GetCampaignSaveDirectory() const {
    return TEXT("");
}

TArray<FSolsticeCampaignID> UPlatformSaveManager::GetAllUserCampaigns() const {
    return TArray<FSolsticeCampaignID>();
}

bool UPlatformSaveManager::GetAllSavesForCampaign(const FSolsticeCampaignID& CampaignID, TArray<FSolsticeSaveGameInfo>& SaveGames) const {
    return false;
}

bool UPlatformSaveManager::GetAllLoadoutsForMarineClass(ESolsticeHeroClass HeroClass, TArray<FSavedCharacterData>& OutLoadouts, UCampaign* ActiveCampaign) const {
    return false;
}

bool UPlatformSaveManager::DoesCampaignSaveExist(UCampaign* ActiveCampaign, const FString& Name, FString& OutFullPath) const {
    return false;
}

bool UPlatformSaveManager::DeleteLoadoutForMarineClassInSlot(ESolsticeHeroClass HeroClass, int32 Slot, UCampaign* ActiveCampaign) {
    return false;
}

bool UPlatformSaveManager::DeleteFiles(const TArray<FString>& FilePaths) {
    return false;
}

bool UPlatformSaveManager::DeleteFile(const FString& FilePath) {
    return false;
}

bool UPlatformSaveManager::DeleteCampaignSave(UCampaign* ActiveCampaign, const FString& Name) {
    return false;
}

bool UPlatformSaveManager::DeleteCampaign(const FSolsticeCampaignID& CampaignID) {
    return false;
}

void UPlatformSaveManager::ClearCachedPremades() {
}

bool UPlatformSaveManager::CanCreateNewCampaign(int32& OutNumCampaigns) {
    return false;
}

bool UPlatformSaveManager::CanCreateCampaignSave(FSolsticeCampaignID& CampaignID, int32& OutNumCampaignSaves) {
    return false;
}


