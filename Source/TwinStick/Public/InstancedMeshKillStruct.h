#pragma once
#include "CoreMinimal.h"
#include "InstancedMeshKillStruct.generated.h"

class UTRSInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FInstancedMeshKillStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTRSInstancedStaticMeshComponent* Ism;
    
    TWINSTICK_API FInstancedMeshKillStruct();
};

