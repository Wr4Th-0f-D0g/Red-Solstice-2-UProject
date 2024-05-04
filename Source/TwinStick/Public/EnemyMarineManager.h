#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyMarineManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UEnemyMarineManager : public UActorComponent {
    GENERATED_BODY()
public:
    UEnemyMarineManager(const FObjectInitializer& ObjectInitializer);

};

