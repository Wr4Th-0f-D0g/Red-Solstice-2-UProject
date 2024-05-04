#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FMODEventInstance.h"
#include "GameplayTagContainer.h"
#include "MusicManager.generated.h"

class AMissionSetupActor;
class UCurveFloat;
class USoundInstanceScheduledChangeObjtBase;

UCLASS(Blueprintable)
class TWINSTICK_API UMusicManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrintDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundInstanceScheduledChangeObjtBase*> ScheduledInstanceChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USoundInstanceScheduledChangeObjtBase*> FinishedChangesTemp;
    
public:
    UMusicManager();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopMenuMusic();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMenuMusic(FGameplayTag MusicType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartCombatLayerMusic();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCombatLayerMusicLevel(int32 InLevel, bool bPlayerCrowded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCombatLayerMusicIndoor(bool bIndoor);
    
    UFUNCTION(BlueprintCallable)
    USoundInstanceScheduledChangeObjtBase* ScheduleInstanceFadeOutAndEnd(FFMODEventInstance InEventInstance, float InFadeTime, float InDelay);
    
    UFUNCTION(BlueprintCallable)
    USoundInstanceScheduledChangeObjtBase* ScheduleInstanceChangeVolume(FFMODEventInstance InEventInstance, float InDelay, float InChangePeriod, float InDesiredVolume, UCurveFloat* InCurve);
    
    UFUNCTION(BlueprintCallable)
    USoundInstanceScheduledChangeObjtBase* ScheduleInstanceChangeParameterSequential(FFMODEventInstance InEventInstance, float InDesiredParameterValue, FName InParameterName, float InDelay);
    
    UFUNCTION(BlueprintCallable)
    USoundInstanceScheduledChangeObjtBase* ScheduleInstanceChangeParameter(FFMODEventInstance InEventInstance, float InDelay, float InChangePeriod, float InDesiredParameterValue, FName InParameterName, UCurveFloat* InCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MuteMusic(bool bMuted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Tick(float DeltaTIme);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_MissionSetupActorChanged(AMissionSetupActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndCombatLayerMusic();
    
};

