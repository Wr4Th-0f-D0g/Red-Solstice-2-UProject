#pragma once
#include "CoreMinimal.h"
#include "PendingISMItem.generated.h"

class UTRSInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FPendingISMItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTRSInstancedStaticMeshComponent* ReplacedISM;
    
    TWINSTICK_API FPendingISMItem();
};

