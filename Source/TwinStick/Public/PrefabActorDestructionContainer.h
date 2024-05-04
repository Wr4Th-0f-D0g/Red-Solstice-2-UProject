#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PrefabActorDestructionItem.h"
#include "PrefabActorDestructionContainer.generated.h"

USTRUCT(BlueprintType)
struct FPrefabActorDestructionContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrefabActorDestructionItem> Items;
    
    TWINSTICK_API FPrefabActorDestructionContainer();
};

