#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "InstanceDamageSerializableStruct.h"
#include "InstanceKillFastSerializer.generated.h"

USTRUCT(BlueprintType)
struct FInstanceKillFastSerializer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstanceDamageSerializableStruct> Items;
    
    TWINSTICK_API FInstanceKillFastSerializer();
};

