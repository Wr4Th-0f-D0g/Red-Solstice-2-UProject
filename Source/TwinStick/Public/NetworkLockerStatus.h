#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "NetworkLockerStatusItem.h"
#include "NetworkLockerStatus.generated.h"

class ARTS_NetworkManager;

USTRUCT(BlueprintType)
struct FNetworkLockerStatus : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetworkLockerStatusItem> Lockers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARTS_NetworkManager> Owner;
    
    TWINSTICK_API FNetworkLockerStatus();
};

