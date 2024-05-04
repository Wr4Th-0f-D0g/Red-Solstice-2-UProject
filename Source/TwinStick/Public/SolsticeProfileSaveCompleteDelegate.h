#pragma once
#include "CoreMinimal.h"
#include "SolsticeProfileSaveCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSolsticeProfileSaveComplete, const FString&, SavePath, int32, userID, bool, bSuccess);

