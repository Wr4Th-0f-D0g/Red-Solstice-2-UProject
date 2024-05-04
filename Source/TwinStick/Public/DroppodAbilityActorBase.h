#pragma once
#include "CoreMinimal.h"
#include "AbilityActorBase.h"
#include "FollowerTag.h"
#include "DroppodAbilityActorBase.generated.h"

class AHeroCharacterBase;
class AMissionBase;

UCLASS(Blueprintable)
class TWINSTICK_API ADroppodAbilityActorBase : public AAbilityActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHeroCharacterBase* SpawningHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollowerTag FollowerToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMissionBase* Mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenFromMonsters;
    
    ADroppodAbilityActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDroppodHero(AHeroCharacterBase* InHero);
    
};

