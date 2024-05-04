#include "DialogActor.h"
#include "FMODAudioComponent.h"

ADialogActor::ADialogActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("DialogAC"));
    this->bIsPlayingAudio = false;
    this->bIsShowingText = false;
    this->DialogAC = (UFMODAudioComponent*)RootComponent;
    this->DialogSpeed = 150.00f;
    this->CooldownBetweenLines = 1.00f;
    this->DialogDT = NULL;
    this->MissionDT = NULL;
}

void ADialogActor::SkipActiveLine() {
}

bool ADialogActor::PlayMissionDialog(const FMissionDialog& InDialog, bool FromAutoplay) {
    return false;
}

bool ADialogActor::PlayExternalDialog(FName DialogName, bool bMulticast) {
    return false;
}

void ADialogActor::PlayDialog(const FDialog& InDialog) {
}

void ADialogActor::PauseDialog() {
}

void ADialogActor::Multicast_PlayMissionDialog_Implementation(const FMissionDialog& InDialog, bool FromAutoplay) {
}

void ADialogActor::Multicast_PlayExternalDialog_Implementation(const FName& DialogName) {
}

void ADialogActor::HandleTextLineFinished() {
}

void ADialogActor::HandleCooldownFinished() {
}

void ADialogActor::HandleAudioLineFinished() {
}

void ADialogActor::ContinueDialog() {
}

void ADialogActor::ClientsPlayMissionDialog(const FMissionDialog& InDialog, bool FromAutoplay) {
}

void ADialogActor::ClearAllDialogs() {
}


