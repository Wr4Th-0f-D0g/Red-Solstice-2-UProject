#pragma once
#include "CoreMinimal.h"
#include "ESolsticeUserOnlineContext.h"
#include "ESolsticeUserPrivilege.h"
#include "SolsticeCancellableAsyncAction.h"
#include "SolsticeUserOnInitializeCompleteMulticastDelegate.h"
#include "AsyncAction_SolsticeUserInitialize.generated.h"

class UAsyncAction_SolsticeUserInitialize;
class USolsticeUserInfo;
class USolsticeUserSubsystem;

UCLASS(Blueprintable)
class TWINSTICK_API UAsyncAction_SolsticeUserInitialize : public USolsticeCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeUserOnInitializeCompleteMulticast OnInitializationComplete;
    
    UAsyncAction_SolsticeUserInitialize();

    UFUNCTION(BlueprintCallable)
    static UAsyncAction_SolsticeUserInitialize* LoginForOnlinePlay(USolsticeUserSubsystem* Target, int32 LocalPlayerIndex, bool bSuppressLoginScreen);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncAction_SolsticeUserInitialize* InitializeForLocalPlay(USolsticeUserSubsystem* Target, int32 LocalPlayerIndex, int32 PrimaryInputDevice, bool bCanUseGuestLogin);
    
    UFUNCTION(BlueprintCallable)
    void HandleInitializationComplete(const USolsticeUserInfo* UserInfo, bool bSuccess, FText Error, ESolsticeUserPrivilege RequestedPrivilege, ESolsticeUserOnlineContext OnlineContext);
    
};

