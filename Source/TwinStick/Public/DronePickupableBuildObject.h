#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DronePickupableObjBase.h"
#include "Templates/SubclassOf.h"
#include "DronePickupableBuildObject.generated.h"

class ADroneBuildableObjBase;
class AHeroCharacterBase;

UCLASS(Blueprintable)
class TWINSTICK_API ADronePickupableBuildObject : public ADronePickupableObjBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADroneBuildableObjBase> ObjectClassToConstruct;
    
public:
    ADronePickupableBuildObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TestCollision(FVector aLocation, FRotator aRotation, AHeroCharacterBase* aCallingHero);
    
};

