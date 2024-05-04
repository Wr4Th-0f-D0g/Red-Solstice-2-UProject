#pragma once
#include "CoreMinimal.h"
#include "InventoryConsumable.h"
#include "Templates/SubclassOf.h"
#include "InventoryBuildable.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UInventoryBuildable : public UInventoryConsumable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BuildableActor;
    
    UInventoryBuildable(const FObjectInitializer& ObjectInitializer);

};

