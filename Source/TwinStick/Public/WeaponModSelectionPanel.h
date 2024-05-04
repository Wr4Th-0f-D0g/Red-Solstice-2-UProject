#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "WeaponModSelectionPanel.generated.h"

class ASolsticeWeaponBase;
class UVerticalBox;
class UWeaponDataAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UWeaponModSelectionPanel : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponDataAsset* WeaponDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* WeaponGroupVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WeaponUpgradeGroupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeWeaponBase* WidgetWeapon;
    
    UWeaponModSelectionPanel();

    UFUNCTION(BlueprintCallable)
    void SetWeapon(ASolsticeWeaponBase* NewWeapon);
    
};

