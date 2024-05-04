#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "SolsticeNavMesh.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticeNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    ASolsticeNavMesh(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetProps(float InTileSizeUU, float InCellSize, float InCellHeight, float InAgentRadius, float SimplificationError, bool bSortCost);
    
};

