#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "InventorySlot.generated.h"

class UItem;

USTRUCT(BlueprintType)
struct FInventorySlot : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    TWINSTICK_API FInventorySlot();
};

