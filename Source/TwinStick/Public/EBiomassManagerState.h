#pragma once
#include "CoreMinimal.h"
#include "EBiomassManagerState.generated.h"

UENUM(BlueprintType)
enum EBiomassManagerState {
    BMMDisabled,
    BMMStandby,
    BMMGetingPartialTextureInfo,
    BMMGeneratingTextureData,
    BMMPostTextureGenerateWork,
    BMMUpdatingTexture,
};

