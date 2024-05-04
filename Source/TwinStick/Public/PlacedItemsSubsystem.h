#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "ItemAddedDelegate.h"
#include "PlacedItemsSubsystem.generated.h"

class AAbilityActorBase;
class AAbilityBuildableActorBase;
class AActor;
class AAoE_MarkerBase;
class UAbilityBase;

UCLASS(Blueprintable)
class TWINSTICK_API UPlacedItemsSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemAdded OnItemAdded;
    
    UPlacedItemsSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterPlacedItemInWorld(AActor* NewBuildableActor);
    
    UFUNCTION(BlueprintCallable)
    void ToggleTeleportPad(AAbilityActorBase* TeleportPad, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ToggleItem(AActor* InItem, FGameplayTag InTag, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldRegisterItem(AActor* ItemToRegister) const;
    
    UFUNCTION(BlueprintCallable)
    void RegisterPlacedItemInWorld(AActor* NewBuildableActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterActorWithTag(AActor* NewBuildableActor, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeleportPadDisabled(AAbilityActorBase* TeleportPad) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSphereClippingThroughObjects(FVector Start, FVector End, float Radius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlacementNearOtherItem(const UAbilityBase* ItemToBePlaced, FVector Placement) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearOtherItem(const UAbilityBase* ItemToBePlaced) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemDisabled(AActor* TestedActor, FGameplayTag InGameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorClippingThroughObjects(const AAoE_MarkerBase* Marker, float Radius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetPlacedItems(const FGameplayTag& InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetItemInBlockingRangeOfPlacement(const UAbilityBase* ItemToBePlaced, FVector Placement) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetItemInBlockingRange(const UAbilityBase* ItemToBePlaced) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAbilityActorBase* GetClosestTeleportPad(AAbilityBuildableActorBase* FromTeleportPad) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAbilityActorBase* GetClosestItem(AActor* FromActor, FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> FindItemsInRangeByTag(TArray<FGameplayTag> InTags, FVector Origin, float Range) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> FindItemsInRange(FVector Origin, float Range) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableTeleportPad(AAbilityActorBase* TeleportPad);
    
    UFUNCTION(BlueprintCallable)
    void EnableItem(AActor* InItem, FGameplayTag InTag);
    
    UFUNCTION(BlueprintCallable)
    void DisableTeleportPad(AAbilityActorBase* TeleportPad);
    
    UFUNCTION(BlueprintCallable)
    void DisableItem(AActor* InItem, FGameplayTag InTag);
    
};

