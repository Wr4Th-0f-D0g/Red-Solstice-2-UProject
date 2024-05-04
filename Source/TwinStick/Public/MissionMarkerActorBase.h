#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MissionMarkerActorBase.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AMissionMarkerActorBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    AMissionMarkerActorBase(const FObjectInitializer& ObjectInitializer);

};

