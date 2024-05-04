#pragma once
#include "CoreMinimal.h"
#include "OnCharacterRemovedFromSeatDelegate.generated.h"

class ASolsticeCharacterBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterRemovedFromSeat, ASolsticeCharacterBase*, Char);

