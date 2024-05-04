#pragma once
#include "CoreMinimal.h"
#include "WeaponTargetingBase.h"
#include "WeaponTargetingLaser.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UWeaponTargetingLaser : public UWeaponTargetingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LaserCollisionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LaserCollisionEffectSecondPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LaserCollisionEffectInstance;
    
    UWeaponTargetingLaser(const FObjectInitializer& ObjectInitializer);

};

