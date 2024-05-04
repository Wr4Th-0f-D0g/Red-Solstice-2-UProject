#pragma once
#include "CoreMinimal.h"
#include "MeshLinksArray.generated.h"

class AMeshSystemLinkBase;

USTRUCT(BlueprintType)
struct FMeshLinksArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMeshSystemLinkBase*> MeshLinkActors;
    
    TWINSTICK_API FMeshLinksArray();
};

