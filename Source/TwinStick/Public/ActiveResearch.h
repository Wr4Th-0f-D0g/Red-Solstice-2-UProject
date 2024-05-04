#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActiveResearch.generated.h"

class UTechObject;

USTRUCT(BlueprintType)
struct FActiveResearch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTechObject> Tech;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float TimeSpentResearching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag TechTag;
    
    TWINSTICK_API FActiveResearch();
};

