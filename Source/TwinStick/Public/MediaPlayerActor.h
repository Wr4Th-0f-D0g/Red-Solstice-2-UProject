#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "CampaignCinematic.h"
#include "CinematicPlayedDelegate.h"
#include "MediaPlayerActor.generated.h"

class UBinkMediaPlayer;
class UMediaPlayer;
class UMediaSoundComponent;
class UMediaSource;

UCLASS(Blueprintable)
class TWINSTICK_API AMediaPlayerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* MediaSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* BinkMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCampaignCinematic ActiveCinematic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicPlayed OnCinematicStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicPlayed OnCinematicFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate ForceClearMediaPlayer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastSkipTime;
    
    AMediaPlayerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SkipCurrentCinematics();
    
    UFUNCTION(BlueprintCallable)
    void PlayCinematics(const FGameplayTag& CinematicTag, bool bPostMissionCinematic);
    
    UFUNCTION(BlueprintCallable)
    void PlayCinematicByURL(const FString& CinematicURL);
    
    UFUNCTION(BlueprintCallable)
    void PlayCinematicByAsset(UMediaSource* CinematicAssetToPlay);
    
    UFUNCTION(BlueprintCallable)
    void HandleMediaPlayerFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleMediaPlayerClosed();
    
    UFUNCTION(BlueprintCallable)
    void HandleMediaOpeningFailed(const FString& FailedUrl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentSubtitleForTime() const;
    
};

