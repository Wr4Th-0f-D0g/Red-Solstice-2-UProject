#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EmergencyLightRotatingActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AEmergencyLightRotatingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BeaconMesh;
    
    AEmergencyLightRotatingActor(const FObjectInitializer& ObjectInitializer);

};

