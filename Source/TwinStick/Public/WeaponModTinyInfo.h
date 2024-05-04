#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponModDescription.h"
#include "WeaponModSelectionBase.h"
#include "WeaponModTinyInfo.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWINSTICK_API UWeaponModTinyInfo : public UWeaponModSelectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ModDataRow;
    
    UWeaponModTinyInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeaponModDescription GetWeaponModDescription() const;
    
};

