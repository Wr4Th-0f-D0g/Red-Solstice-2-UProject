#pragma once
#include "CoreMinimal.h"
#include "MeshSystemActorBase.h"
#include "MeshSystemLinkBase.generated.h"

class UMeshSystemNodeComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AMeshSystemLinkBase : public AMeshSystemActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshSystemNodeComponent* Node1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshSystemNodeComponent* Node2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDimensionlessConnection;
    
    AMeshSystemLinkBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyConnected() const;
    
};

