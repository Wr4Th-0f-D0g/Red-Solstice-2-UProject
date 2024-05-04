#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "WeaponRootComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UWeaponRootComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UWeaponRootComponent(const FObjectInitializer& ObjectInitializer);

};

