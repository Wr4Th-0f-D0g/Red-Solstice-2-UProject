#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EWeaponUpgradeType.h"
#include "WeaponModGroupBase.generated.h"

class ASolsticeWeaponBase;
class AStrategyPlayerState;
class UModuleEquipStatus;
class UTextBlock;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UWeaponModGroupBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeWeaponBase* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponUpgradeType GroupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* SelectionButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* GroupMinMaxText;
    
    UWeaponModGroupBase();

    UFUNCTION(BlueprintCallable)
    void HandleEquipmentChanged(AStrategyPlayerState* PS, UModuleEquipStatus* MES);
    
};

