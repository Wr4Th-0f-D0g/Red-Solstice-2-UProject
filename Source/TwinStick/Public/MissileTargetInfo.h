#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MissileTargetInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMissileTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDirectPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastKnownLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastKnownLocation2;
    
    TWINSTICK_API FMissileTargetInfo();
};

