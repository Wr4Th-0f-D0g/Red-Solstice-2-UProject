#pragma once
#include "CoreMinimal.h"
#include "AIActorUnregisteredWithAIDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIActorUnregisteredWithAI, AActor*, RemovedActor);

