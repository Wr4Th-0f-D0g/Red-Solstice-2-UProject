#include "MediaPlayerActor.h"
#include "MediaSoundComponent.h"

AMediaPlayerActor::AMediaPlayerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->MediaSoundComponent = CreateDefaultSubobject<UMediaSoundComponent>(TEXT("MediaSound"));
    this->MediaPlayer = NULL;
    this->BinkMediaPlayer = NULL;
    this->LastSkipTime = -1.00f;
}

void AMediaPlayerActor::SkipCurrentCinematics() {
}

void AMediaPlayerActor::PlayCinematics(const FGameplayTag& CinematicTag, bool bPostMissionCinematic) {
}

void AMediaPlayerActor::PlayCinematicByURL(const FString& CinematicURL) {
}

void AMediaPlayerActor::PlayCinematicByAsset(UMediaSource* CinematicAssetToPlay) {
}

void AMediaPlayerActor::HandleMediaPlayerFinished() {
}

void AMediaPlayerActor::HandleMediaPlayerClosed() {
}

void AMediaPlayerActor::HandleMediaOpeningFailed(const FString& FailedUrl) {
}

FText AMediaPlayerActor::GetCurrentSubtitleForTime() const {
    return FText::GetEmpty();
}


