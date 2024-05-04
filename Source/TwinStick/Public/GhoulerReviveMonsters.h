#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "GhoulerReviveMonsters.generated.h"

class AMonsterCharacterBase;

USTRUCT(BlueprintType)
struct FGhoulerReviveMonsters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMonsterCharacterBase> MonsterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MonsterLocation;
    
    TWINSTICK_API FGhoulerReviveMonsters();
};

