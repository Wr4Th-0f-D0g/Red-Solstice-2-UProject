#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Blueprint/UserWidget.h"
#include "EAttribute.h"
#include "EDamageGroup.h"
#include "EWeaponUpgradeType.h"
#include "ExplosionDamage.h"
#include "SolsticeAttributeModifier.h"
#include "Templates/SubclassOf.h"
#include "WeaponAmmoModification.h"
#include "WeaponFireComponentModification.h"
#include "WeaponUpgrade.h"
#include "WeaponModTooltipBase.generated.h"

class UHitObjectBase;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UWeaponModTooltipBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttribute, EAttribute> AttributeFixMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAttribute> FlippedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle WeaponModRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FDataTableRowHandle> SpecialAttributesToDisplay;
    
    UWeaponModTooltipBase();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FWeaponUpgrade GetWeaponUpgradesData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponModTypeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FWeaponAmmoModification GetWeaponAmmoUpgradeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponUpgradeType GetModUpgradeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FWeaponFireComponentModification GetFireComponentData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAmmoWeaponPercentDamage(TSubclassOf<UHitObjectBase> AmmoClass);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSolsticeAttributeModifier> FixBuffDisplayAttributes(TArray<FSolsticeAttributeModifier> AttributeModifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearAllGridLines();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddNewGridLines(const FText& TitleText, const FText& BodyText, bool IsTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddExplosiveDamageLines(FExplosionDamage CDOExplosiveStats, TSubclassOf<UHitObjectBase> AmmoClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddDamageTypeOverrideLine(EDamageGroup DamageType);
    
};

