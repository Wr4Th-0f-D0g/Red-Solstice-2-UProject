#pragma once
#include "CoreMinimal.h"
#include "SuperWeaponBase.h"
#include "SuperWeaponInfestationDamage.h"
#include "HASROC.generated.h"

class ARegion;
class USceneComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AHASROC : public ASuperWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* HasrocRoot;
    
    AHASROC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSuperWeaponInfestationDamage ModifyRegionInfestationDamageForDisplay(FSuperWeaponInfestationDamage InDamage, TArray<ARegion*> CurrentTargetRegions);
    
};

