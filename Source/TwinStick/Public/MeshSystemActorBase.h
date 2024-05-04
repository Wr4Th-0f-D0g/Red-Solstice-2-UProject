#pragma once
#include "CoreMinimal.h"
#include "DynamicActorBase.h"
#include "MeshSystemActorBase.generated.h"

class UMaterialInterface;
class UMeshSystemNodeComponent;

UCLASS(Blueprintable)
class TWINSTICK_API AMeshSystemActorBase : public ADynamicActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultNodeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMeshSystemNodeComponent*, UMeshSystemNodeComponent*> NodeConnectionsMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NodeComponentTag;
    
public:
    AMeshSystemActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstance() const;
    
    UFUNCTION(BlueprintCallable)
    void DrawNodeLocations();
    
    UFUNCTION(BlueprintCallable)
    void Debug();
    
};

