#pragma once
#include "CoreMinimal.h"
#include "CampaignCinematic.h"
#include "CinematicPlayedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCinematicPlayed, const FCampaignCinematic&, Cinematic);

