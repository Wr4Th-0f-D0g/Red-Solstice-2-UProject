#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveTargetActorBase.generated.h"

class AHeroCharacterBase;

UCLASS(Blueprintable)
class TWINSTICK_API AMoveTargetActorBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMoveTargetAdjustment;
    
    AMoveTargetActorBase(const FObjectInitializer& ObjectInitializer);

};

