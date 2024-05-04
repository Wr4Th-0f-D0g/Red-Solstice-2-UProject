#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavigationGridTestActor.generated.h"

class ANavigationGridTestActor;
class USceneComponent;
class USplineComponent;
class UVehiclePathGenerator;

UCLASS(Blueprintable)
class TWINSTICK_API ANavigationGridTestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* PathSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavigationGridTestActor* OtherTestActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVehiclePathGenerator* PathGenerator;
    
    ANavigationGridTestActor(const FObjectInitializer& ObjectInitializer);

};

