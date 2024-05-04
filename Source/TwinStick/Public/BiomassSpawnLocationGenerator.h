#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BiomassSpawnLocationGenerator.generated.h"

class ABiomassCenterActor;

UCLASS(Blueprintable)
class TWINSTICK_API UBiomassSpawnLocationGenerator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABiomassCenterActor* CallingCenterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABiomassCenterActor*> NearbyCenters;
    
public:
    UBiomassSpawnLocationGenerator();

protected:
    UFUNCTION(BlueprintCallable)
    void TryGenerateLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnBiomassUnregistered(ABiomassCenterActor* InCenterACtor);
    
    UFUNCTION(BlueprintCallable)
    void OnBiomassRegistered(ABiomassCenterActor* InCenterACtor);
    
    UFUNCTION(BlueprintCallable)
    void HandleTimeout();
    
};

