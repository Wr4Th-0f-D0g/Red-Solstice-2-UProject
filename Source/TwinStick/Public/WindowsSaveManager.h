#pragma once
#include "CoreMinimal.h"
#include "PlatformSaveManager.h"
#include "WindowsSaveManager.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UWindowsSaveManager : public UPlatformSaveManager {
    GENERATED_BODY()
public:
    UWindowsSaveManager();

};

