#pragma once
#include "CoreMinimal.h"
#include "MonsterDebugsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMonsterDebugs, bool, bEnabled);

