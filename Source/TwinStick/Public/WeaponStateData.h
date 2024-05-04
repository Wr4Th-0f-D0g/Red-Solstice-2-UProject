#pragma once
#include "CoreMinimal.h"
#include "StateObjectData.h"
#include "WeaponStateData.generated.h"

class UWeaponStateBase;

USTRUCT(BlueprintType)
struct FWeaponStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWeaponStateBase> StateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateObjectData StateData;
    
    TWINSTICK_API FWeaponStateData();
};

