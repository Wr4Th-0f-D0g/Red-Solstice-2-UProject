#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DynamicInteractableBase.h"
#include "ELockerType.h"
#include "LockerItemGivenDelegate.h"
#include "Templates/SubclassOf.h"
#include "Locker.generated.h"

class AInventoryPickup;
class APawn;
class UFMODAudioComponent;
class UFMODEvent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class TWINSTICK_API ALocker : public ADynamicInteractableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* LockerAC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* LockerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* LockerFailedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockerItemGiven OnLockerItemGiven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELockerType LockerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AInventoryPickup> PickupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryPickup> LockerResolvedClass;
    
    ALocker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RollLockerLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockerTypeAssigned();
    
    UFUNCTION(BlueprintCallable)
    bool LootLocker(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Looted(bool bRecentlyInteractedWith, bool bInteractionDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleInventoryFull(APawn* InteractionInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPickupNameText() const;
    
};

