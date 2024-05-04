#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "NetworkLockerStatusItem.generated.h"

class ALocker;

USTRUCT(BlueprintType)
struct FNetworkLockerStatusItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootedTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockerLooted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractionDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALocker> Locker;
    
    TWINSTICK_API FNetworkLockerStatusItem();
};

