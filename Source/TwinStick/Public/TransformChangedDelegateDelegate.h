#pragma once
#include "CoreMinimal.h"
#include "TransformChangedDelegateDelegate.generated.h"

class UMeshSystemNodeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTransformChangedDelegate, UMeshSystemNodeComponent*, MeshComponent);

