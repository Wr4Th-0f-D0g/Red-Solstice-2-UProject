#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ECampaignTagGroup.h"
#include "CampaignTagsReplicatedDelegate.generated.h"

class UCampaignStateComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCampaignTagsReplicated, UCampaignStateComponent*, CampaignState, const FGameplayTag&, Tag, ECampaignTagGroup, TagGroup);

