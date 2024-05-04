#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheActor.h"
#include "TRSGeometryCacheActor.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API ATRSGeometryCacheActor : public AGeometryCacheActor {
    GENERATED_BODY()
public:
    ATRSGeometryCacheActor(const FObjectInitializer& ObjectInitializer);

};

