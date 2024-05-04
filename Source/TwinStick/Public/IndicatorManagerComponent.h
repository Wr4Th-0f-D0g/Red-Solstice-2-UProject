#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IndicatorManagerComponent.generated.h"

class UIndicatorDescriptor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UIndicatorManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIndicatorDescriptor*> Indicators;
    
public:
    UIndicatorManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveIndicator(UIndicatorDescriptor* IndicatorDescriptor);
    
    UFUNCTION(BlueprintCallable)
    void AddIndicator(UIndicatorDescriptor* IndicatorDescriptor);
    
};

