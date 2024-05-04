#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Damage.h"
#include "Templates/SubclassOf.h"
#include "ZiplineMovementComponent.generated.h"

class AActor;
class AHeroCharacterBase;
class UBoxComponent;
class UNavAreaBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UZiplineMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* Hero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Zipline;
    
    UZiplineMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleZiplineEndpointCollisions(UBoxComponent* InBoxComp, TSubclassOf<UNavAreaBase> NavClass);
    
    UFUNCTION(BlueprintCallable)
    void StartZipline(AActor* InZipline, const FVector& StartLocation, const FVector& EndLocation, float SpeedFactor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartZipline(AActor* InZipline, const FVector& StartLocation, const FVector& EndLocation, float SpeedFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimedOutAndReachedDestination();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimedOut();
    
    UFUNCTION(BlueprintCallable)
    void HandleCharacterDied(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable)
    void ForcePlayerForward(const FVector& WorldDirection, float Strength, float Duration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartZipline(AActor* InZipline, const FVector& StartLocation, const FVector& EndLocation, float SpeedFactor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFinishZipline(AHeroCharacterBase* InHero);
    
};

