#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TargetPackage.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTargetPackage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTargetingGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GroundTargetLocation;
    
    TWINSTICK_API FTargetPackage();
};

