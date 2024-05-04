#include "MainMenu.h"

UMainMenu::UMainMenu() {
    this->PatchnotesFileName = TEXT("patchnotes");
    this->bWaitingToQuit = false;
}

void UMainMenu::ShowArchiveWidget() {
}

void UMainMenu::QuitGame() {
}

void UMainMenu::LeaderboardsUploaded(ULeaderboardInfo* LeaderboardInfo, bool Success) {
}

void UMainMenu::InitiateQuitGame() {
}

FText UMainMenu::GetPatchNotesText() {
    return FText::GetEmpty();
}


