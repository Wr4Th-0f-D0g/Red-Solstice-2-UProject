#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAttribute.h"
#include "SolsticeBuffBase.h"
#include "WeaponPassiveBuffBase.generated.h"

UCLASS(Blueprintable)
class TWINSTICK_API UWeaponPassiveBuffBase : public USolsticeBuffBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedWeaponTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttribute, EAttribute> SpecializedWeaponAttributeTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InventorySize;
    
    UWeaponPassiveBuffBase();

};

