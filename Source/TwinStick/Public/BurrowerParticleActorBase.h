#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BurrowerParticleActorBase.generated.h"

class AMonsterCharacterBase;

UCLASS(Blueprintable)
class TWINSTICK_API ABurrowerParticleActorBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMonsterCharacterBase* Monster;
    
    ABurrowerParticleActorBase(const FObjectInitializer& ObjectInitializer);

};

