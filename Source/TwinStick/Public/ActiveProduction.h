#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EProductionStatus.h"
#include "ActiveProduction.generated.h"

class UEngineeringObject;

USTRUCT(BlueprintType)
struct FActiveProduction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEngineeringObject> EngineeringObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float BuildTimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EProductionStatus ProductionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bPausedFromInput;
    
    TWINSTICK_API FActiveProduction();
};

