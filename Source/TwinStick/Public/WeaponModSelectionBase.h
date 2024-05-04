#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EWeaponUpgradeType.h"
#include "Templates/SubclassOf.h"
#include "WeaponAmmoModification.h"
#include "WeaponFireComponentModification.h"
#include "WeaponUpgrade.h"
#include "WeaponModSelectionBase.generated.h"

class ASolsticeWeaponBase;
class AStrategyPlayerState;
class UImage;
class UModuleEquipStatus;
class UTextBlock;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UWeaponModSelectionBase : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ModIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HasModImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ModNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SlotSizeTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponUpgradeType ButtonUpgradeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeWeaponBase* ButtonWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle WeaponModRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASolsticeWeaponBase> TooltipWeaponClass;
    
    UWeaponModSelectionBase();

    UFUNCTION(BlueprintCallable)
    void HandleWorkbenchWeaponChanged(ASolsticeWeaponBase* WorkbenchWeapon);
    
    UFUNCTION(BlueprintCallable)
    void HandleModSelected();
    
    UFUNCTION(BlueprintCallable)
    void HandleEquipmentChanged(AStrategyPlayerState* PS, UModuleEquipStatus* MES);
    
    UFUNCTION(BlueprintCallable)
    void HandleCampaignProgressTagAdded(const FGameplayTag& NewTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FWeaponUpgrade GetWeaponUpgradesData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponModTypeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FWeaponAmmoModification GetWeaponAmmoUpgradeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetRequiredCampaignTech() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetModSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetModName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetModIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetModDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FWeaponFireComponentModification GetFireComponentData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ButtonShouldBeEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void BindToWorkbenchActor();
    
};

