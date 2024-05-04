#pragma once
#include "CoreMinimal.h"
#include "ESolsticeHeroClass.h"
#include "SavedCharacterData.h"
#include "CachedPremadeLoadout.generated.h"

USTRUCT(BlueprintType)
struct FCachedPremadeLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeHeroClass HeroClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedCharacterData> SavedLoadouts;
    
    TWINSTICK_API FCachedPremadeLoadout();
};

