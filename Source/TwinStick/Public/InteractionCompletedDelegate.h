#pragma once
#include "CoreMinimal.h"
#include "InteractionCompletedDelegate.generated.h"

class AActor;
class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInteractionCompleted, AActor*, InteractableActor, const TArray<APawn*>&, Instigators, bool, Success);

