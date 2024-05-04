#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ESuitSection.h"
#include "ReplicatedModule.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedModule : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ModuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESuitSection Section;
    
    TWINSTICK_API FReplicatedModule();
};

