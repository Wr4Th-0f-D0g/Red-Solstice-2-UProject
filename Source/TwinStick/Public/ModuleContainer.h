#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ReplicatedModule.h"
#include "ModuleContainer.generated.h"

USTRUCT(BlueprintType)
struct FModuleContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedModule> Items;
    
    TWINSTICK_API FModuleContainer();
};

