#pragma once
#include "CoreMinimal.h"
#include "ItemAddedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemAdded, AActor*, AddedItem);

