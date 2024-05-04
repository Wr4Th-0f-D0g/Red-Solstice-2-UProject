#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Damagable.h"
#include "DamageComponent.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UDamageComponent : public UBoxComponent, public IDamagable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> DamageComponents;
    
public:
    UDamageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetDamageComp();
    

    // Fix for true pure virtual functions not being implemented
};

