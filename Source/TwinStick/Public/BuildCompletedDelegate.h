#pragma once
#include "CoreMinimal.h"
#include "BuildCompletedDelegate.generated.h"

class AAbilityBuildableActorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBuildCompleted, AAbilityBuildableActorBase*, BuildableActor);

