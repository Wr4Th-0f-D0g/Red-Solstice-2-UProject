#pragma once
#include "CoreMinimal.h"
#include "NavigationTestingActor.h"
#include "Templates/SubclassOf.h"
#include "SolsticeNavigationTestingActor.generated.h"

class ASolsticeCharacterBase;

UCLASS(Blueprintable)
class TWINSTICK_API ASolsticeNavigationTestingActor : public ANavigationTestingActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASolsticeCharacterBase> SolsticeCharacterClass;
    
    ASolsticeNavigationTestingActor(const FObjectInitializer& ObjectInitializer);

};

