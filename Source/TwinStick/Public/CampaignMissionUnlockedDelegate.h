#pragma once
#include "CoreMinimal.h"
#include "CampaignMissionGenerationData.h"
#include "CampaignMissionUnlockedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCampaignMissionUnlocked, FCampaignMissionGenerationData, MissionData);

