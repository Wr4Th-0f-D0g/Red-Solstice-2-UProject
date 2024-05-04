#pragma once
#include "CoreMinimal.h"
#include "EAggroGroup.h"
#include "AIActorRegisteredWithAIDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAIActorRegisteredWithAI, AActor*, RegisteredActor, EAggroGroup, AggroGroup, bool, bMonsterRegistered, bool, bEnemyMarineRegistered);

