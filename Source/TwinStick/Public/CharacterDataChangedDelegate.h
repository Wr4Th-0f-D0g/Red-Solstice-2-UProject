#pragma once
#include "CoreMinimal.h"
#include "CharacterData.h"
#include "CharacterDataChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterDataChanged, const FCharacterData&, Data);

