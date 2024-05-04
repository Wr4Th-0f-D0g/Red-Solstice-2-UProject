#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dialog.h"
#include "DialogFinishedDelegate.h"
#include "MissionDialog.h"
#include "DialogActor.generated.h"

class UDataTable;
class UFMODAudioComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ADialogActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShowingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* DialogAC;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DialogSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownBetweenLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DialogDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialog> QueuedDialogs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogFinished OnDialogFinished;
    
    ADialogActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SkipActiveLine();
    
    UFUNCTION(BlueprintCallable)
    bool PlayMissionDialog(const FMissionDialog& InDialog, bool FromAutoplay);
    
    UFUNCTION(BlueprintCallable)
    bool PlayExternalDialog(FName DialogName, bool bMulticast);
    
    UFUNCTION(BlueprintCallable)
    void PlayDialog(const FDialog& InDialog);
    
    UFUNCTION(BlueprintCallable)
    void PauseDialog();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayMissionDialog(const FMissionDialog& InDialog, bool FromAutoplay);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayExternalDialog(const FName& DialogName);
    
    UFUNCTION(BlueprintCallable)
    void HandleTextLineFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleCooldownFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleAudioLineFinished();
    
    UFUNCTION(BlueprintCallable)
    void ContinueDialog();
    
    UFUNCTION(BlueprintCallable)
    void ClientsPlayMissionDialog(const FMissionDialog& InDialog, bool FromAutoplay);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllDialogs();
    
};

