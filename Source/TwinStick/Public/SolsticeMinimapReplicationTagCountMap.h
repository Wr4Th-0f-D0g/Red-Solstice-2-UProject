#pragma once
#include "CoreMinimal.h"
#include "SolsticeMinimapReplicationTagCountMap.generated.h"

class UGameplayTagComponent;

USTRUCT(BlueprintType)
struct FSolsticeMinimapReplicationTagCountMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagComponent* Owner;
    
    TWINSTICK_API FSolsticeMinimapReplicationTagCountMap();
};

