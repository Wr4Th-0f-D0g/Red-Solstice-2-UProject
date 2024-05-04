#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "Components/ActorComponent.h"
#include "TeamInstigatorManager.generated.h"

class ATeamInstigatorPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UTeamInstigatorManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGenericTeamId, ATeamInstigatorPawn*> TeamInstigators;
    
public:
    UTeamInstigatorManager(const FObjectInitializer& ObjectInitializer);

};

