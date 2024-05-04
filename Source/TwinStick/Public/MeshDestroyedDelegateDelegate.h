#pragma once
#include "CoreMinimal.h"
#include "MeshDestroyedDelegateDelegate.generated.h"

class UInstancedStaticMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMeshDestroyedDelegate, const UInstancedStaticMeshComponent*, InstancedComp, int32, ItemIndex);

