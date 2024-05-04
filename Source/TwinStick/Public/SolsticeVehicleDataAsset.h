#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESolsticeVehicleModuleCategory.h"
#include "SolsticeVehicleData.h"
#include "SolsticeVehicleModuleData.h"
#include "Templates/SubclassOf.h"
#include "SolsticeVehicleDataAsset.generated.h"

class ASolsticeDrivableVehicle;
class UDataTable;
class USkill;

UCLASS(Blueprintable)
class TWINSTICK_API USolsticeVehicleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VehicleModificationTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VehicleModificationDescriptionsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultVehicleTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VehicleDescriptionsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TSoftClassPtr<USkill>> SeatSwapSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USkill> NoSkillClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AvailableVehicles;
    
    USolsticeVehicleDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetVehicleModuleTagsForCategoryAndVehicleTag(ESolsticeVehicleModuleCategory ModuleCategory, FGameplayTag VehicleTag, bool bExcludeDefaultModules) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetVehicleModuleTagsForCategoryAndVehicle(ESolsticeVehicleModuleCategory ModuleCategory, const FSolsticeVehicleData& DefaultVehicleData, bool bExcludeDefaultModules) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetVehicleModuleTagsForCategory(ESolsticeVehicleModuleCategory ModuleCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeVehicleModuleData> GetVehicleModulesForCategoryAndVehicleTag(ESolsticeVehicleModuleCategory ModuleCategory, FGameplayTag VehicleTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeVehicleModuleData> GetVehicleModulesForCategoryAndVehicle(ESolsticeVehicleModuleCategory ModuleCategory, TSubclassOf<ASolsticeDrivableVehicle> VehicleClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSolsticeVehicleModuleData> GetVehicleModulesForCategory(ESolsticeVehicleModuleCategory ModuleCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ESolsticeVehicleModuleCategory> GetAllVehicleModuleCategories() const;
    
};

