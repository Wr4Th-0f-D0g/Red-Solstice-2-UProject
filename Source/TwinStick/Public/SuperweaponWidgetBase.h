#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "SuperweaponWidgetBase.generated.h"

class ARegion;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API USuperweaponWidgetBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARegion*> TargetedRegions;
    
    USuperweaponWidgetBase();

    UFUNCTION(BlueprintCallable)
    void RemoveTargetedRegion(ARegion* InRegion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegionTargetCount(ARegion* InRegion);
    
    UFUNCTION(BlueprintCallable)
    void FireSuperWeapon(TArray<ARegion*> TargetRegions);
    
    UFUNCTION(BlueprintCallable)
    void AddTargetedRegion(ARegion* InRegion, bool bOverwriteOld);
    
};

