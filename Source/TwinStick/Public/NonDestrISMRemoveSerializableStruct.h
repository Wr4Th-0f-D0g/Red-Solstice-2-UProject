#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "NonDestrISMRemoveSerializableStruct.generated.h"

class UTRSInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FNonDestrISMRemoveSerializableStruct : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTRSInstancedStaticMeshComponent* Ism;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ItemIndex;
    
    TWINSTICK_API FNonDestrISMRemoveSerializableStruct();
};

