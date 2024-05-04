#pragma once
#include "CoreMinimal.h"
#include "BiomassCenterActor.h"
#include "BiomassCenterActorTentacleTester.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ABiomassCenterActorTentacleTester : public ABiomassCenterActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TentacleTestLocationComp;
    
    ABiomassCenterActorTentacleTester(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void DisplayTestTentacle();
    
};

