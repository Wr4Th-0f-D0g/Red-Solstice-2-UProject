#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Damage.h"
#include "EHunterQueenState.h"
#include "LocationInfo.h"
#include "MonsterComponentBase.h"
#include "Templates/SubclassOf.h"
#include "HunterQueenComponent.generated.h"

class ADestructibleActorBase;
class ALocationMarkerBase;
class ANestBase;
class ULocationManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWINSTICK_API UHunterQueenComponent : public UMonsterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHunterQueenState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANestBase* NestActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALocationMarkerBase* LocationMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANestBase> NestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADestructibleActorBase> EggClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NestLocTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLocationInfo Location;
    
    UHunterQueenComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ADestructibleActorBase* SpawnEgg(const FVector& EggLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_LocationFound(ALocationMarkerBase* FoundLocationMarker, const FLocationInfo& FoundLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_EggDestroyed(ADestructibleActorBase* DestroyedEgg, const FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ChangedState(EHunterQueenState NewState, EHunterQueenState OldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_AllEggsDestroyed(ANestBase* DestroyedNest);
    
    UFUNCTION(BlueprintCallable)
    void HandleLocationsMapped(ULocationManager* LocManager);
    
    UFUNCTION(BlueprintCallable)
    void HandleEggDestroyed(ADestructibleActorBase* DestroyedEgg, const FDamage& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleALlEggsDestroyed(ANestBase* DestroyedNest);
    
    UFUNCTION(BlueprintCallable)
    void GotoState(EHunterQueenState InState);
    
    UFUNCTION(BlueprintCallable)
    void CreateNest(const FVector& NestLocation);
    
};

