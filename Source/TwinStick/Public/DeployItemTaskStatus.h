#pragma once
#include "CoreMinimal.h"
#include "DeployItemTaskStatus.generated.h"

USTRUCT(BlueprintType)
struct FDeployItemTaskStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemsDeployed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemsRequired;
    
    TWINSTICK_API FDeployItemTaskStatus();
};

