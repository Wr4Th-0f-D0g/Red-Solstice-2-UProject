#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MarsSplineActor.generated.h"

class AStrategyMapActor;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AMarsSplineActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyMapActor* StartingMapActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStrategyMapActor* EndingMapActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* StartingSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* EndingSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffsetAtEndpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffsetAtPeak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawSpline;
    
    AMarsSplineActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GenerateSpline(float InAngleStep, float InStartHeight, float InPeakHeight, bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    void GenerateDefaultSpline();
    
    UFUNCTION(BlueprintCallable)
    void GenerateComponentSpline(float InAngleStep, float InStartHeight, float InPeakHeight, bool bDrawDebug);
    
};

