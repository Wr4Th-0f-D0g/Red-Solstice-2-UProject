#pragma once
#include "CoreMinimal.h"
#include "SolsticeSignificanceThresholds.h"
#include "SolsticeCharacterSignificanceSettings.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeCharacterSignificanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeSignificanceThresholds> SignificanceThresholds;
    
    TWINSTICK_API FSolsticeCharacterSignificanceSettings();
};

