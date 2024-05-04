#pragma once
#include "CoreMinimal.h"
#include "ESolsticeHeroClass.h"
#include "SavedCharacterData.h"
#include "SavedLoadoutsReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSavedLoadoutsReceived, ESolsticeHeroClass, MarineClass, const TArray<FSavedCharacterData>&, ClassLoadouts);

