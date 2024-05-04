#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AbilityActorBase.h"
#include "LocalHarvestItem.h"
#include "ReplicatedHarvestContainer.h"
#include "ReplicatedHarvestItem.h"
#include "Templates/SubclassOf.h"
#include "HarvestManagerAbilityActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class TWINSTICK_API AHarvestManagerAbilityActor : public AAbilityActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AllowedOverlapClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FLocalHarvestItem> LocalHarvestItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicatedHarvestContainer ReplicatedHarvestItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveAllHarvestItemsAndDestroyWhenDestroyed;
    
    AHarvestManagerAbilityActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEffectsOverlapped(const FVector& OverlapLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEffectsExpired(const FVector& ExpiredLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_PlayEffectsOverlapped(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_PlayEffectsExpired(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOverlappedServer(AActor* Actor, const FReplicatedHarvestItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void CreateHarvestItem(UPARAM(Ref) FReplicatedHarvestItem& ItemData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanApplyToActor(AActor* Actor, const FReplicatedHarvestItem& Item);
    
};

