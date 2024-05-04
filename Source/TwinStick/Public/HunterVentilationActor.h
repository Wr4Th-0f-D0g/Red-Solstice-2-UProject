#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HunterVentilationActor.generated.h"

class AHunterVentExitActor;

UCLASS(Blueprintable)
class TWINSTICK_API AHunterVentilationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHunterVentExitActor*> PossibleVenitilationExits;
    
    AHunterVentilationActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHunterVentExitActor* GetFurthestVentExitActorFromPawn() const;
    
};

