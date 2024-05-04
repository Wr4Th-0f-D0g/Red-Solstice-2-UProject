#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KerLegInfo.generated.h"

class UBoxComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FKerLegInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OriginalRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLegAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Leg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DetectionArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OriginalWorldTransform;
    
    TWINSTICK_API FKerLegInfo();
};

