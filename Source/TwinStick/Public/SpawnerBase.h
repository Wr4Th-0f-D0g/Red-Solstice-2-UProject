#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESpawnerState.h"
#include "ESpawnerType.h"
#include "Templates/SubclassOf.h"
#include "SpawnerBase.generated.h"

class AMonsterCharacterBase;
class UBillboardComponent;
class UBoxComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ASpawnerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRenderer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfTriggersBeforeDestroying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AMonsterCharacterBase>> MonstersToSpawnOnTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMonstersPerTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveMaxDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnerDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnerType SpawnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SpawnerBounds;
    
public:
    ASpawnerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpawnerType(ESpawnerType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnerState(ESpawnerState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnerEnabled();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnerDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnerDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpawnerType GetSpawnerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpawnerState GetSpawnerState() const;
    
};

