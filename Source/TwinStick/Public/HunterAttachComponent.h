#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HunterAttachComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UHunterAttachComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UHunterAttachComponent(const FObjectInitializer& ObjectInitializer);

};

