#pragma once
#include "CoreMinimal.h"
#include "LaunchedMissileStruct.generated.h"

class AActor;
class UFMODAudioComponent;
class UParticleSystemComponent;
class UProjectileMovementComponent;
class URotatingMovementComponent;
class USplineComponent;

USTRUCT(BlueprintType)
struct FLaunchedMissileStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MissileParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URotatingMovementComponent* ProjectileRotation;
    
    TWINSTICK_API FLaunchedMissileStruct();
};

