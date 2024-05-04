#pragma once
#include "CoreMinimal.h"
#include "RallyPointCivilians.generated.h"

class ACivilianCharacterBase;

USTRUCT(BlueprintType)
struct FRallyPointCivilians {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ACivilianCharacterBase>> Civilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstCivEnterTime;
    
    TWINSTICK_API FRallyPointCivilians();
};

