#pragma once
#include "CoreMinimal.h"
#include "InventoryConsumable.h"
#include "Templates/SubclassOf.h"
#include "InventoryExplosive.generated.h"

class AExplosiveActorBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UInventoryExplosive : public UInventoryConsumable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AExplosiveActorBase> ExplosiveActorType;
    
    UInventoryExplosive(const FObjectInitializer& ObjectInitializer);

};

