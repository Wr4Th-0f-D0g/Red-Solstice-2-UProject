#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "DropshipControllerBase.generated.h"

class AActor;

UCLASS(Blueprintable)
class TWINSTICK_API ADropshipControllerBase : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SignalFlares;
    
public:
    ADropshipControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterSignalFlare(AActor* SignalFlare);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckSignalFlares();
    
};

