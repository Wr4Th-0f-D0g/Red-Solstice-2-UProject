#pragma once
#include "CoreMinimal.h"
#include "BurrowingDelDelegate.generated.h"

class AMonsterCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBurrowingDel, AMonsterCharacterBase*, Monster, bool, bSuccess);

