#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BodyPartArrayStruct.h"
#include "Templates/SubclassOf.h"
#include "BodyPartPoolComponent.generated.h"

class ABodyPartBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UBodyPartPoolComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABodyPartBase>, FBodyPartArrayStruct> BodyParts;
    
public:
    UBodyPartPoolComponent(const FObjectInitializer& ObjectInitializer);

};

