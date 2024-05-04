#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AbilityProjectileActorBase.h"
#include "SmokeWallProjectileBase.generated.h"

class AActor;
class USphereComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ASmokeWallProjectileBase : public AAbilityProjectileActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> QueryTypes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USphereComponent*> SphereCollisions;
    
public:
    ASmokeWallProjectileBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ClearAllSphereTimers();
    
    UFUNCTION(BlueprintCallable)
    void BindTimerToSphere(USphereComponent* InSphereComp, float TimerTicks);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplySmokewallBuff(USphereComponent* OverlappedSphere, const TArray<AActor*>& Actors);
    
};

