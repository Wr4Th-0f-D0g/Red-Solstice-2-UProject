#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NetworkManagerInterface.generated.h"

class ARTS_NetworkManager;
class UObject;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UNetworkManagerInterface : public UInterface {
    GENERATED_BODY()
};

class INetworkManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    virtual bool IsLevelProcedural(UObject* WorldContextObject) const PURE_VIRTUAL(IsLevelProcedural, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual ARTS_NetworkManager* GetNetworkManager() PURE_VIRTUAL(GetNetworkManager, return NULL;);
    
};

