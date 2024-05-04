#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CampaignProgressTagAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCampaignProgressTagAdded, const FGameplayTag&, ProgressTag);

