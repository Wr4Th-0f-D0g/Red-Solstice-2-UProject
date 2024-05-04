#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Damage.h"
#include "DamageDisplayComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UDamageDisplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDamageDisplayComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NativeDisplayDamage(FDamage DamageInfo);
    
};

