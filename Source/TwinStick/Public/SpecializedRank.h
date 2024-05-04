#pragma once
#include "CoreMinimal.h"
#include "ESolsticeHeroClass.h"
#include "PlayerRank.h"
#include "SpecializedRank.generated.h"

USTRUCT(BlueprintType)
struct FSpecializedRank : public FPlayerRank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ESolsticeHeroClass MarineClass;
    
    TWINSTICK_API FSpecializedRank();
};

