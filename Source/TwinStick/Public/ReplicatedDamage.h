#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ReplicatedDamage.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FReplicatedDamage : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> Instigator;
    
    TWINSTICK_API FReplicatedDamage();
};

