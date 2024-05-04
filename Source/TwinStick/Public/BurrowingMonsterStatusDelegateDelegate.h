#pragma once
#include "CoreMinimal.h"
#include "EBurrowingState.h"
#include "BurrowingMonsterStatusDelegateDelegate.generated.h"

class AMonsterCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBurrowingMonsterStatusDelegate, AMonsterCharacterBase*, Monster, EBurrowingState, BurrowingState, EBurrowingState, PrevBurrowingState);

