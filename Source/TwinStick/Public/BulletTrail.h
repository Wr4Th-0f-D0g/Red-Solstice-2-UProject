#pragma once
#include "CoreMinimal.h"
#include "BulletTrail.generated.h"

class UParticleSystemComponent;
class USceneComponent;

USTRUCT(BlueprintType)
struct FBulletTrail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BulletTrailParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> TargetComponent;
    
    TWINSTICK_API FBulletTrail();
};

