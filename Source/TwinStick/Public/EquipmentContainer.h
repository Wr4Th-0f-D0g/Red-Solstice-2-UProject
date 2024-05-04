#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "CharacterEquipment.h"
#include "EquipmentContainer.generated.h"

class AStrategyPlayerState;

USTRUCT(BlueprintType)
struct FEquipmentContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterEquipment> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStrategyPlayerState> Owner;
    
    TWINSTICK_API FEquipmentContainer();
};

