#pragma once
#include "CoreMinimal.h"
#include "MeshRestoredDelegateDelegate.generated.h"

class UInstancedStaticMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMeshRestoredDelegate, const UInstancedStaticMeshComponent*, InstancedComp, int32, ItemIndex);

