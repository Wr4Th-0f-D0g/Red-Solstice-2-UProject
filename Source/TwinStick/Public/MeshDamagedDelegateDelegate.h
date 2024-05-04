#pragma once
#include "CoreMinimal.h"
#include "MeshDamagedDelegateDelegate.generated.h"

class AActor;
class AController;
class UInstancedStaticMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FMeshDamagedDelegate, const UInstancedStaticMeshComponent*, InstancedComp, int32, ItemIndex, float, Damage, float, HealthRemaining, AController*, EventInstigator, AActor*, DamageCauser);

