#pragma once
#include "CoreMinimal.h"
#include "VirtualFlameSphere.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FVirtualFlameSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HitActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> NewHitActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlappedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> NewOverlappedActors;
    
    TWINSTICK_API FVirtualFlameSphere();
};

