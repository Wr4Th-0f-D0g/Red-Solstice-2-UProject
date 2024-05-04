#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SelectedMissionLocation.generated.h"

USTRUCT(BlueprintType)
struct FSelectedMissionLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavLocation;
    
    TWINSTICK_API FSelectedMissionLocation();
};

