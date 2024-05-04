#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SolsticeBuffManager.h"
#include "SolsticeBuffContainer.generated.h"

USTRUCT(BlueprintType)
struct TWINSTICK_API FSolsticeBuffContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSolsticeBuffManager> Items;
    
    FSolsticeBuffContainer();
};

