#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "EmptyItem.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UEmptyItem : public UItem {
    GENERATED_BODY()
public:
    UEmptyItem(const FObjectInitializer& ObjectInitializer);

};

