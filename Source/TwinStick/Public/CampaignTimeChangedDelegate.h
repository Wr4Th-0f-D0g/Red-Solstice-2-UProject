#pragma once
#include "CoreMinimal.h"
#include "MarsTime.h"
#include "CampaignTimeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCampaignTimeChanged, const FMarsTime&, CampaignTime);

