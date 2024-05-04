#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESolsticeGameAccessibility.h"
#include "ESolsticeSessionOnlineMode.h"
#include "EStrategyMissionGameType.h"
#include "SolsticeSessionGameModeSettings.h"
#include "SolsticeSession_HostSessionRequest.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeSession_HostSessionRequest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeSessionOnlineMode OnlineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLobbies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModeNameForAdvertisement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MAPNAME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ExtraArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeGameAccessibility Accessibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowJoinInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInvites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeSessionGameModeSettings GameModeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStrategyMissionGameType GameOnlineMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameJoinsDisallowed;
    
    USolsticeSession_HostSessionRequest();

    UFUNCTION(BlueprintCallable)
    void UpdateSessionSettings(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetVehicleLimit(int32 VehicleLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetBotCount(int32 BotCount);
    
};

