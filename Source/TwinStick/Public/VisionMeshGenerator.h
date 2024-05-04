#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/EngineTypes.h"
#include "FOWPointsGeneratedDelegate.h"
#include "VisionMeshGenerator.generated.h"

class AActor;
class UObject;
class UVisionMeshGenerator;

UCLASS(Blueprintable)
class TWINSTICK_API UVisionMeshGenerator : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOWPointsGenerated FOWPointsGenerated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> ResultHits;
    
public:
    UVisionMeshGenerator();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UVisionMeshGenerator* TraceForFOWPoints(const UObject* WorldContextObject, AActor* Player, float LineTraceZ, bool bTraceComplex, int32 TracesPerPoint, int32 TracePointsCount, float TracePointRadius, float TracePointDegreeOffset, float TraceDistance, float SnapSize);
    
};

