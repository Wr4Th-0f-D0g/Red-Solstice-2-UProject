#pragma once
#include "CoreMinimal.h"
#include "SuperWeaponBase.h"
#include "SuperWeaponInfestationDamage.h"
#include "SOLAR.generated.h"

class ARegion;
class USceneComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ASOLAR : public ASuperWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SolarRoot;
    
    ASOLAR(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSuperWeaponInfestationDamage> GetSolarTargetSolutions(bool bOnlyContactedRegions) const;
    
    UFUNCTION(BlueprintCallable)
    void FireSolar(ARegion* InRegion, bool bPlayEffects);
    
};

