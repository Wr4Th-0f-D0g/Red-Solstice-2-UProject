#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SolsticeBuffManager.generated.h"

class USolsticeBuffBase;

USTRUCT(BlueprintType)
struct TWINSTICK_API FSolsticeBuffManager : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USolsticeBuffBase> Buff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stacks;
    
    FSolsticeBuffManager();
};

