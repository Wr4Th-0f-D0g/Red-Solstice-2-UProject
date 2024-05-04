#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAirSupportLevel.h"
#include "EArtillerySupportLevel.h"
#include "ECorporation.h"
#include "EDifficulty.h"
#include "EHordeArrivalTime.h"
#include "EMatchType.h"
#include "ESecondaryMissionFrequency.h"
#include "ESolsticeHeroClass.h"
#include "EStrategyMissionGameType.h"
#include "SolsticeSession_SearchResult.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeSession_SearchResult : public UObject {
    GENERATED_BODY()
public:
    USolsticeSession_SearchResult();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<ESolsticeHeroClass, int32> GetTeamComposition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStringSetting(FName Key, FString& Value, bool& bFoundValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESecondaryMissionFrequency GetSecondaryMissionFrequency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPingInMs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOpenPublicConnections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOpenPrivateConnections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPublicConnections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMatchType GetMatchType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIntSetting(FName Key, int32& Value, bool& bFoundValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInfestationLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHordeArrivalTime GetHordeArrivalTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStrategyMissionGameType GetGameType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGameName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGameMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWaveCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentVehicleCap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentGameTimeSeconds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECorporation GetCorporation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EArtillerySupportLevel GetArtillerySupportLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAirSupportLevel GetAirSupport() const;
    
};

