#pragma once
#include "CoreMinimal.h"
#include "InteractableComponent.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentPickupComponent.generated.h"

class USolsticeBuffBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UEnvironmentPickupComponent : public UInteractableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> ObjectCarriedBuff;
    
    UEnvironmentPickupComponent(const FObjectInitializer& ObjectInitializer);

};

