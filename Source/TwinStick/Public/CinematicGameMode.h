#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "CinematicGameMode.generated.h"

class AHeroCharacterBase;

UCLASS(Blueprintable, NonTransient)
class TWINSTICK_API ACinematicGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* Leader;
    
    ACinematicGameMode(const FObjectInitializer& ObjectInitializer);

};

