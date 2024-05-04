#pragma once
#include "CoreMinimal.h"
#include "MarsTime.h"
#include "InfestedTerraformerData.generated.h"

class ATerraformer;

USTRUCT(BlueprintType)
struct FInfestedTerraformerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ATerraformer> Terraformer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime InfestationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString InfestedRegionName;
    
    TWINSTICK_API FInfestedTerraformerData();
};

