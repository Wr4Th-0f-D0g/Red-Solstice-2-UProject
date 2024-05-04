#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "NonDestrISMRemoveSerializableStruct.h"
#include "NonDestrISMRemoveFastSerializer.generated.h"

USTRUCT(BlueprintType)
struct FNonDestrISMRemoveFastSerializer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNonDestrISMRemoveSerializableStruct> Items;
    
    TWINSTICK_API FNonDestrISMRemoveFastSerializer();
};

