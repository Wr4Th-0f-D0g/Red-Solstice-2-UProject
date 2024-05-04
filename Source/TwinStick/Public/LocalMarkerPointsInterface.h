#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "LocalMarkerPointsInterface.generated.h"

UINTERFACE(Blueprintable)
class ULocalMarkerPointsInterface : public UInterface {
    GENERATED_BODY()
};

class ILocalMarkerPointsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FVector> GetLocalMarkerPointsInWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FVector> GetLocalMarkerPoints() const;
    
};

