#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "WeaponTargetingBase.generated.h"

class ASolsticeWeaponBase;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UWeaponTargetingBase : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASolsticeWeaponBase> OwningWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* AimingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AimingEffectInstance;
    
public:
    UWeaponTargetingBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAiming();
    
    UFUNCTION(BlueprintCallable)
    void StartAiming();
    
    UFUNCTION(BlueprintCallable)
    void SetLaserColor(FVector NewColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRange() const;
    
};

