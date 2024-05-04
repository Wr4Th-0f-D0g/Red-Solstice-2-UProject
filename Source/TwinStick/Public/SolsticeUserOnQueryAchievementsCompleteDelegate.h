#pragma once
#include "CoreMinimal.h"
#include "SolsticeUserOnQueryAchievementsCompleteDelegate.generated.h"

class USolsticeUserInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSolsticeUserOnQueryAchievementsComplete, const USolsticeUserInfo*, UserInfo, bool, bSuccess);

