#include "ChroniclesGameInstance.h"

UChroniclesGameInstance::UChroniclesGameInstance() {
    this->ChangeSetID = 21893;
    this->bLeavingGame = false;
    this->VersionID = TEXT("2.999");
    this->RequestedSession = NULL;
    this->HostSettings = NULL;
    this->AreaSkillActivationClass = NULL;
    this->GlobalDefinitions = NULL;
    this->OptionsRelatedDefinitions = NULL;
    this->CurrentGameState = EGameState::EGT_MainMenu;
    this->EffectsVCA = NULL;
    this->MusicVCA = NULL;
    this->DialogueVCA = NULL;
    this->AmbianceVCA = NULL;
    this->SilenceSound = NULL;
    this->MuteSound = NULL;
    this->OptionsObject = NULL;
    this->NativeDefaultLoadingScreenClass = NULL;
    this->NativeGameMapLoadingScreenClass = NULL;
    this->LoadingWidgetCombatRef = NULL;
    this->PatchnotesFileName = TEXT("patchnotes");
    this->MusicManagerType = NULL;
    this->MusicManagerInstance = NULL;
    this->bWantsNoStratagems = false;
}

void UChroniclesGameInstance::UnloadCampaign() {
}

void UChroniclesGameInstance::ToggleIngameMenu() {
}

void UChroniclesGameInstance::TakeScreenshot() {
}

void UChroniclesGameInstance::StartSilenceSound() {
}



void UChroniclesGameInstance::ShowMainMenu() {
}



void UChroniclesGameInstance::ShowDefaultLoadingScreen(bool bAllowGameThread) {
}


void UChroniclesGameInstance::ShowCampaignSetup() {
}

void UChroniclesGameInstance::SetOfflineGame(bool bOffline) {
}

void UChroniclesGameInstance::SendScreenshot(const FString& FeedbackString) {
}

void UChroniclesGameInstance::ReturnToMainMenuShowDialog(FGameplayTag NotificationTag, const FString& AdditionalString) {
}

bool UChroniclesGameInstance::RequestChangeLog() {
    return false;
}

bool UChroniclesGameInstance::RequestAlphaIsOnline() {
    return false;
}

void UChroniclesGameInstance::PreLoadMap(const FString& Str) {
}

void UChroniclesGameInstance::PreClientTravel(const FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel) {
}

void UChroniclesGameInstance::PostLoadMapWithWorld(UWorld* World) {
}


void UChroniclesGameInstance::OpenTutorialLevel(FName TutorialLevelName) {
}

void UChroniclesGameInstance::OpenOptionsMenu() {
}

void UChroniclesGameInstance::OpenMainMenu() {
}

void UChroniclesGameInstance::OpenIntroMission(FName IntroMissionName) {
}

void UChroniclesGameInstance::OpenCredits() {
}

void UChroniclesGameInstance::OpenArmorySkirmish(EMatchType MatchType) {
}

void UChroniclesGameInstance::OpenArmoryPrivate(bool bLeaveGame) {
}

void UChroniclesGameInstance::OpenArmoryCampaign() {
}


bool UChroniclesGameInstance::IsOfflineGame() const {
    return false;
}

bool UChroniclesGameInstance::IsAlphaOnline() const {
    return false;
}



void UChroniclesGameInstance::HideDefaultLoadingScreen() {
}

void UChroniclesGameInstance::HandleSystemMessage(FGameplayTag MessageType, FGameplayTag NotificationTag, const FString& Additional) {
}

void UChroniclesGameInstance::HandlePrivilegeChanged(const USolsticeUserInfo* UserInfo, ESolsticeUserPrivilege Privilege, ESolsticeUserAvailability OldAvailability, ESolsticeUserAvailability NewAvailability) {
}

void UChroniclesGameInstance::HandleLevelTornDown(UWorld* InWorld) {
}

FText UChroniclesGameInstance::GetPatchNotesText() {
    return FText::GetEmpty();
}

UOptionsObject* UChroniclesGameInstance::GetOptionsObject() const {
    return NULL;
}

UFMODVCA* UChroniclesGameInstance::GetMusicVCA() const {
    return NULL;
}

bool UChroniclesGameInstance::GetKeyIconsForKey(FKeyIconStruct& OutKeyStruct, FKey InKey) {
    return false;
}

bool UChroniclesGameInstance::GetIsSoundEnabled() {
    return false;
}

USolsticeSession_HostSessionRequest* UChroniclesGameInstance::GetHostSettings() const {
    return NULL;
}

UGraphicsOptionsObject* UChroniclesGameInstance::GetGraphicsOptions() const {
    return NULL;
}

UGameplayOptionsObject* UChroniclesGameInstance::GetGameplayOptions() const {
    return NULL;
}

UFMODVCA* UChroniclesGameInstance::GetEffectsVCA() const {
    return NULL;
}

UFMODVCA* UChroniclesGameInstance::GetDialogueVCA() const {
    return NULL;
}

UControlsOptionsObject* UChroniclesGameInstance::GetControlOptions() const {
    return NULL;
}

int32 UChroniclesGameInstance::GetChangeSetID() const {
    return 0;
}

UAudioOptionsObject* UChroniclesGameInstance::GetAudioOptions() const {
    return NULL;
}

UFMODVCA* UChroniclesGameInstance::GetAmbianceVCA() const {
    return NULL;
}















void UChroniclesGameInstance::EndSilenceSound() {
}

void UChroniclesGameInstance::ClearAchievements() {
}

void UChroniclesGameInstance::CancelScreenshot(const FString& FeedbackString) {
}


