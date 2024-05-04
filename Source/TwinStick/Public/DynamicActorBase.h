#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "PrefabricatorActorInterface.h"
#include "GameplayTagAddedDelegateDelegate.h"
#include "GameplayTagNotifyInterface.h"
#include "GameplayTagRemovedDelegateDelegate.h"
#include "NetworkManagerInterface.h"
#include "DynamicActorBase.generated.h"

class ARTS_NetworkManager;
class ULocationManager;
class UObject;

UCLASS(Blueprintable)
class TWINSTICK_API ADynamicActorBase : public AActor, public INetworkManagerInterface, public IPrefabricatorActorInterface, public IGameplayTagAssetInterface, public IGameplayTagNotifyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagAddedDelegate GameplayTagAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRemovedDelegate GameplayTagRemovedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid DynamicActorGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRegisterWithNetworkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARTS_NetworkManager* NetworkManager;
    
public:
    ADynamicActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDynamicActorGuid(const FGuid& InGuid);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTags(FGameplayTagContainer InTags, bool bRemoveChildren, bool bAllowClientRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTag(FGameplayTag InTag, bool bRemoveChildren, bool bAllowClientRemove);
    
    UFUNCTION(BlueprintCallable)
    void RegenerateDynamicActorGuid();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_PreSave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleActorArraysPopulated(ULocationManager* LocationManager);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorArraysPopulated(ULocationManager* LocationManager);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetDynamicActorGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorGameplayTags(FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTags(FGameplayTagContainer InTags, bool bAllowClientAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayTag(FGameplayTag InTag, bool bAllowClientAdd);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool IsLevelProcedural(UObject* WorldContextObject) const override PURE_VIRTUAL(IsLevelProcedural, return false;);
    
    UFUNCTION(BlueprintCallable)
    ARTS_NetworkManager* GetNetworkManager() override PURE_VIRTUAL(GetNetworkManager, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
};

