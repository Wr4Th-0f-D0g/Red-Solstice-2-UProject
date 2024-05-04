#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "CharacterWeaponData.h"
#include "EEquipementPanel.h"
#include "CharacterEquipment.generated.h"

USTRUCT(BlueprintType)
struct FCharacterEquipment : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipementPanel EqiupmentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterWeaponData GrantedWeapon;
    
    TWINSTICK_API FCharacterEquipment();
};

