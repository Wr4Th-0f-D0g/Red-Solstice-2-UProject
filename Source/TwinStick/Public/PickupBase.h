#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "EIndicatorType.h"
#include "GameplayTagNotifyInterface.h"
#include "HoverInfoInterface.h"
#include "InteractionInterface.h"
#include "Templates/SubclassOf.h"
#include "PickupBase.generated.h"

class AController;
class APawn;
class UBoxComponent;
class UFMODEvent;
class UInteractableComponent;
class UInteractionWidgetBase;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API APickupBase : public AActor, public IInteractionInterface, public IGameplayTagAssetInterface, public IGameplayTagNotifyInterface, public IHoverInfoInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractionWidgetBase> InteractionWidgetClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* PickupSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* PickupFailedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionAbortRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionStartRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionWidgetLocation;
    
    APickupBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WidgetDiscovery(AController* Controller, EIndicatorType IndicatorType);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTags(FGameplayTagContainer InTags, bool bRemoveChildren, bool bAllowClientRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTag(FGameplayTag InTag, bool bRemoveChildren, bool bAllowClientRemove);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionCompleted(AActor* UsableObject, const TArray<APawn*>& Instigators, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorGameplayTags(FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTags(FGameplayTagContainer InTags, bool bAllowClientAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTag(FGameplayTag InTag, bool bAllowClientAdd);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

