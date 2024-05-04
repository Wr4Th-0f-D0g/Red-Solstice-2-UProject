#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Damage.h"
#include "DynamicActorBase.h"
#include "OnAllEggsDestroyedDelegate.h"
#include "OnEggDestroyedDelegate.h"
#include "NestBase.generated.h"

class AActor;
class ADestructibleActorBase;
class AMonsterCharacterBase;

UCLASS(Blueprintable)
class TWINSTICK_API ANestBase : public ADynamicActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllEggsDestroyed OnAllEggsDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEggDestroyed OnEggDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonsterCharacterBase* OwningMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNestOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADestructibleActorBase*> SpawnedEggs;
    
    ANestBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNestOccupied(bool bNewOccupied);
    
    UFUNCTION(BlueprintCallable)
    void OnEggKilled(AActor* KilledActor, const FDamage& DamageInfo, bool bRecentlyDied);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOccupied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetNestLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ADestructibleActorBase*> GetEggs() const;
    
    UFUNCTION(BlueprintCallable)
    void AddSpawnedEgg(ADestructibleActorBase* SpawnedEgg);
    
};

