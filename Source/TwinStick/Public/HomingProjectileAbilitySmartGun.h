#pragma once
#include "CoreMinimal.h"
#include "HomingProjectileAbilityActorBase.h"
#include "Templates/SubclassOf.h"
#include "HomingProjectileAbilitySmartGun.generated.h"

class AActor;
class ASolsticeWeaponBase;
class UFMODEvent;
class UParticleSystem;

UCLASS(Blueprintable)
class TWINSTICK_API AHomingProjectileAbilitySmartGun : public AHomingProjectileAbilityActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ASolsticeWeaponBase* CreatingWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> DamageIgnoreClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HitMonsterParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HitObjectParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* HitCharacterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* HitObjectSound;
    
public:
    AHomingProjectileAbilitySmartGun(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetCreatingWeapon(ASolsticeWeaponBase* InWeapon);
    
};

