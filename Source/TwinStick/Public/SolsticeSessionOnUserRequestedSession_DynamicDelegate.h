#pragma once
#include "CoreMinimal.h"
#include "SolsticeOnlineResultInformation.h"
#include "SolsticeSessionOnUserRequestedSession_DynamicDelegate.generated.h"

class USolsticeSession_SearchResult;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSolsticeSessionOnUserRequestedSession_Dynamic, const int32, LocalPlatformUserId, USolsticeSession_SearchResult*, RequestedSession, const FSolsticeOnlineResultInformation&, RequestedSessionResult);

