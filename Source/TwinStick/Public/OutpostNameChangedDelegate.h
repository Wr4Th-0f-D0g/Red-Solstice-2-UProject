#pragma once
#include "CoreMinimal.h"
#include "OutpostNameChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOutpostNameChanged, const FString&, NewName);

