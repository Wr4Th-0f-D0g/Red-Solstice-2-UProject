#pragma once
#include "CoreMinimal.h"
#include "HeroPromotedDelegate.generated.h"

class AHeroCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHeroPromoted, AHeroCharacterBase*, Hero, int32, ToRank);

