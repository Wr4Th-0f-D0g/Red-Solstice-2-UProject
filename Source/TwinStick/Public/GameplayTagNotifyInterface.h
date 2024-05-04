#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagNotifyInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UGameplayTagNotifyInterface : public UInterface {
    GENERATED_BODY()
};

class IGameplayTagNotifyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void RemoveGameplayTags(FGameplayTagContainer InTags, bool bRemoveChildren, bool bAllowClientRemove) PURE_VIRTUAL(RemoveGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveGameplayTag(FGameplayTag InTag, bool bRemoveChildren, bool bAllowClientRemove) PURE_VIRTUAL(RemoveGameplayTag,);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetActorGameplayTags(FGameplayTagContainer& TagContainer) const PURE_VIRTUAL(GetActorGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddGameplayTags(FGameplayTagContainer InTags, bool bAllowClientAdd) PURE_VIRTUAL(AddGameplayTags,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddGameplayTag(FGameplayTag InTag, bool bAllowClientAdd) PURE_VIRTUAL(AddGameplayTag,);
    
};

