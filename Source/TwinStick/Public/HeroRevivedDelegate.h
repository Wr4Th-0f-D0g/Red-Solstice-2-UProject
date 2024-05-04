#pragma once
#include "CoreMinimal.h"
#include "HeroRevivedDelegate.generated.h"

class AHeroCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeroRevived, AHeroCharacterBase*, RevivedHero);

