#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AnalyticsSubSystem.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UAnalyticsSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UAnalyticsSubSystem();

};

