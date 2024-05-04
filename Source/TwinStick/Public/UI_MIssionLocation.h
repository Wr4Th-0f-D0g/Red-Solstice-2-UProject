#pragma once
#include "CoreMinimal.h"
#include "UI_MIssionLocation.generated.h"

class AMinimapActorBase;

USTRUCT(BlueprintType)
struct TWINSTICK_API FUI_MIssionLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMinimapActorBase* MinimapActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocationString;
    
    FUI_MIssionLocation();
};

