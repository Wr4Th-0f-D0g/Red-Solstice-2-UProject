#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SolsticeOnlineLibrary.generated.h"

class APlayerController;
class UObject;
class USolsticeUserInfo;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeOnlineLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USolsticeOnlineLibrary();

    UFUNCTION(BlueprintCallable)
    static void ShowLoginUI(const USolsticeUserInfo* UserInfo, bool OnlineOnly, bool ShowSkip);
    
    UFUNCTION(BlueprintCallable)
    static void ShowInviteUI(const USolsticeUserInfo* UserInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ShowFriendsUI(const USolsticeUserInfo* UserInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ShowAccountUpgradeUI(const USolsticeUserInfo* UserInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ShowAccountCreationUI(const USolsticeUserInfo* UserInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool KickPlayer(const UObject* WorldContextObject, APlayerController* PlayerToKick, FText KickReason);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDLCInstalled(int32 AppID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CanPlay(const UObject* WorldContextObject, bool bCanPlayOnline);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BanPlayer(const UObject* WorldContextObject, APlayerController* PlayerToKick, FText BanReason);
    
};

