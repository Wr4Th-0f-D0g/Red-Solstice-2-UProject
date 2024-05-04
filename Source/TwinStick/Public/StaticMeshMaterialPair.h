#pragma once
#include "CoreMinimal.h"
#include "StaticMeshMaterialPair.generated.h"

class UMaterialInterface;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FStaticMeshMaterialPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    TWINSTICK_API FStaticMeshMaterialPair();
};
FORCEINLINE uint32 GetTypeHash(const FStaticMeshMaterialPair) { return 0; }

