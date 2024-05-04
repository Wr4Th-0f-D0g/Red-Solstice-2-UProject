#pragma once
#include "CoreMinimal.h"
#include "SolsticeSignificanceThresholds.h"
#include "SolsticeGameplayActorSignificanceSettings.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeGameplayActorSignificanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeSignificanceThresholds> SignificanceThresholds;
    
    TWINSTICK_API FSolsticeGameplayActorSignificanceSettings();
};

