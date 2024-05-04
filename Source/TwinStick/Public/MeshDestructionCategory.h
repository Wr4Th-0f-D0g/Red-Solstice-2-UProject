#pragma once
#include "CoreMinimal.h"
#include "MeshDestructionTypeEntry.h"
#include "MeshDestructionCategory.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FMeshDestructionCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStaticMesh>, FMeshDestructionTypeEntry> MeshTypes;
    
    TWINSTICK_API FMeshDestructionCategory();
};

