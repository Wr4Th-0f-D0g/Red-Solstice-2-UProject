#pragma once
#include "CoreMinimal.h"
#include "PlayerBiomassStateChangedDelegate.generated.h"

class ASolsticeCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerBiomassStateChanged, ASolsticeCharacterBase*, Player, bool, HasEntered);

