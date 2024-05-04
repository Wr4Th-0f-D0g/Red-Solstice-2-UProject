#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MissionEffect.h"
#include "MissionEffectContainer.generated.h"

USTRUCT(BlueprintType)
struct FMissionEffectContainer : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMissionEffect> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionGenerationSeed;
    
    TWINSTICK_API FMissionEffectContainer();
};

