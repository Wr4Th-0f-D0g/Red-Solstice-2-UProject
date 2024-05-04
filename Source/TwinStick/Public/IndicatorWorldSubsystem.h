#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIndicatorType.h"
#include "IndicatorAddRemoveDelegate.h"
#include "IndicatorDiscoverDelegate.h"
#include "IndicatorWorldSubsystem.generated.h"

class AActor;
class AController;

UCLASS(Blueprintable)
class TWINSTICK_API UIndicatorWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndicatorAddRemove OnIndicatorAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndicatorAddRemove OnIndicatorRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndicatorDiscover OnIndicatorDiscovered;
    
    UIndicatorWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveIndicator(AActor* Actor, EIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void DiscoverIndicators(AController* Controller, EIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void AddIndicator(AActor* Actor, EIndicatorType IndicatorType);
    
};

