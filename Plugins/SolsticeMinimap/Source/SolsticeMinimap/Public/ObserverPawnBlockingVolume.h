#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObserverPawnBlockingVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class SOLSTICEMINIMAP_API AObserverPawnBlockingVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoundingBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsZ;
    
    AObserverPawnBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

