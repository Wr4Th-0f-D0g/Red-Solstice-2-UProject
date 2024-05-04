#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "SolsticeVehicleModuleData.h"
#include "SolsticeVehicleModuleDescription.h"
#include "Templates/SubclassOf.h"
#include "VehicleModTooltipBase.generated.h"

class ASolsticeWeaponBase;
class UAbilityBase;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UVehicleModTooltipBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSolsticeVehicleModuleData VehicleModData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VehicleModTag;
    
    UVehicleModTooltipBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASolsticeWeaponBase* GetWeaponCDO(TSubclassOf<ASolsticeWeaponBase> WeaponClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSolsticeVehicleModuleDescription GetModDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSolsticeVehicleModuleData GetModData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilityBase* GetAbilityCDO(TSubclassOf<UAbilityBase> AbilityClass) const;
    
};

