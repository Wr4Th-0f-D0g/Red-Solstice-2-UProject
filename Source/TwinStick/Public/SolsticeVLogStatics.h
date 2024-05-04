#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SolsticeVLogStatics.generated.h"

class AActor;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeVLogStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USolsticeVLogStatics();

    UFUNCTION(BlueprintCallable)
    static void VLogText(AActor* LoggingActor, FText Text);
    
    UFUNCTION(BlueprintCallable)
    static void VLogStartEndLocations(AActor* LoggingActor, float Radius, FVector LocationStart, FText TextStart, FColor ColorStart, FVector LocationEnd, FText TextEnd, FColor ColorEnd);
    
    UFUNCTION(BlueprintCallable)
    static void VLogLocation(AActor* LoggingActor, FVector Location, float Radius, FColor SphereColor, FText Text);
    
};

