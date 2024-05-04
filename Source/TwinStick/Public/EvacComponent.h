#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EvacRope.h"
#include "EvacComponent.generated.h"

class AEvacActor;
class AShivaActor;
class ASolsticeCharacterBase;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UEvacComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AShivaActor> ShivaActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvacRope DropshipRope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolsticeCharacterBase* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DropLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RopeDropMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EvacMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AEvacActor> EvacActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EvacDropshipMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RopeOffset;
    
public:
    UEvacComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTrainScriptedMovement(AEvacActor* TheEvacActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnShiva(FTransform SpawnTransform, float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_StartEvac();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_FinishEvac();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFinishEvac();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CleanupAfterEvac();
    
};

