#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Resource.generated.h"

class UFMODEvent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UResource : public UInterface {
    GENERATED_BODY()
};

class IResource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool HasEnoughResources(int32 Required) const PURE_VIRTUAL(HasEnoughResources, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetSimulatedResourceDelta() const PURE_VIRTUAL(GetSimulatedResourceDelta, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetResources() const PURE_VIRTUAL(GetResources, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetReservedResources() const PURE_VIRTUAL(GetReservedResources, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual UFMODEvent* GetOutOfResourcesSound() const PURE_VIRTUAL(GetOutOfResourcesSound, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetMaximumResources() const PURE_VIRTUAL(GetMaximumResources, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetAvailableResources() const PURE_VIRTUAL(GetAvailableResources, return 0;);
    
};

