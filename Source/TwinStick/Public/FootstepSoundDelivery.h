#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FootstepSoundDelivery.generated.h"

class UFMODAudioComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AFootstepSoundDelivery : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FootstepSoundCompA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FootstepSoundCompB;
    
    AFootstepSoundDelivery(const FObjectInitializer& ObjectInitializer);

};

