#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AtrocityRock.generated.h"

class UPrimitiveComponent;
class UProjectileMovementComponent;
class URotatingMovementComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AAtrocityRock : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* PMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URotatingMovementComponent* RMC;
    
    AAtrocityRock(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnStop(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRockHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
};

