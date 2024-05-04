#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "CharacterWeaponData.h"
#include "EEquipModuleFailure.h"
#include "ESuitSection.h"
#include "EWeaponUpgradeType.h"
#include "EquippedModule.h"
#include "ModuleInfo.h"
#include "Templates/SubclassOf.h"
#include "ModuleEquipStatus.generated.h"

class ASolsticeWeaponBase;
class USkill;

UCLASS(Blueprintable)
class TWINSTICK_API UModuleEquipStatus : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USkill>> MainSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USkill>> UtilitySkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ModuleNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquippedModule> EquippedModules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterWeaponData> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESuitSection, int32> AvailableRoomMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimaryWeaponSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondaryWeaponSlots;
    
    UModuleEquipStatus();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModuleEquippedOnSection(const FModuleInfo& InModule, ESuitSection InSection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWeaponUpgradeTypeEquipped(TSubclassOf<ASolsticeWeaponBase> WeaponClass, EWeaponUpgradeType UpgradeType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWeaponUpgradeEquipped(TSubclassOf<ASolsticeWeaponBase> WeaponClass, const FDataTableRowHandle& UpgradeDataHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWeaponEquipped(TSubclassOf<ASolsticeWeaponBase> WeaponClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailableRoomForModuleOnSection(const FModuleInfo& InModule, ESuitSection InSection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailableRoomForModule(const FModuleInfo& InModule) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSizeOfTotalWeaponUpgradesEquipped(bool bPrimaryWeapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfWeaponUpgradesOfTypeEquipped(TSubclassOf<ASolsticeWeaponBase> WeaponClass, EWeaponUpgradeType UpgradeType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfEquippedModulesMatching(const FModuleInfo& InModule) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumberOfWeaponUpgradesAllowedForType(TSubclassOf<ASolsticeWeaponBase> WeaponClass, EWeaponUpgradeType UpgradeType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEquippedWeaponUpgradeOfType(TSubclassOf<ASolsticeWeaponBase> WeaponClass, EWeaponUpgradeType UpgradeType, FDataTableRowHandle& OutUpgradeHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetAllEquippedWeaponUpgrades(bool bPrimaryWeapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipModuleFailure CanReplaceModule(const FModuleInfo& InModule, const FModuleInfo& ReplacedModule, bool& Success) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipWeaponUpgrade(TSubclassOf<ASolsticeWeaponBase> WeaponClass, const FDataTableRowHandle& UpgradeDataHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipUtilitySkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipModuleFailure CanEquipModule(const FModuleInfo& InModule, bool& Success) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipMainSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AlreadyHasSkill(const FModuleInfo& InModule) const;
    
};

