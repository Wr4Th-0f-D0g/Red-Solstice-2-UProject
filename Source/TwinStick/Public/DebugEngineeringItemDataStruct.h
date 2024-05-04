#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DebugEngineeringItemDataStruct.generated.h"

class UItem;
class USolsticeBuffBase;

USTRUCT(BlueprintType)
struct FDebugEngineeringItemDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USolsticeBuffBase> GrantedBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrantedBuffStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> GrantedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrantedItemStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GrantedMission;
    
    TWINSTICK_API FDebugEngineeringItemDataStruct();
};

