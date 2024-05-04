#pragma once
#include "CoreMinimal.h"
#include "ESolsticeHeroClass.h"
#include "PlayerInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SteamDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESolsticeHeroClass HeroClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HeroClassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userID;
    
    TWINSTICK_API FPlayerInfo();
};

