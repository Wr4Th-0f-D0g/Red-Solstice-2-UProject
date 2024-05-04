#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeaponTargetingBase.h"
#include "WeaponTargetingLaserSpread.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UWeaponTargetingLaserSpread : public UWeaponTargetingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AimingEffectInstanceEndPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LaserCollisionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LaserCollisionEffectInstance;
    
public:
    UWeaponTargetingLaserSpread(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void GetEndPointForAngle(FVector& EndPointLocation, bool& bComponentHit, float HalfWeaponSpread);
    
    UFUNCTION(BlueprintCallable)
    void AdjustEndPoint();
    
};

