#pragma once
#include "CoreMinimal.h"
#include "MissionSetupActorSetDelegate.generated.h"

class AMissionSetupActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionSetupActorSet, AMissionSetupActor*, MissionSetupActor);

