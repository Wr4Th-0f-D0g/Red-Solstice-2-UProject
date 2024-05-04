#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ColonyInfo.generated.h"

class AColony;

USTRUCT(BlueprintType)
struct FColonyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ColonyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ColonyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Population;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StormIntensityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AColony> Colony;
    
    TWINSTICK_API FColonyInfo();
};

FORCEINLINE uint32 GetTypeHash(const FColonyInfo& Thing)
{
    return 0;
}