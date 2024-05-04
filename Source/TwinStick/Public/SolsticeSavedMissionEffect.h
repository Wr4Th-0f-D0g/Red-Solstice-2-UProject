#pragma once
#include "CoreMinimal.h"
#include "SolsticeSavedMissionEffect.generated.h"

USTRUCT(BlueprintType)
struct FSolsticeSavedMissionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString EffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float EffectValue;
    
    TWINSTICK_API FSolsticeSavedMissionEffect();
};

