#pragma once
#include "CoreMinimal.h"
#include "WeaponDefaultVisual.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FWeaponDefaultVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    TWINSTICK_API FWeaponDefaultVisual();
};

