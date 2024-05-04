#pragma once
#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "TRSInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UTRSInstancedStaticMeshComponent : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UTRSInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

