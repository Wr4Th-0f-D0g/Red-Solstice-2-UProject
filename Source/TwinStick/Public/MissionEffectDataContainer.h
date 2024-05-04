#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MissionEffectData.h"
#include "MissionEffectDataContainer.generated.h"

USTRUCT(BlueprintType)
struct FMissionEffectDataContainer : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionEffectData> OnSuccessGuaranteed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionEffectData> OnSuccessRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnSuccessRandomPicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionEffectData> OnFailureGuaranteed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionEffectData> OnFailureRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnFailureRandomPicks;
    
    TWINSTICK_API FMissionEffectDataContainer();
};

