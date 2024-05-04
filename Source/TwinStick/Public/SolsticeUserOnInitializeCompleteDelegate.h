#pragma once
#include "CoreMinimal.h"
#include "ESolsticeUserOnlineContext.h"
#include "ESolsticeUserPrivilege.h"
#include "SolsticeUserOnInitializeCompleteDelegate.generated.h"

class USolsticeUserInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FiveParams(FSolsticeUserOnInitializeComplete, const USolsticeUserInfo*, UserInfo, bool, bSuccess, FText, Error, ESolsticeUserPrivilege, RequestedPrivilege, ESolsticeUserOnlineContext, OnlineContext);

