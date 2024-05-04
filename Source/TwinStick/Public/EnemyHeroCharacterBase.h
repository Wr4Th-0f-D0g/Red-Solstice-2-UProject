#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MapElementInfo.h"
#include "MinimapElementInfo.h"
#include "AIMarineHeroCharacterBase.h"
#include "EDamageGroup.h"
#include "EIndicatorType.h"
#include "EnemyHeroCharacterBase.generated.h"

class AController;
class ASolsticeCharacterBase;
class UAnimMontage;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class TWINSTICK_API AEnemyHeroCharacterBase : public AAIMarineHeroCharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnemyHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthWidgetTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bManuallyRemovedFromMapSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapElementInfo MapElementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinimapElementInfo MinimapElementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InstantSpawnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDeathEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwakenCloseByMembersRadius;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDamageGroup LastDamageGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastDamageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDeadFromRelevancy;
    
public:
    AEnemyHeroCharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TagRemoved(ASolsticeCharacterBase* Char, FGameplayTag RemovedTag);
    
    UFUNCTION(BlueprintCallable)
    void TagAdded(ASolsticeCharacterBase* Char, FGameplayTag AddedTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupEnemyMarineBuffs();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyFinishSpawning();
    
    UFUNCTION(BlueprintCallable)
    void DiscoverHealthbars(AController* InController, EIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void CreateHealthBar();
    
};

