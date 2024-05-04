#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Damage.h"
#include "WeaponSpecializationBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class TWINSTICK_API UWeaponSpecializationBase : public UObject {
    GENERATED_BODY()
public:
    UWeaponSpecializationBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldModifyWeaponDamage(AActor* Target, const FDamage& InDamageInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FDamage ModifyWeaponDamage(AActor* Target, const FDamage& InDamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetModDescriptionText() const;
    
};

