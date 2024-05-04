#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponSphereAreaMarker.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AWeaponSphereAreaMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    AWeaponSphereAreaMarker(const FObjectInitializer& ObjectInitializer);

};

