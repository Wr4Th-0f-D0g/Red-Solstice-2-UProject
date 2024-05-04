#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAttribute.h"
#include "AttributeLinkedComponent.generated.h"

class UAttributeComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UAttributeLinkedComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAttributeComponent> AttributeComponent;
    
public:
    UAttributeLinkedComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void HandleAttributeValueChanged(EAttribute Attribute, float OldValue, float NewValue);
    
};

