#pragma once
#include "CoreMinimal.h"
#include "AICharDiedDelegate.generated.h"

class ASolsticeCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAICharDied, ASolsticeCharacterBase*, DeadChar);

