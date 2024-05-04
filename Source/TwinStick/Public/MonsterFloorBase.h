#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MonsterFloorBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API AMonsterFloorBase : public AActor {
    GENERATED_BODY()
public:
    AMonsterFloorBase(const FObjectInitializer& ObjectInitializer);

};

