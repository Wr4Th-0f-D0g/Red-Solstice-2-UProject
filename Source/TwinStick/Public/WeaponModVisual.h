#pragma once
#include "CoreMinimal.h"
#include "WeaponModVisual.generated.h"

class ASolsticeWeaponBase;
class UMaterialInterface;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FWeaponModVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ASolsticeWeaponBase>> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    TWINSTICK_API FWeaponModVisual();
};

