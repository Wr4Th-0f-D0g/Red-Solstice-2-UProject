#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponModDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWeaponModDescription : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ModIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModDescription;
    
    TWINSTICK_API FWeaponModDescription();
};

