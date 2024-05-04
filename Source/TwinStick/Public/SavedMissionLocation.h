#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LocationInfo.h"
#include "SavedMissionLocation.generated.h"

USTRUCT(BlueprintType)
struct FSavedMissionLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectiveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocationInfo LocationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavLocation;
    
    TWINSTICK_API FSavedMissionLocation();
};

