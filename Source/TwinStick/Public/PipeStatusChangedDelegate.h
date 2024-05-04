#pragma once
#include "CoreMinimal.h"
#include "PipeStatusChangedDelegate.generated.h"

class APipeNetworkBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPipeStatusChanged, APipeNetworkBase*, Pipe);

