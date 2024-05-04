#pragma once
#include "CoreMinimal.h"
#include "ProfileSavingStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProfileSavingStateChanged, bool, IsSaving);

