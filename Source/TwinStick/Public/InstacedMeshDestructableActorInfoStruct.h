#pragma once
#include "CoreMinimal.h"
#include "ReplacedActorInfo.h"
#include "ReplacementInfoStruct.h"
#include "InstacedMeshDestructableActorInfoStruct.generated.h"

class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FInstacedMeshDestructableActorInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplacementInfoStruct ReplacementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* InstancedMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplacedActorInfo ActorInfo;
    
    TWINSTICK_API FInstacedMeshDestructableActorInfoStruct();
};

