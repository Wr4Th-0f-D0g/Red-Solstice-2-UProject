#pragma once
#include "CoreMinimal.h"
#include "StaticMeshConversionData.h"
#include "StaticMeshConversionQueueItem.generated.h"

class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FStaticMeshConversionQueueItem : public FStaticMeshConversionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> StaticMeshActors;
    
    TWINSTICK_API FStaticMeshConversionQueueItem();
};

