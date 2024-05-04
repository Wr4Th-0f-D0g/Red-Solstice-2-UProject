#pragma once
#include "CoreMinimal.h"
#include "SolsticeVehicleRuntimeAttachment.generated.h"

class AActor;
class UMeshComponent;
class USceneComponent;

USTRUCT(BlueprintType)
struct FSolsticeVehicleRuntimeAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ParentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* AttachedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomTag;
    
    TWINSTICK_API FSolsticeVehicleRuntimeAttachment();
};

