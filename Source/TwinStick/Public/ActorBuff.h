#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Templates/SubclassOf.h"
#include "ActorBuff.generated.h"

class AActor;
class USolsticeBuffBase;

USTRUCT(BlueprintType)
struct FActorBuff : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> BuffClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stacks;
    
    TWINSTICK_API FActorBuff();
};

