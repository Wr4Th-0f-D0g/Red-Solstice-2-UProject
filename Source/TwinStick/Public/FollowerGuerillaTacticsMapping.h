#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FollowerGuerillaTacticsMapping.generated.h"

class USolsticeBuffBase;

USTRUCT(BlueprintType)
struct FFollowerGuerillaTacticsMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GuerillaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> GuerillaBuff;
    
    TWINSTICK_API FFollowerGuerillaTacticsMapping();
};

