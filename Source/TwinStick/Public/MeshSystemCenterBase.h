#pragma once
#include "CoreMinimal.h"
#include "MeshSystemActorBase.h"
#include "MeshSystemCenterBase.generated.h"

class AMeshSystemLinkBase;

UCLASS(Blueprintable)
class TWINSTICK_API AMeshSystemCenterBase : public AMeshSystemActorBase {
    GENERATED_BODY()
public:
    AMeshSystemCenterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectedToCenter(AMeshSystemActorBase* TestedCenter, TArray<AMeshSystemLinkBase*>& ConnectingLinks) const;
    
};

