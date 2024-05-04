#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EDamageGroup.h"
#include "EDamageState.h"
#include "InstanceKillFastSerializer.h"
#include "MeshDamagedDelegateDelegate.h"
#include "MeshDestroyedDelegateDelegate.h"
#include "MeshRestoredDelegateDelegate.h"
#include "NonDestrISMRemoveFastSerializer.h"
#include "ReplacedActorInfo.h"
#include "ReplacedActors.h"
#include "StaticMeshMaterialPair.h"
#include "Templates/SubclassOf.h"
#include "DestructibleMeshManagerBase.generated.h"

class ACharacter;
class AController;
class AStaticMeshActor;
class UMaterialInterface;
class UMeshDestructionData;
class UParticleSystemComponent;
class UTRSInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class TWINSTICK_API ADestructibleMeshManagerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshDestroyedDelegate MeshDestroyedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshDamagedDelegate MeshDamagedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshRestoredDelegate MeshRestoredDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> MeshesToReplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> ProcessedActorsFromRandomizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshDestructionData* MeshDestructionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ActorsConvertedInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RemoveObjectIgnoreTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IndestructibleObjectTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> IgnoredMaterials;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDamageGroup, float> DamageTypeMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyTimeBeforeAnimEndOnFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatingGeometryCacheCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatingGeometryCacheCheckTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestoreMeshGeometryCachePlaybackOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestoreMeshGeometryAnimationSpeedMultiplyer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> SurroundingTypesDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AdditionalActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UTRSInstancedStaticMeshComponent*, FReplacedActors> ISMActorsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FStaticMeshMaterialPair, UTRSInstancedStaticMeshComponent*> MaterialMeshMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTRSInstancedStaticMeshComponent*> DestroyedObjectISMArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTRSInstancedStaticMeshComponent*> FortifiedObjectISMArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float InitialDestructionPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InitDestructionSeed, meta=(AllowPrivateAccess=true))
    int32 InitialDestructionSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Serializer, meta=(AllowPrivateAccess=true))
    FInstanceKillFastSerializer InstanceDamageSerializer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Serializer, meta=(AllowPrivateAccess=true))
    FNonDestrISMRemoveFastSerializer NonDestrISMRemoveSerializer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlapResult> OverlapResultsHelperArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllActorsReplaced;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AdditionalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AdditionalActors;
    
public:
    ADestructibleMeshManagerBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnhighlightISM();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TakeDamageToItem(const UTRSInstancedStaticMeshComponent* InISM, int32 InIndex, float InDamage, FVector InDirection, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void StartRestoreItem(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetItemHealth(float InNewHealth, const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void Run();
    
    UFUNCTION(BlueprintCallable)
    void RestoreItem(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveSurroundingMeshes(FVector InLocation, FQuat InRotation, float InRadius, AActor* InFloorActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void PopulateISMArrayAndTagActors();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Serializer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InitDestructionSeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ComponentStateChanged(const UTRSInstancedStaticMeshComponent* InInstancedComponent, int32 InIndex, EDamageState InState);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsFortified(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, const int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterOverlappingWall(ACharacter* InCharacter, UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void HighlightUnconvertedISM();
    
    UFUNCTION(BlueprintCallable)
    void HighlightISM();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleNonDestrInstanceRemoved_Client(UTRSInstancedStaticMeshComponent* InISM, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleInstanceStateChanged_Client(FStaticMeshMaterialPair InMeshType, int32 InIndex, EDamageState InState, bool bIsSilent, bool bFortificationChanged, bool bDamageStateChange);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetItemToolTip(UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FReplacedActorInfo> GetItemsInRange(FVector InCenter, float InRadius, FGameplayTagContainer TypesToSelect, bool bInNonDestroyedOnly, bool bInDoSort, bool bInAscending);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetItemCenterTransform(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FReplacedActorInfo GetInfoForItemRef(bool& bOutItemFound, const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInfoForItem(FReplacedActorInfo& OutReplacedItemData, const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void Fortify(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, const int32 InIndex, const FGameplayTag InItemType, const float NewHealth);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishRestoreItem(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecuteArtilleryStrike(float InPercent, int32 InSeed);
    
    UFUNCTION(BlueprintCallable)
    void DisplayRestoreFail(const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void DebugDisplayObjectOffsetCenters();
    
    UFUNCTION(BlueprintCallable)
    void DamageMeshesArea(FVector InCenter, float InRadius, float InDamage, EDamageGroup InDamageType, const AController* EventInstigator, const AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void AddParticleToItem(UParticleSystemComponent* InParticle, const UTRSInstancedStaticMeshComponent* InInstancedMeshComponent, int32 InIndex);
    
};

