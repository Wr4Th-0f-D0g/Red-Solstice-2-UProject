#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EEquipementPanel.h"
#include "EquipmentActionRequestedDelegate.h"
#include "WeaponData.h"
#include "EquipmentGroupList.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UEquipmentGroupList : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentActionRequested RequestEquipAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponsDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipementPanel EquipmentType;
    
    UEquipmentGroupList();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FWeaponData> GetSecondaryWeaponData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FWeaponData> GetPrimaryWeaponData() const;
    
};

