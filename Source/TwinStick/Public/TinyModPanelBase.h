#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EquippedWeaponModsDisplayBase.h"
#include "Templates/SubclassOf.h"
#include "TinyModPanelBase.generated.h"

class ASolsticeWeaponBase;
class UHorizontalBox;
class UWeaponModSelectionBase;

UCLASS(Blueprintable, EditInlineNew)
class TWINSTICK_API UTinyModPanelBase : public UEquippedWeaponModsDisplayBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* TinyModContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWeaponModSelectionBase> TinyModWidgetClass;
    
    UTinyModPanelBase();

    UFUNCTION(BlueprintCallable)
    void PopulateTinyMods(const TArray<FDataTableRowHandle> RowHandles, TSubclassOf<ASolsticeWeaponBase> ButtonWeaponClass);
    
};

