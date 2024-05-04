#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TerraformerInfo.generated.h"

class ATerraformer;

USTRUCT(BlueprintType)
struct FTerraformerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TerraformerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TerraformerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ATerraformer> Terraformer;
    
    TWINSTICK_API FTerraformerInfo();
};

