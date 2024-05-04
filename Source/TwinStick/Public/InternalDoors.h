#pragma once
#include "CoreMinimal.h"
#include "InternalDoors.generated.h"

class ADoorBase;
class AMonsterCharacterBase;

USTRUCT(BlueprintType)
struct FInternalDoors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoorBase* Door;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMonsterCharacterBase> OccupyingMonster;
    
    TWINSTICK_API FInternalDoors();
};

