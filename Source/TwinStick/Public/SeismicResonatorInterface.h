#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SeismicResonatorInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class USeismicResonatorInterface : public UInterface {
    GENERATED_BODY()
};

class ISeismicResonatorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResonatorPlaced(FVector ResonatorPos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResonatorExploded(FVector ResonatorPos, AActor* SeismicOwner, float DamageAmount);
    
};

