#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RallyPoint.generated.h"

class ASolsticeCharacterBase;

USTRUCT(BlueprintType)
struct FRallyPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASolsticeCharacterBase> Character;
    
    TWINSTICK_API FRallyPoint();
};

