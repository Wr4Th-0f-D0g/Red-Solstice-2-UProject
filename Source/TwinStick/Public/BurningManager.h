#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BurningActorFastSerializer.h"
#include "BurningActorInfoStruct.h"
#include "Templates/SubclassOf.h"
#include "BurningManager.generated.h"

class ABurningActor;
class APawn;

UCLASS(Blueprintable)
class TWINSTICK_API ABurningManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearbyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABurningActor> BurningActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FBurningActorFastSerializer BurningActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBurningActorInfoStruct> InactiveActors;
    
public:
    ABurningManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    ABurningActor* SetBurningAt(FVector InLocation, float InFlameAmount, AActor* InActor, APawn* InInstigator, bool bFromBot);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleBurningStopped(ABurningActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<ABurningActor*> GetActiveBurningActorsInRange(FVector InLocation, float InRange, bool bSortByDistance, bool bAscending);
    
    UFUNCTION(BlueprintCallable)
    TArray<ABurningActor*> GetActiveBurningActors();
    
};

