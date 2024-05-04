#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Damage.h"
#include "Templates/SubclassOf.h"
#include "WeaponTargetingBase.h"
#include "WeaponTargetingGuided.generated.h"

class AActor;
class UParticleSystemComponent;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UWeaponTargetingGuided : public UWeaponTargetingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefreshTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> TargetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* TargetWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AimingEffectInstance2;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
public:
    UWeaponTargetingGuided(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ScanForTargetsClosest();
    
    UFUNCTION(BlueprintCallable)
    void RefreshTargeting(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetHitable(AActor* aTarget);
    
    UFUNCTION(BlueprintCallable)
    FVector GetEndPointForAngle(float aAngleFromAim);
    
    UFUNCTION(BlueprintCallable)
    void CheckTargets();
    
    UFUNCTION(BlueprintCallable)
    void AdjustEndPoint();
    
};

