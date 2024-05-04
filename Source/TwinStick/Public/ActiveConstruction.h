#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MarsTime.h"
#include "ActiveConstruction.generated.h"

class UConstructionObject;

USTRUCT(BlueprintType)
struct FActiveConstruction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UConstructionObject> ConstructionObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag UpgradeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMarsTime BuildStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float BuildTimeElapsed;
    
    TWINSTICK_API FActiveConstruction();
};

