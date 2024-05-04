#pragma once
#include "CoreMinimal.h"
#include "MeshSystemCenterBase.h"
#include "InsertedPathfindingCenter.generated.h"

class UMeshSystemNodeComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AInsertedPathfindingCenter : public AMeshSystemCenterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshSystemNodeComponent* Node1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshSystemNodeComponent* Node2;
    
    AInsertedPathfindingCenter(const FObjectInitializer& ObjectInitializer);

};

