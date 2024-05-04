#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "HeroMovementComponent.generated.h"

class AHeroCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UHeroMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToTickEveryFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* HeroOwner;
    
    UHeroMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetMovementMode(EMovementMode NewMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetGravityScale(float NewScale);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_MovementMode(EMovementMode NewMode);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_GravityScale(float NewScale);
    
};

