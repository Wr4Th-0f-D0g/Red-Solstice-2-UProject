#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GeometryCacheComponent.h"
#include "GeometryCacheComponentAutoStop.generated.h"

class UFindFloorLocationAsyncNode;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UGeometryCacheComponentAutoStop : public UGeometryCacheComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFindFloorLocationAsyncNode*> FloorTestNodes;
    
public:
    UGeometryCacheComponentAutoStop(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PlayBackwardWithOffset(float InOffset);
    
    UFUNCTION(BlueprintCallable)
    void PlayAndStop();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFloorLocationReturned(bool bSuccess, FVector InLocation, int32 InPayload);
    
};

