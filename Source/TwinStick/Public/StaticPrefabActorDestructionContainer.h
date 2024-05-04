#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "StaticPrefabActorDestructionItem.h"
#include "StaticPrefabActorDestructionContainer.generated.h"

USTRUCT(BlueprintType)
struct FStaticPrefabActorDestructionContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticPrefabActorDestructionItem> Items;
    
    TWINSTICK_API FStaticPrefabActorDestructionContainer();
};

