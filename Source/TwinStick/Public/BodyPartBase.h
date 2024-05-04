#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "BodyPartBase.generated.h"

class UCapsuleComponent;
class UFMODAudioComponent;
class UFMODEvent;
class UMaterialInterface;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class URotatingMovementComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ABodyPartBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Capsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URotatingMovementComponent* RotationMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* ImpactSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BloodSplashParticleEffectFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BloodSplatPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BloodDecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalSizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalSizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenDecalEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToLive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bounciness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Friction;
    
    ABodyPartBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRotationMovement(URotatingMovementComponent* Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URotatingMovementComponent* GetRotationMovement() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BodyPartStoppedMoving(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable)
    void BodyPartCollision(UPrimitiveComponent* aHitComponent, AActor* aOtherActor, UPrimitiveComponent* aOtherComp, FVector aNormalImpulse, const FHitResult& aHit);
    
};

