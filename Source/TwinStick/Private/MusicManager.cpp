#include "MusicManager.h"

UMusicManager::UMusicManager() {
    this->bPrintDebug = false;
}

void UMusicManager::StopMenuMusic_Implementation() {
}

void UMusicManager::StartMenuMusic_Implementation(FGameplayTag MusicType) {
}

void UMusicManager::StartCombatLayerMusic_Implementation() {
}

void UMusicManager::SetCombatLayerMusicLevel_Implementation(int32 InLevel, bool bPlayerCrowded) {
}

void UMusicManager::SetCombatLayerMusicIndoor_Implementation(bool bIndoor) {
}

USoundInstanceScheduledChangeObjtBase* UMusicManager::ScheduleInstanceFadeOutAndEnd(FFMODEventInstance InEventInstance, float InFadeTime, float InDelay) {
    return NULL;
}

USoundInstanceScheduledChangeObjtBase* UMusicManager::ScheduleInstanceChangeVolume(FFMODEventInstance InEventInstance, float InDelay, float InChangePeriod, float InDesiredVolume, UCurveFloat* InCurve) {
    return NULL;
}

USoundInstanceScheduledChangeObjtBase* UMusicManager::ScheduleInstanceChangeParameterSequential(FFMODEventInstance InEventInstance, float InDesiredParameterValue, FName InParameterName, float InDelay) {
    return NULL;
}

USoundInstanceScheduledChangeObjtBase* UMusicManager::ScheduleInstanceChangeParameter(FFMODEventInstance InEventInstance, float InDelay, float InChangePeriod, float InDesiredParameterValue, FName InParameterName, UCurveFloat* InCurve) {
    return NULL;
}

void UMusicManager::MuteMusic_Implementation(bool bMuted) {
}



void UMusicManager::EndCombatLayerMusic_Implementation() {
}


