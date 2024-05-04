#pragma once
#include "CoreMinimal.h"
#include "ESolsticeUserOnlineContext.h"
#include "ESolsticeUserPrivilege.h"
#include "SolsticeUserOnInitializeCompleteMulticastDelegate.generated.h"

class USolsticeUserInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FSolsticeUserOnInitializeCompleteMulticast, const USolsticeUserInfo*, UserInfo, bool, bSuccess, FText, Error, ESolsticeUserPrivilege, RequestedPrivilege, ESolsticeUserOnlineContext, OnlineContext);

