#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PrefabActorDestructionItem.generated.h"

USTRUCT(BlueprintType)
struct FPrefabActorDestructionItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfDeath;
    
    TWINSTICK_API FPrefabActorDestructionItem();
};

